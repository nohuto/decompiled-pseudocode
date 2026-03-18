/*
 * XREFs of FsRtlpOpBatchBreakClosePending @ 0x14070B5DC
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x140A20DD0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1402601A4 (FsRtlpClearOwner.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14033091C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047FCA8 (FsRtlpModifyThreadPriorities.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x1404F48B4 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057F78C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14058178C (FsRtlpSyncWithAckTimeout.c)
 *     FsRtlpOplockPerfSendData @ 0x14070BDB4 (FsRtlpOplockPerfSendData.c)
 */

__int64 __fastcall FsRtlpOpBatchBreakClosePending(__int64 a1, __int64 a2, IRP *a3)
{
  unsigned int v6; // edi
  int v8; // eax
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rcx
  unsigned int v14; // eax

  v6 = 0;
  if ( a1 )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
    if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 48) && (v8 = *(_DWORD *)(a1 + 144), (v8 & 0x700) != 0) )
    {
      if ( (v8 & 0x82) != 0 )
      {
        FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
        FsRtlpClearOwner(a1, 0LL);
        *(_BYTE *)(a1 + 32) = 0;
        if ( (*(_DWORD *)(a1 + 144) & 2) != 0 )
          ObfDereferenceObject(*(PVOID *)(a1 + 8));
        v9 = (unsigned int)Feature_5645_7108__private_IsEnabledDeviceUsageNoInline() == 0;
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
        if ( !v9 )
          v6 = 0;
        *(_QWORD *)(a1 + 8) = 0LL;
        while ( 1 )
        {
          v13 = *(_QWORD **)(a1 + 88);
          if ( v13 == (_QWORD *)(a1 + 88) )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(v13, v10, v11, v12);
        }
        if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
        {
          FsRtlpSyncWithAckTimeout((PVOID *)(a1 + 176));
          FsRtlpOplockPerfSendData(a1 + 160);
        }
      }
      else
      {
        v14 = v8 & 0xFE0FF0FF;
        *(_DWORD *)(a1 + 144) = v14;
        *(_DWORD *)(a1 + 144) = v14 | 0x800;
      }
    }
    else
    {
      v6 = -1073741597;
    }
    a3->IoStatus.Status = v6;
    IofCompleteRequest(a3, 1);
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  }
  else
  {
    v6 = -1073741597;
    a3->IoStatus.Status = -1073741597;
    IofCompleteRequest(a3, 1);
  }
  return v6;
}
