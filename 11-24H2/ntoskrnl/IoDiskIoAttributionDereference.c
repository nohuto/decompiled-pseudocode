/*
 * XREFs of IoDiskIoAttributionDereference @ 0x140245180
 * Callers:
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     IoGetIoRateControl @ 0x140244BF0 (IoGetIoRateControl.c)
 *     IoRecordIoAttribution @ 0x140244DD0 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x140245180 (IoDiskIoAttributionDereference.c)
 *     MiGatherMappedPages @ 0x140369B20 (MiGatherMappedPages.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1403C6078 (MiCheckAndUpdateIoAttribution.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140489168 (IoSetDiskIoAttributionOnProcess.c)
 *     IoNotifyQuotaState @ 0x140496A30 (IoNotifyQuotaState.c)
 *     CcUninitializeCacheMap @ 0x1404DA4B0 (CcUninitializeCacheMap.c)
 *     CcCopyReadEx @ 0x1404DBF70 (CcCopyReadEx.c)
 *     CcMapAndCopyInToCache @ 0x1404DD240 (CcMapAndCopyInToCache.c)
 *     CcPerformReadAhead @ 0x1404DDEB0 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1404DF87C (CcCompleteAsyncRead.c)
 *     PspIoRateEntryDeactivate @ 0x14085E900 (PspIoRateEntryDeactivate.c)
 *     PspIoRateEntryActivate @ 0x14085F29C (PspIoRateEntryActivate.c)
 *     PspRemoveIoAttribution @ 0x1408E9FA4 (PspRemoveIoAttribution.c)
 *     MiSegmentDelete @ 0x140A131E4 (MiSegmentDelete.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x140245180 (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IoDiskIoAttributionDereference(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  __int64 v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = *(_QWORD *)(a1 + 176);
    if ( v5 )
      IoDiskIoAttributionDereference(v5);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
