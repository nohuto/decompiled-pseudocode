/*
 * XREFs of KeAlertThread @ 0x140475190
 * Callers:
 *     IoDecrementKeepAliveCount @ 0x140474F30 (IoDecrementKeepAliveCount.c)
 *     KeRequestTerminationThread @ 0x1404750A8 (KeRequestTerminationThread.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x140487180 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     KeAlertResumeThread @ 0x1405B5180 (KeAlertResumeThread.c)
 *     NtAlertThread @ 0x140A6D830 (NtAlertThread.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiSignalThread @ 0x1402CCDD0 (KiSignalThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KeAlertThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int v6; // edi
  char v7; // si
  char v9; // al
  char v10; // al

  v2 = (char)a2;
  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 64), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v3 + 64) );
  }
  v7 = *(_BYTE *)(v2 + v3 + 114);
  if ( !v7 )
  {
    if ( *(_BYTE *)(v3 + 388) != 5
      || (v9 = *(_BYTE *)(v3 + 112) & 7, v9 == 4)
      || v9 == 3
      || (*(_DWORD *)(v3 + 116) & 0x10) == 0
      || (char)v2 > *(char *)(v3 + 391)
      || (v10 = KiSignalThread((__int64)CurrentPrcb, v3, 257LL, 0LL), *(_BYTE *)(v3 + 112) |= 0x80u, !v10) )
    {
      *(_BYTE *)(v2 + v3 + 114) = 1;
    }
  }
  *(_QWORD *)(v3 + 64) = 0LL;
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 2u, CurrentIrql);
  return v7;
}
