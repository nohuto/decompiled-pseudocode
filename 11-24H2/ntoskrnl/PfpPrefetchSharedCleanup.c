/*
 * XREFs of PfpPrefetchSharedCleanup @ 0x1409362F0
 * Callers:
 *     PfpQueryFileExtentsRequest @ 0x140743F38 (PfpQueryFileExtentsRequest.c)
 *     PfpPrefetchRequestPerform @ 0x1409353B4 (PfpPrefetchRequestPerform.c)
 *     PfSnCleanupPrefetchHeader @ 0x140935CD8 (PfSnCleanupPrefetchHeader.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 *     PsSetCurrentThreadPrefetching @ 0x140953FC0 (PsSetCurrentThreadPrefetching.c)
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
    FsRtlAcquirePushLockExclusive(&qword_140E67100);
    v2 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v3 = *(_QWORD **)(a1 + 8), *v3 != a1) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    VmpReleasePushLockExclusive((volatile signed __int64 *)&qword_140E67100);
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
