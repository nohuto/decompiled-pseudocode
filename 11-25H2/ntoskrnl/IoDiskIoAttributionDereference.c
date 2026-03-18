/*
 * XREFs of IoDiskIoAttributionDereference @ 0x14034EA34
 * Callers:
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 *     IoGetIoRateControl @ 0x14034E4B0 (IoGetIoRateControl.c)
 *     IoRecordIoAttribution @ 0x14034E690 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x14034EA34 (IoDiskIoAttributionDereference.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1403AA938 (MiCheckAndUpdateIoAttribution.c)
 *     MiGatherMappedPages @ 0x14040CB20 (MiGatherMappedPages.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140489A74 (IoSetDiskIoAttributionOnProcess.c)
 *     IoNotifyQuotaState @ 0x140496E90 (IoNotifyQuotaState.c)
 *     CcUninitializeCacheMap @ 0x1404DADC0 (CcUninitializeCacheMap.c)
 *     CcCopyReadEx @ 0x1404DC880 (CcCopyReadEx.c)
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
 *     CcPerformReadAhead @ 0x1404DE7C0 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1404E018C (CcCompleteAsyncRead.c)
 *     PspRemoveIoAttribution @ 0x1408DABD8 (PspRemoveIoAttribution.c)
 *     MiSegmentDelete @ 0x140A095FC (MiSegmentDelete.c)
 *     PspIoRateEntryDeactivate @ 0x140A3B030 (PspIoRateEntryDeactivate.c)
 *     PspIoRateEntryActivate @ 0x140A3B3A4 (PspIoRateEntryActivate.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14034EA34 (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
