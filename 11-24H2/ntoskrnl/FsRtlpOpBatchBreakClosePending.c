/*
 * XREFs of FsRtlpOpBatchBreakClosePending @ 0x14070919C
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1409E0F60 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1402907B4 (FsRtlpClearOwner.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402B9194 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047A8E8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14057EB0C (FsRtlpSyncWithAckTimeout.c)
 *     FsRtlpOplockPerfSendData @ 0x140709948 (FsRtlpOplockPerfSendData.c)
 */

__int64 __fastcall FsRtlpOpBatchBreakClosePending(__int64 a1, __int64 a2, IRP *a3)
{
  unsigned int v6; // edi
  int v8; // eax
  _QWORD *v9; // rcx
  unsigned int v10; // eax

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
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
        *(_QWORD *)(a1 + 8) = 0LL;
        while ( 1 )
        {
          v9 = *(_QWORD **)(a1 + 88);
          if ( v9 == (_QWORD *)(a1 + 88) )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(v9);
        }
        FsRtlpSyncWithAckTimeout((PVOID *)(a1 + 176));
        FsRtlpOplockPerfSendData(a1 + 160);
        v6 = 0;
      }
      else
      {
        v10 = v8 & 0xFE0FF0FF;
        *(_DWORD *)(a1 + 144) = v10;
        *(_DWORD *)(a1 + 144) = v10 | 0x800;
      }
    }
    else
    {
      v6 = -1073741597;
    }
    a3->IoStatus.Status = v6;
    IofCompleteRequest(a3, 1);
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
    return v6;
  }
  else
  {
    a3->IoStatus.Status = -1073741597;
    IofCompleteRequest(a3, 1);
    return 3221225699LL;
  }
}
