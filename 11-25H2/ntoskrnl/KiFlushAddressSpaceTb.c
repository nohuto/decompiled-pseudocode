/*
 * XREFs of KiFlushAddressSpaceTb @ 0x14026F6A0
 * Callers:
 *     MiDecommitAddToList @ 0x140382190 (MiDecommitAddToList.c)
 *     MiManageUltraSpacePageTable @ 0x140450E6C (MiManageUltraSpacePageTable.c)
 *     KeFlushProcessTb @ 0x14045CF7C (KeFlushProcessTb.c)
 *     KeFlushEntireTb @ 0x1405B89A0 (KeFlushEntireTb.c)
 * Callees:
 *     HvlpFastFlushAddressSpaceTb @ 0x14027015C (HvlpFastFlushAddressSpaceTb.c)
 *     KxSetTimeStampBusy @ 0x1402703B8 (KxSetTimeStampBusy.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x140270B34 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14043C4C0 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1404C2F48 (HvlpFastFlushAddressSpaceTbEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x140695D9C (HvlpSlowFlushAddressSpaceTbEx.c)
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
        KiRaiseIrqlProcessIrqlFlags(a1);
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
