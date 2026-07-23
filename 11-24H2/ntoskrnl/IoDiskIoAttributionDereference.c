/*
 * XREFs of IoDiskIoAttributionDereference @ 0x14020D960
 * Callers:
 *     IoGetIoRateControl @ 0x14020D3D0 (IoGetIoRateControl.c)
 *     IoRecordIoAttribution @ 0x14020D5B0 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x14020D960 (IoDiskIoAttributionDereference.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140273B00 (MiCheckAndUpdateIoAttribution.c)
 *     MiGatherMappedPages @ 0x1402EB8C0 (MiGatherMappedPages.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140484128 (IoSetDiskIoAttributionOnProcess.c)
 *     IoNotifyQuotaState @ 0x1404913C0 (IoNotifyQuotaState.c)
 *     CcUninitializeCacheMap @ 0x1404D3ED0 (CcUninitializeCacheMap.c)
 *     CcCopyReadEx @ 0x1404D5990 (CcCopyReadEx.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 *     CcPerformReadAhead @ 0x1404D78D0 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1404D929C (CcCompleteAsyncRead.c)
 *     PspIoRateEntryDeactivate @ 0x14085A670 (PspIoRateEntryDeactivate.c)
 *     PspRemoveIoAttribution @ 0x14085B7D4 (PspRemoveIoAttribution.c)
 *     MiSegmentDelete @ 0x140A0B944 (MiSegmentDelete.c)
 *     PspIoRateEntryActivate @ 0x140A6D2B4 (PspIoRateEntryActivate.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14020D960 (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
