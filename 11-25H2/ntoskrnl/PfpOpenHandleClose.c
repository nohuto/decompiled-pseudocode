/*
 * XREFs of PfpOpenHandleClose @ 0x1408C2D04
 * Callers:
 *     PfpQueryFileExtentsRequest @ 0x140739C28 (PfpQueryFileExtentsRequest.c)
 *     PfSnPopulateReadList @ 0x1408C1D90 (PfSnPopulateReadList.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1408C2F48 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpVolumeOpenAndVerify @ 0x1408E9330 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchRequestPerform @ 0x1408EAE18 (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchVolumesCleanup @ 0x1408EB2A0 (PfpPrefetchVolumesCleanup.c)
 *     PfSnCleanupPrefetchHeader @ 0x1408EC328 (PfSnCleanupPrefetchHeader.c)
 *     PfSnQueryVolumeInfo @ 0x1408EC988 (PfSnQueryVolumeInfo.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1408ECD5C (PfSnOpenVolumesForPrefetch.c)
 *     PfpPrefetchDirectoryStream @ 0x1409C6DF4 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchEntireDirectory @ 0x1409C745C (PfpPrefetchEntireDirectory.c)
 *     PfpFileBuildReadSupport @ 0x1409C7864 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x1409C7C40 (PfpReadSupportCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PfpOpenHandleClose(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !_bittest64((const signed __int64 *)(a1 + 24), 0x24u) )
  {
    v4[1] = *(_QWORD *)a1;
    v4[2] = *(_QWORD *)(a1 + 8);
    v4[3] = *(_QWORD *)(a1 + 16);
    v4[0] = a2 + 40;
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 84));
    guard_dispatch_icall_no_overrides(v4);
  }
  result = 0x800000000LL;
  *(_QWORD *)(a1 + 24) |= 0x800000000uLL;
  return result;
}
