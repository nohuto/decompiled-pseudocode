/*
 * XREFs of FsRtlpAcknowledgeOplockBreak @ 0x14057D524
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x140A17B60 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140425440 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpClearOwner @ 0x140465220 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047F2B8 (FsRtlpModifyThreadPriorities.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057C46C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x14057D1B8 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14057D7A4 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14057DFDC (FsRtlpSyncWithAckTimeout.c)
 *     FsRtlpOplockPerfSendData @ 0x1406FFED4 (FsRtlpOplockPerfSendData.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A0BC94 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlpAcknowledgeOplockBreak(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned int a5)
{
  char v10; // r15
  int v11; // r14d
  int v12; // eax
  unsigned int v13; // eax
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // esi
  int v19; // eax
  _QWORD *v20; // rcx
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
    v11 = 16;
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
      v22 = 16;
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
        v11 = 16;
      }
      v18 = 259;
      v21 = 259;
      goto LABEL_20;
    }
    v19 = *(_DWORD *)(a1 + 144);
    if ( (v19 & 0x300) != 0 )
    {
      v18 = 0;
      v21 = 0;
LABEL_19:
      *(_DWORD *)(a3 + 48) = 0;
      IofCompleteRequest((PIRP)a3, 1);
      v11 = 1;
      v22 = 1;
LABEL_20:
      while ( 1 )
      {
        v20 = *(_QWORD **)(a1 + 88);
        if ( v20 == (_QWORD *)(a1 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v20);
      }
      if ( v10 )
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
      *(_QWORD *)(a1 + 8) = 0LL;
      FsRtlpModifyThreadPriorities(a1, 0LL, 0);
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
      if ( (unsigned int)Feature_5645_7108__private_IsEnabledDeviceUsageNoInline() )
      {
        *(_DWORD *)(a1 + 144) = v22 | *(_DWORD *)(a1 + 144) & 0x20;
        v18 = v21;
      }
      else
      {
        *(_DWORD *)(a1 + 144) = v11 | *(_DWORD *)(a1 + 144) & 0x20;
      }
      if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
      {
        FsRtlpSyncWithAckTimeout(a1 + 176);
        FsRtlpOplockPerfSendData(a1 + 160);
      }
      goto LABEL_30;
    }
    if ( (v19 & 0x400) != 0 )
    {
      v18 = 0;
      v21 = 0;
      *(_QWORD *)(a3 + 56) = 8LL;
      goto LABEL_19;
    }
  }
  v18 = -1073741597;
  *(_DWORD *)(a3 + 48) = -1073741597;
  IofCompleteRequest((PIRP)a3, 1);
LABEL_30:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  return v18;
}
