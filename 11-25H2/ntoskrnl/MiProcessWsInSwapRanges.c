/*
 * XREFs of MiProcessWsInSwapRanges @ 0x14045538C
 * Callers:
 *     MiProcessWsInSwapSupport @ 0x140455294 (MiProcessWsInSwapSupport.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     MiReleaseOutSwapReservations @ 0x140455434 (MiReleaseOutSwapReservations.c)
 *     MmPrefetchVirtualMemory @ 0x1409C69F8 (MmPrefetchVirtualMemory.c)
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
