/*
 * XREFs of PfpOpenHandleClose @ 0x14096B934
 * Callers:
 *     PfpQueryFileExtentsRequest @ 0x140745C48 (PfpQueryFileExtentsRequest.c)
 *     PfpVolumeOpenAndVerify @ 0x140950C88 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchRequestPerform @ 0x140951A08 (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchVolumesCleanup @ 0x140951E90 (PfpPrefetchVolumesCleanup.c)
 *     PfSnCleanupPrefetchHeader @ 0x140952328 (PfSnCleanupPrefetchHeader.c)
 *     PfpPrefetchDirectoryStream @ 0x140953524 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchEntireDirectory @ 0x140953B8C (PfpPrefetchEntireDirectory.c)
 *     PfpFileBuildReadSupport @ 0x140953F94 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x140954370 (PfpReadSupportCleanup.c)
 *     PfSnPopulateReadList @ 0x14096A9C0 (PfSnPopulateReadList.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x14096BB78 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14096BF6C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x14096E298 (PfSnQueryVolumeInfo.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PfpOpenHandleClose(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !_bittest64((const signed __int64 *)(a1 + 24), 0x24u) )
  {
    v6[1] = *(_QWORD *)a1;
    v6[2] = *(_QWORD *)(a1 + 8);
    v6[3] = *(_QWORD *)(a1 + 16);
    v6[0] = a2 + 40;
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 84));
    guard_dispatch_icall_no_overrides(v6, a2, a3, a4);
  }
  result = 0x800000000LL;
  *(_QWORD *)(a1 + 24) |= 0x800000000uLL;
  return result;
}
