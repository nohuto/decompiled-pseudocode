/*
 * XREFs of KiFlushAddressSpaceTb @ 0x1403AFCAC
 * Callers:
 *     MiDecommitAddToList @ 0x1402889A0 (MiDecommitAddToList.c)
 *     MiManageUltraSpacePageTable @ 0x1402D1CC4 (MiManageUltraSpacePageTable.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1403AE894 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeFlushProcessTb @ 0x14045BC40 (KeFlushProcessTb.c)
 *     KeFlushEntireTb @ 0x1405BC840 (KeFlushEntireTb.c)
 * Callees:
 *     HvlpFastFlushAddressSpaceTb @ 0x1403B0AC4 (HvlpFastFlushAddressSpaceTb.c)
 *     KxSetTimeStampBusy @ 0x1403B0DCC (KxSetTimeStampBusy.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1403B1518 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1403C9984 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14043B838 (HvlpSlowFlushAddressSpaceTb.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1406A0FD0 (HvlpSlowFlushAddressSpaceTbEx.c)
 */

__int64 __fastcall KiFlushAddressSpaceTb(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // bl
  __int64 v5; // r10
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rdx
  __int64 v9; // r8

  v4 = a3;
  v5 = a1;
  if ( a1 )
  {
    if ( a2 )
      goto LABEL_3;
LABEL_4:
    if ( (HvlEnlightenments & 0x80u) == 0 )
      return HvlpSlowFlushAddressSpaceTb(v5, a2, a3);
    else
      return HvlpFastFlushAddressSpaceTb(v5, a2, a3);
  }
  if ( !a2 )
  {
    if ( a4 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a1) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(a1, 12LL);
      }
      if ( (unsigned __int8)KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
      {
        LOBYTE(v9) = v4;
        if ( (HvlEnlightenments & 0x80u) == 0 )
          HvlpSlowFlushAddressSpaceTb(0LL, 0LL, v9);
        else
          HvlpFastFlushAddressSpaceTb(0LL, 0LL, v9);
        _InterlockedIncrement(&KiTbFlushTimeStamp);
      }
      if ( KiIrqlFlags )
      {
        LOBYTE(v8) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      return result;
    }
    goto LABEL_4;
  }
LABEL_3:
  if ( !(unsigned __int8)HvlpUseExtendedProcessorSetHypercalls() )
    goto LABEL_4;
  if ( ((HvlpFlags >> 8) & 0xF) + 5 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
    return HvlpSlowFlushAddressSpaceTbEx(v5);
  else
    return HvlpFastFlushAddressSpaceTbEx(v5);
}
