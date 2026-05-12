/*
 * XREFs of NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400E884C
 * Callers:
 *     NvmeAdapterCleanupSubsystemPort @ 0x1400CD2C0 (NvmeAdapterCleanupSubsystemPort.c)
 *     NvmeAdapterDisconnectControllerInternal @ 0x1400CF800 (NvmeAdapterDisconnectControllerInternal.c)
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400E4E20 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 *     NvmeAdapterDisconnectController @ 0x14019650C (NvmeAdapterDisconnectController.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterDisconnectDeleteFabricControllerQueue @ 0x1400E1C4C (NvmeAdapterDisconnectDeleteFabricControllerQueue.c)
 *     NvmeAdapterDrainFabricControllerQueue @ 0x1400E1D28 (NvmeAdapterDrainFabricControllerQueue.c)
 *     NvmeAdapterFabricRegisterDeregisterHost @ 0x1400E2A38 (NvmeAdapterFabricRegisterDeregisterHost.c)
 *     NvmeAdapterStopControllerWorkItems @ 0x1400E867C (NvmeAdapterStopControllerWorkItems.c)
 *     NvmeAdapterStopFabricControllerNamespaces @ 0x1400E87D8 (NvmeAdapterStopFabricControllerNamespaces.c)
 *     NvmeCompleteSubmissionQueueRequests @ 0x1400E9958 (NvmeCompleteSubmissionQueueRequests.c)
 *     NvmeControllerSubmissionQueueCompletionQuiesce @ 0x1400F56D0 (NvmeControllerSubmissionQueueCompletionQuiesce.c)
 *     NvmeControllerSubmissionQueueQuiesce @ 0x1400F5990 (NvmeControllerSubmissionQueueQuiesce.c)
 */

int __fastcall NvmeAdapterStopFabricNvmeControllerOperations(__int64 a1, char a2)
{
  int v4; // eax
  __int64 v5; // rdx
  unsigned __int16 v6; // ax
  unsigned __int16 i; // di
  unsigned __int16 v8; // di
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int16 j; // di
  __int64 v12; // rdx

  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 192LL) )
  {
    KeCancelTimer((PKTIMER)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 128LL));
    KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 64LL));
    _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 192LL), 0, 1);
  }
  NvmeAdapterStopControllerWorkItems(a1, a2 == 0);
  v4 = *(_DWORD *)(a1 + 572);
  if ( v4 == 1 )
  {
    NvmeAdapterStopFabricControllerNamespaces(a1);
    if ( *(_QWORD *)(a1 + 728) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 948), 1u);
      NvmeControllerSubmissionQueueQuiesce(a1);
      v6 = *(_WORD *)(a1 + 20);
      for ( i = 0; i < v6; ++i )
      {
        NvmeAdapterDrainFabricControllerQueue(*(_QWORD *)(a1 + 728) + 192LL * i);
        v6 = *(_WORD *)(a1 + 20);
      }
      v8 = 0;
      if ( v6 )
      {
        do
        {
          LOBYTE(v5) = 2;
          NvmeCompleteSubmissionQueueRequests(*(_QWORD *)(a1 + 728) + 192LL * v8++, v5, 3221226048LL);
        }
        while ( v8 < *(_WORD *)(a1 + 20) );
      }
      NvmeControllerSubmissionQueueCompletionQuiesce(a1);
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 948), 1u);
      for ( j = 0; j < *(_WORD *)(a1 + 20); ++j )
        NvmeAdapterDisconnectDeleteFabricControllerQueue(*(_QWORD *)(a1 + 728) + 192LL * j, v9, v10);
    }
    *(_WORD *)(a1 + 22) = 0;
  }
  else if ( v4 == 2 )
  {
    NvmeAdapterFabricRegisterDeregisterHost((_QWORD *)a1, 0);
  }
  NvmeAdapterDrainFabricControllerQueue(*(_QWORD *)(a1 + 712));
  LOBYTE(v12) = 2;
  NvmeCompleteSubmissionQueueRequests(*(_QWORD *)(a1 + 712), v12, 3221226048LL);
  return StorEtwNvmeControllerEvent(
           a1,
           1,
           4,
           (__int64)L"Controller operations stopped",
           (void *)&word_140150F48,
           0,
           &word_140150F48,
           0,
           &word_140150F48,
           0,
           &word_140150F48,
           0,
           (void *)&word_140150F48,
           0,
           (void *)&word_140150F48,
           0,
           (void *)&word_140150F48,
           0,
           (void *)&word_140150F48,
           0);
}
