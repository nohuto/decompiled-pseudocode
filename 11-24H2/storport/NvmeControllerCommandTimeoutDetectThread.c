/*
 * XREFs of NvmeControllerCommandTimeoutDetectThread @ 0x140136CA0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerAcquireRundown @ 0x1400BEB10 (NvmeControllerAcquireRundown.c)
 *     NvmeControllerDetectCommandTimeout @ 0x140136F70 (NvmeControllerDetectCommandTimeout.c)
 *     NvmeControllerResetRecovery @ 0x140137858 (NvmeControllerResetRecovery.c)
 *     NvmeDeviceHierarchicalReset @ 0x140137CF0 (NvmeDeviceHierarchicalReset.c)
 */

NTSTATUS __fastcall NvmeControllerCommandTimeoutDetectThread(__int64 a1)
{
  __int64 i; // rax
  int v3; // eax

  if ( (int)NvmeControllerAcquireRundown(a1) >= 0 )
  {
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 200LL), Executive, 0, 0, 0LL);
    for ( i = *(_QWORD *)(a1 + 136); (i & 0x80000000) == 0; i = *(_QWORD *)(a1 + 136) )
    {
      if ( (i & 2) == 0 || *(_DWORD *)(a1 + 568) != 4 )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1072), 3u);
        if ( !**(_DWORD **)(a1 + 1288) )
        {
          v3 = NvmeControllerDetectCommandTimeout(a1) - 2;
          if ( !v3 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 192LL) )
            {
              KeCancelTimer((PKTIMER)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 128LL));
              KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 64LL));
              _InterlockedCompareExchange(
                (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 192LL),
                0,
                1);
            }
            NvmeDeviceHierarchicalReset(a1, *(PSLIST_HEADER *)(*(_QWORD *)(a1 + 1288) + 32LL));
            goto LABEL_16;
          }
          if ( v3 == 1 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 192LL) )
            {
              KeCancelTimer((PKTIMER)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 128LL));
              KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 64LL));
              _InterlockedCompareExchange(
                (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 192LL),
                0,
                1);
            }
            if ( (*(_BYTE *)(a1 + 136) & 2) == 0 )
            {
              NvmeControllerResetRecovery(a1);
LABEL_16:
              if ( FeatureFixTRIMAddSCSIPassthrough )
                **(_QWORD **)(*(_QWORD *)(a1 + 1288) + 40LL) = KeQueryUnbiasedInterruptTime();
              if ( !_InterlockedCompareExchange(
                      (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 192LL),
                      1,
                      0) )
                KeSetCoalescableTimer(
                  (PKTIMER)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 128LL),
                  (LARGE_INTEGER)-50000000LL,
                  0x7D0u,
                  0x12Cu,
                  (PKDPC)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 64LL));
              goto LABEL_20;
            }
            *(_DWORD *)(a1 + 568) = 4;
            *(_DWORD *)(a1 + 1192) = 39;
            KeClearEvent((PRKEVENT)(a1 + 232));
            IoQueueWorkItem(
              *(PIO_WORKITEM *)(a1 + 160),
              (PIO_WORKITEM_ROUTINE)NvmeAdapterNvmeControllerRebuildAssociationWork,
              DelayedWorkQueue,
              (PVOID)a1);
          }
        }
      }
LABEL_20:
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 200LL), Executive, 0, 0, 0LL);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 552));
  }
  return PsTerminateSystemThread(0);
}
