/*
 * XREFs of FsRtlpOpBatchBreakClosePending @ 0x1406FF6FC
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x140A17B60 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140425440 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpClearOwner @ 0x140465220 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047F2B8 (FsRtlpModifyThreadPriorities.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057C46C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x14057D1B8 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14057DFDC (FsRtlpSyncWithAckTimeout.c)
 *     FsRtlpOplockPerfSendData @ 0x1406FFED4 (FsRtlpOplockPerfSendData.c)
 */

__int64 __fastcall FsRtlpOpBatchBreakClosePending(__int64 a1, __int64 a2, IRP *a3)
{
  unsigned int v6; // edi
  int v8; // eax
  bool v9; // zf
  _QWORD *v10; // rcx
  unsigned int v11; // eax

  v6 = 0;
  if ( a1 )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
    if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 48) && (v8 = *(_DWORD *)(a1 + 144), (v8 & 0x700) != 0) )
    {
      if ( (v8 & 0x82) != 0 )
      {
        FsRtlpModifyThreadPriorities(a1, 0LL, 0);
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
          v10 = *(_QWORD **)(a1 + 88);
          if ( v10 == (_QWORD *)(a1 + 88) )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(v10);
        }
        if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
        {
          FsRtlpSyncWithAckTimeout((PVOID *)(a1 + 176));
          FsRtlpOplockPerfSendData(a1 + 160);
        }
      }
      else
      {
        v11 = v8 & 0xFE0FF0FF;
        *(_DWORD *)(a1 + 144) = v11;
        *(_DWORD *)(a1 + 144) = v11 | 0x800;
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
