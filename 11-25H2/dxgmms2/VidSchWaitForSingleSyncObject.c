/*
 * XREFs of VidSchWaitForSingleSyncObject @ 0x140003F10
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400AB430 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAUVIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1400E3BCC (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     VidSchiAcquireSyncObject @ 0x140004680 (VidSchiAcquireSyncObject.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x140004B80 (VidSchiSubmitCommandPacketToQueue.c)
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     VidSchiAllocateQueuePacket @ 0x1400E5120 (VidSchiAllocateQueuePacket.c)
 *     ?VidMmGetCurrentPagingQueueFenceId@@YA_KPEBUVIDMM_PAGING_QUEUE@@@Z @ 0x140101F28 (-VidMmGetCurrentPagingQueueFenceId@@YA_KPEBUVIDMM_PAGING_QUEUE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchWaitForSingleSyncObject(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // r15
  int v7; // eax
  __int64 QueuePacket; // rax
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v11; // eax
  int v12; // r15d
  __int64 v13; // r13
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v16; // eax
  struct _KLOCK_QUEUE_HANDLE *v17; // rdx
  KSPIN_LOCK *v18; // rcx
  _DWORD *v19; // rbp
  __int64 **v20; // rdi
  __int64 *v21; // rax
  const struct VIDMM_PAGING_QUEUE *v22; // rcx
  unsigned __int64 CurrentPagingQueueFenceId; // rax
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *v29; // rax
  __int64 *v30; // rbx
  __int64 *v31; // rax
  __int64 v32; // rax
  void (*v33)(_QWORD, __int64, __int64, const wchar_t *, ...); // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rbx
  _QWORD *v37; // rdx
  __int64 v38; // rax
  int v39; // ecx
  int v40; // r8d
  int v41; // ecx
  int v42; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v44; // [rsp+68h] [rbp-40h] BYREF

  v4 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a1 || !a2 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 11089;
    DxgkLogInternalTriageEvent(
      v41,
      0x40000,
      v42,
      (unsigned int)L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v7 = *(_DWORD *)(a2 + 48);
  if ( v7 == 5 )
  {
    if ( *(_BYTE *)(a2 + 29) )
      return 3221225760LL;
  }
  else if ( v7 != 4 || *(_BYTE *)(a2 + 29) )
  {
    goto LABEL_5;
  }
  v22 = *(const struct VIDMM_PAGING_QUEUE **)(a2 + 88);
  if ( v22 )
  {
    CurrentPagingQueueFenceId = VidMmGetCurrentPagingQueueFenceId(v22);
    v25 = CurrentPagingQueueFenceId;
    if ( *(_BYTE *)(v24 + 30) )
    {
      if ( a3 > CurrentPagingQueueFenceId )
        goto LABEL_59;
    }
    else if ( (int)a3 - (int)CurrentPagingQueueFenceId > 0 )
    {
LABEL_59:
      if ( KdRefreshDebuggerNotPresent() )
      {
        WdLogSingleEntry3(1LL, a3, *(_QWORD *)(v4 + 88), v25);
        v38 = *(_QWORD *)(v4 + 88);
        WdLogGlobalForLineNumber = 11163;
        DxgkLogInternalTriageEvent(
          v39,
          0x40000,
          v40,
          (unsigned int)L"Invalid monitored fence 0x%I64x for paging queue 0x%p. PagingQueueFence=0x%I64x",
          a3,
          v38,
          v25,
          0LL);
      }
      else
      {
        DbgPrintEx(
          0x65u,
          0,
          "\n"
          "A request was made to wait on monitored fence 0x%I64x on paging queue 0x%p,\n"
          "but the paging queue has not generated that fence. This wait breaks the ordered wait\n"
          "contract imposed on paging queues, and cannot be placed in the queue. The paging\n"
          "queue's most recently generated fence value is 0x%I64x\n",
          a3,
          *(const void **)(v4 + 88),
          v25);
        __debugbreak();
      }
      return 3221225485LL;
    }
  }
LABEL_5:
  QueuePacket = VidSchiAllocateQueuePacket(a1, *(_DWORD *)(a1 + 796) == 0);
  v9 = QueuePacket;
  if ( !QueuePacket )
  {
    WdLogSingleEntry1(1LL, -1073741801LL);
    v33 = (void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[88];
    WdLogGlobalForLineNumber = 11180;
    v33(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to allocate queue packet, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  *(_DWORD *)QueuePacket = 895576406;
  *(_DWORD *)(QueuePacket + 48) = 4;
  *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(QueuePacket + 52) = 2;
  *(_QWORD *)(QueuePacket + 88) = a1;
  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)(v9 + 752) &= ~1u;
  *(_QWORD *)(v9 + 104) = CurrentThread;
  *(_QWORD *)(v9 + 72) = 0LL;
  v11 = *(_DWORD *)(v4 + 48);
  if ( v11 == 2 )
  {
    *(_QWORD *)(v9 + 800) = a3;
  }
  else if ( (unsigned int)(v11 - 4) <= 1 )
  {
    *(_QWORD *)(v9 + 800) = a3;
    WdLogSingleEntry3(4LL, v4, a3, a1);
    WdLogGlobalForLineNumber = 11216;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1984), &LockHandle);
  *(_QWORD *)(v9 + 760) = v4;
  v12 = VidSchiAcquireSyncObject(a1, v4, v9);
  if ( v12 >= 0 && (*(_DWORD *)(v9 + 752) & 1) == 0 )
  {
LABEL_30:
    if ( !*(_BYTE *)(v4 + 27) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiSubmitCommandPacketToQueue(v9);
      return 0LL;
    }
    v34 = MEMORY[0xFFFFF78000000320];
    v35 = *(_QWORD *)(v9 + 88);
    *(_DWORD *)(v9 + 64) |= 0x10u;
    *(_QWORD *)(v9 + 56) = v34;
    *(_DWORD *)(v9 + 52) = 17;
    v36 = (_QWORD *)(v9 + 32);
    v37 = *(_QWORD **)(v35 + 704);
    if ( *v37 == v35 + 696 )
    {
      *v36 = v35 + 696;
      v36[1] = v37;
      *v37 = v36;
      *(_QWORD *)(v35 + 704) = v36;
      ++*(_DWORD *)(v35 + 804);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    goto LABEL_20;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( *(_BYTE *)(v13 + 7059) )
  {
    if ( *(_DWORD *)(v9 + 48) == 4 )
    {
      *(LARGE_INTEGER *)(56LL * *(unsigned int *)(v9 + 744) + v9 + 296) = KeQueryPerformanceCounter(0LL);
      *(_DWORD *)(56LL * *(unsigned int *)(v9 + 744) + v9 + 304) = *(_DWORD *)(v9 + 48);
      RtlCaptureStackBackTrace(1u, 5u, (PVOID *)(v9 + 56LL * *(unsigned int *)(v9 + 744) + 312), 0LL);
      *(_DWORD *)(v9 + 744) = ((unsigned __int8)*(_DWORD *)(v9 + 744) + 1) & 7;
      if ( *(_QWORD *)(v9 + 768) || *(_QWORD *)(v9 + 776) || *(_QWORD *)(v9 + 176) || *(_QWORD *)(v9 + 184) )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 61440LL, v13, v9, 0LL);
        WdLogGlobalForLineNumber = 906;
        goto LABEL_37;
      }
    }
  }
  if ( !*(_DWORD *)(v9 + 48) )
  {
    v26 = *(_QWORD *)(v9 + 1096);
    if ( v26 || *(_QWORD *)(v9 + 288) )
    {
      v27 = *(_QWORD *)(v9 + 288);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 2560LL, v9, v26, v27);
      WdLogGlobalForLineNumber = 906;
      goto LABEL_30;
    }
  }
  WdLogSingleEntry2(4LL, v9, a1);
  WdLogGlobalForLineNumber = 19409;
  *(_QWORD *)(v9 + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(v9 + 52) = 0;
  v4 = v9 + 8;
  memset(&v44, 0, sizeof(v44));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 1992), &v44);
  v14 = *(_QWORD *)(v9 + 8);
  if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 )
    goto LABEL_20;
  v15 = *(_QWORD **)(v9 + 16);
  if ( *v15 != v4 )
    goto LABEL_20;
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  if ( a1 != -776 )
    --*(_DWORD *)(a1 + 776);
  KeReleaseInStackQueuedSpinLock(&v44);
  v16 = *(_DWORD *)(v9 + 64);
  v17 = &v44;
  v18 = (KSPIN_LOCK *)(v13 + 1992);
  v44.LockQueue = 0LL;
  if ( (v16 & 0x40) == 0 )
  {
    v19 = (_DWORD *)(a1 + 728);
    *(_QWORD *)&v44.OldIrql = 0LL;
    v20 = (__int64 **)(a1 + 712);
    KeAcquireInStackQueuedSpinLock(v18, &v44);
    v21 = v20[1];
    if ( (__int64 **)*v21 == v20 )
    {
      *(_QWORD *)v4 = v20;
      *(_QWORD *)(v9 + 16) = v21;
      *v21 = v4;
      v20[1] = (__int64 *)v4;
      if ( v19 )
        ++*v19;
      KeReleaseInStackQueuedSpinLock(&v44);
      goto LABEL_44;
    }
LABEL_20:
    __fastfail(3u);
  }
LABEL_37:
  *(_QWORD *)&v44.OldIrql = 0LL;
  KeAcquireInStackQueuedSpinLock(v18, v17);
  v29 = *(__int64 **)(a1 + 744);
  if ( *v29 != a1 + 736 )
    goto LABEL_20;
  *(_QWORD *)v4 = a1 + 736;
  *(_QWORD *)(v4 + 8) = v29;
  *v29 = v4;
  *(_QWORD *)(a1 + 744) = v4;
  if ( a1 != -752 )
    ++*(_DWORD *)(a1 + 752);
  KeReleaseInStackQueuedSpinLock(&v44);
  v19 = (_DWORD *)(a1 + 728);
  v20 = (__int64 **)(a1 + 712);
LABEL_44:
  if ( (*(_DWORD *)(v9 + 64) & 0x40) == 0 )
  {
    while ( 1 )
    {
      memset(&v44, 0, sizeof(v44));
      v30 = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 1992), &v44);
      v31 = *v20;
      if ( *v20 == (__int64 *)v20 )
        break;
      if ( *v19 > 0x10u )
      {
        v30 = *v20;
        if ( (__int64 **)v31[1] != v20 )
          goto LABEL_20;
        v32 = *v31;
        if ( *(__int64 **)(v32 + 8) != v30 )
          goto LABEL_20;
        *v20 = (__int64 *)v32;
        *(_QWORD *)(v32 + 8) = v20;
        --*v19;
      }
      KeReleaseInStackQueuedSpinLock(&v44);
      if ( !v30 )
        goto LABEL_51;
      ExFreePoolWithTag(v30 - 1, 0);
    }
    KeReleaseInStackQueuedSpinLock(&v44);
  }
LABEL_51:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)v12;
}
