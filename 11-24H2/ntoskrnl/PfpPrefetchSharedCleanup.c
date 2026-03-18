/*
 * XREFs of PfpPrefetchSharedCleanup @ 0x140952940
 * Callers:
 *     PfpQueryFileExtentsRequest @ 0x140745C48 (PfpQueryFileExtentsRequest.c)
 *     PfpPrefetchRequestPerform @ 0x140951A08 (PfpPrefetchRequestPerform.c)
 *     PfSnCleanupPrefetchHeader @ 0x140952328 (PfSnCleanupPrefetchHeader.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403C5B9C (FsRtlAcquirePushLockExclusive.c)
 *     VmpReleasePushLockExclusive @ 0x1404860F0 (VmpReleasePushLockExclusive.c)
 *     PsSetCurrentThreadPrefetching @ 0x14096B530 (PsSetCurrentThreadPrefetching.c)
 */

void __fastcall PfpPrefetchSharedCleanup(ULONG_PTR a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  int v4; // ecx

  if ( *(_QWORD *)(a1 + 128) )
    KeAbPostRelease(a1);
  if ( *(_QWORD *)(a1 + 136) )
    KeAbPostRelease((ULONG_PTR)&PfGlobals);
  if ( *(_QWORD *)a1 )
  {
    FsRtlAcquirePushLockExclusive(&qword_140E66FB0);
    v2 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v3 = *(_QWORD **)(a1 + 8), *v3 != a1) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    VmpReleasePushLockExclusive((volatile signed __int64 *)&qword_140E66FB0);
  }
  v4 = *(_DWORD *)(a1 + 68);
  if ( (v4 & 1) != 0 )
  {
    ExReleaseRundownProtection_0(&RunRef);
    *(_DWORD *)(a1 + 68) &= ~1u;
    v4 = *(_DWORD *)(a1 + 68);
  }
  if ( *(_QWORD *)(a1 + 16) )
    PsSetCurrentThreadPrefetching((v4 & 2) != 0);
  if ( (*(_DWORD *)(a1 + 68) & 8) != 0 )
    KeLeaveCriticalRegion();
}
