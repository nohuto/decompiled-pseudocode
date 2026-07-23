/*
 * XREFs of MiLockVadCore @ 0x1403DAE20
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x140202774 (MiCaptureWriteWatchDirtyBit.c)
 *     MiCheckUserVirtualAddress @ 0x140309FA0 (MiCheckUserVirtualAddress.c)
 *     MiSetVadFlags @ 0x14036049C (MiSetVadFlags.c)
 *     MiClearVadTrimBehind @ 0x1403DAD00 (MiClearVadTrimBehind.c)
 *     MiWriteVadFlags2 @ 0x1403DAD90 (MiWriteVadFlags2.c)
 *     MiGetVadWakeList @ 0x140443B20 (MiGetVadWakeList.c)
 *     MiInsertVadEvent @ 0x1404EF5E8 (MiInsertVadEvent.c)
 *     MiLocateOldestSecure @ 0x1404EF644 (MiLocateOldestSecure.c)
 *     MiMakeSecureExclusive @ 0x1404EF690 (MiMakeSecureExclusive.c)
 *     MiRemoveSecureEntry @ 0x1404EF6FC (MiRemoveSecureEntry.c)
 *     MiRemoveVadEvent @ 0x1406796DC (MiRemoveVadEvent.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockVadCore(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // di
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  unsigned int v7; // esi

  if ( (a2 & 1) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  }
  v4 = *(_DWORD *)(a1 + 48);
  do
  {
    while ( (v4 & 1) != 0 )
    {
      if ( (v4 & 2) != 0 )
      {
        v7 = 0;
        do
        {
          if ( (++v7 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v7);
          }
          else
          {
            _mm_pause();
          }
          v4 = *(_DWORD *)(a1 + 48);
        }
        while ( (v4 & 1) != 0 );
      }
      else
      {
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v4 | 2, v4);
      }
    }
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v4 & 0xFFFFFFFC | 1, v4);
  }
  while ( v5 != v4 );
  return CurrentIrql;
}
