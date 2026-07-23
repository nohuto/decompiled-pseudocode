/*
 * XREFs of MiProcessWsInSwapRanges @ 0x1403C68D4
 * Callers:
 *     MiProcessWsInSwapSupport @ 0x1403C67DC (MiProcessWsInSwapSupport.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     MiReleaseOutSwapReservations @ 0x1403C697C (MiReleaseOutSwapReservations.c)
 *     MmPrefetchVirtualMemory @ 0x140936AD8 (MmPrefetchVirtualMemory.c)
 */

void __fastcall MiProcessWsInSwapRanges(_QWORD *a1, __int64 a2, char a3)
{
  int v6; // edi
  struct _KTHREAD *CurrentThread; // r8

  v6 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  MmPrefetchVirtualMemory(-(__int64)(*a1 < 0xFFFF800000000000uLL));
  if ( v6 )
    KeLeaveGuardedRegion();
  if ( (a3 & 1) == 0 )
    MiReleaseOutSwapReservations(a1, a2);
}
