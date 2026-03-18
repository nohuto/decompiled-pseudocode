/*
 * XREFs of VidSchiProcessDpcDmaPacket @ 0x140007D68
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x14000779C (VidSchDdiNotifyDpcWorker.c)
 *     VidSchDdiNotifyDpc @ 0x1400079E0 (VidSchDdiNotifyDpc.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140008BD0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x140009610 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x140046B44 (VidSchiProcessDpcPreemptedPacket.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiProcessDpcDmaPacket(struct _VIDSCH_DMA_PACKET *a1)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  __int64 v4; // rbp
  KSPIN_LOCK *v5; // rdi
  int v6; // eax
  KSPIN_LOCK *v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  void (__fastcall *v10)(KSPIN_LOCK); // rax
  __int64 v11; // rcx
  void (__fastcall *v12)(KSPIN_LOCK); // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+68h] [rbp-20h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(unsigned int *)(v3 + 1432);
  v5 = *(KSPIN_LOCK **)(*(_QWORD *)(v1 + 104) + 32LL);
  if ( a1 != (struct _VIDSCH_DMA_PACKET *)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)(v3 + 8 * v4 + 1440),
                                            0LL,
                                            (signed __int64)a1) )
  {
    WdLogSingleEntry2(1LL, v5, a1);
    WdLogGlobalForLineNumber = 11634;
    DxgkLogInternalTriageEvent(v11, 0x40000LL);
  }
  _InterlockedExchange((volatile __int32 *)(v3 + 1432), ((_BYTE)v4 + 1) & 0xF);
  *(_DWORD *)(v3 + 520) = ((unsigned __int8)*(_DWORD *)(v3 + 520) + 1) & 0xF;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v5 + 248, &LockHandle);
  v6 = *((_DWORD *)a1 + 23);
  if ( (v6 & 0x400) != 0 )
  {
    *((_DWORD *)a1 + 23) = v6 & 0xFFFFFBFF;
    if ( *(_DWORD *)(v3 + 16520) != -1 )
    {
      v10 = (void (__fastcall *)(KSPIN_LOCK))v5[415];
      if ( v10 )
        v10(v5[419]);
    }
  }
  if ( (*((_DWORD *)a1 + 23) & 0x800) != 0 )
  {
    if ( *(_DWORD *)(v5[*(unsigned int *)(*((_QWORD *)a1 + 7) + 868LL) + 429] + 44488) != -1 )
    {
      v12 = (void (__fastcall *)(KSPIN_LOCK))v5[413];
      if ( v12 )
        v12(v5[419]);
    }
    *((_DWORD *)a1 + 23) &= ~0x800u;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( *((_DWORD *)a1 + 22) == 3 )
  {
    VidSchiProcessDpcSystemRequest(a1);
  }
  else if ( *((_DWORD *)a1 + 18) == 10 || *((_DWORD *)a1 + 18) == 18 )
  {
    VidSchiProcessDpcCompletedPacket(a1);
  }
  else if ( *((_DWORD *)a1 + 18) == 11 )
  {
    VidSchiProcessDpcPreemptedPacket(a1);
  }
  v7 = (KSPIN_LOCK *)(*(_QWORD *)(v3 + 24) + 1992LL);
  v8 = (_QWORD *)((char *)a1 + 16);
  memset(&v14, 0, sizeof(v14));
  KeAcquireInStackQueuedSpinLock(v7, &v14);
  v9 = *(_QWORD **)(v3 + 16536);
  if ( *v9 != v3 + 16528 )
    __fastfail(3u);
  *v8 = v3 + 16528;
  v8[1] = v9;
  *v9 = v8;
  *(_QWORD *)(v3 + 16536) = v8;
  KeReleaseInStackQueuedSpinLock(&v14);
}
