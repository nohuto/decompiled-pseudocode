/*
 * XREFs of FsRtlpAcknowledgeOplockBreak @ 0x14057DC84
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1409E0F60 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1402907B4 (FsRtlpClearOwner.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402B9194 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047A8E8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14057DFDC (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14057EB0C (FsRtlpSyncWithAckTimeout.c)
 *     FsRtlpOplockPerfSendData @ 0x140709948 (FsRtlpOplockPerfSendData.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A0E080 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlpAcknowledgeOplockBreak(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned int a5)
{
  char v10; // si
  int v11; // r10d
  int v12; // eax
  unsigned int v13; // eax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // eax
  _QWORD *v19; // rcx
  unsigned int v20; // r14d
  int v21; // [rsp+24h] [rbp-24h]
  int v22; // [rsp+28h] [rbp-20h]

  if ( !a1 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    return 3221225699LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v10 = 1;
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 48) )
  {
    if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(16LL, a5) )
    {
      v12 = *(_DWORD *)(a1 + 144);
      if ( (v12 & 0x100) != 0 )
      {
        v13 = v12 & 0xFFFFFEFF;
        *(_DWORD *)(a1 + 144) = v13;
        *(_DWORD *)(a1 + 144) = v13 | 0x400;
      }
    }
    if ( a4 && (*(_DWORD *)(a1 + 144) & 0x100) != 0 )
    {
      *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
      *(_DWORD *)(a3 + 48) = 0;
      v14 = (_QWORD *)(a3 + 168);
      v15 = (_QWORD *)(a1 + 40);
      v16 = *(_QWORD *)(a1 + 40);
      if ( *(_QWORD *)(v16 + 8) != a1 + 40 )
        __fastfail(3u);
      *v14 = v16;
      *(_QWORD *)(a3 + 176) = v15;
      *(_QWORD *)(v16 + 8) = v14;
      *v15 = v14;
      *(_QWORD *)(a3 + 56) = a1;
      v10 = 0;
      v21 = v11;
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        LOBYTE(v17) = 1;
        FsRtlpCancelReadOnlyOplockIrp(a3, v17);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
      }
      v22 = 259;
      goto LABEL_20;
    }
    v18 = *(_DWORD *)(a1 + 144);
    if ( (v18 & 0x300) != 0 )
    {
      v22 = 0;
LABEL_19:
      *(_DWORD *)(a3 + 48) = 0;
      IofCompleteRequest((PIRP)a3, 1);
      v21 = 1;
LABEL_20:
      while ( 1 )
      {
        v19 = *(_QWORD **)(a1 + 88);
        if ( v19 == (_QWORD *)(a1 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v19);
      }
      if ( v10 )
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
      *(_QWORD *)(a1 + 8) = 0LL;
      FsRtlpModifyThreadPriorities(a1, 0LL, 0);
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 144) = v21 | *(_DWORD *)(a1 + 144) & 0x20;
      FsRtlpSyncWithAckTimeout(a1 + 176);
      FsRtlpOplockPerfSendData(a1 + 160);
      v20 = v22;
      goto LABEL_26;
    }
    if ( (v18 & 0x400) != 0 )
    {
      v22 = 0;
      *(_QWORD *)(a3 + 56) = 8LL;
      goto LABEL_19;
    }
  }
  v20 = -1073741597;
  *(_DWORD *)(a3 + 48) = -1073741597;
  IofCompleteRequest((PIRP)a3, 1);
LABEL_26:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  return v20;
}
