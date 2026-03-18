/*
 * XREFs of FsRtlpCancelExclusiveIrp @ 0x140580A94
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0638 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E4608 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpExclusiveIrpCancelRoutine @ 0x140580D60 (FsRtlpExclusiveIrpCancelRoutine.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x140580DB0 (FsRtlpGrantAnyOplockFromExclusive.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1402601A4 (FsRtlpClearOwner.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14033091C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047FCA8 (FsRtlpModifyThreadPriorities.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x1404F48B4 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057F78C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14058178C (FsRtlpSyncWithAckTimeout.c)
 *     FsRtlpOplockPerfSendData @ 0x14070BDB4 (FsRtlpOplockPerfSendData.c)
 */

void __fastcall FsRtlpCancelExclusiveIrp(__int64 a1, char a2, char a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rcx

  v5 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  if ( !a2 )
    ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(v5 + 152));
  if ( *(_QWORD *)v5 && *(_BYTE *)(*(_QWORD *)v5 + 68LL) )
  {
    FsRtlpModifyThreadPriorities(v5, 0LL, 0LL);
    FsRtlpClearOwner(v5, 0LL);
    *(_BYTE *)(v5 + 32) = 0;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 56LL) == v5 )
      *(_QWORD *)(*(_QWORD *)v5 + 56LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)v5 + 48LL) = -1073741536;
    IofCompleteRequest(*(PIRP *)v5, 1);
    *(_QWORD *)v5 = 0LL;
    ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 8), 0x746C6644u);
    *(_QWORD *)(v5 + 8) = 0LL;
    Feature_5645_7108__private_IsEnabledDeviceUsageNoInline();
    *(_DWORD *)(v5 + 144) = *(_DWORD *)(v5 + 144) & 0x20 | 1;
    if ( a3 )
    {
      if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
      {
        FsRtlpSyncWithAckTimeout(v5 + 176);
        FsRtlpOplockPerfSendData(v5 + 160);
      }
      while ( 1 )
      {
        v9 = *(_QWORD **)(v5 + 88);
        if ( v9 == (_QWORD *)(v5 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v9, v6, v7, v8);
      }
    }
  }
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 152));
}
