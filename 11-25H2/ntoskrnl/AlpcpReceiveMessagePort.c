/*
 * XREFs of AlpcpReceiveMessagePort @ 0x1408A6F40
 * Callers:
 *     AlpcpReceiveMessage @ 0x1408A88E0 (AlpcpReceiveMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1408AC320 (AlpcpReceiveLegacyMessage.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     AlpcpSignalAndWait @ 0x140308E00 (AlpcpSignalAndWait.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     AlpcpWaitForSingleObject @ 0x14043B370 (AlpcpWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     AlpcpLogUnwait @ 0x140736928 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x140736994 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpQueryHeadCanceledQueue @ 0x1408A648C (AlpcpQueryHeadCanceledQueue.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpLogReceiveMessage @ 0x1408AAF48 (AlpcpLogReceiveMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1408B2940 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x14098B0C0 (AlpcpTryLockForCachedReferenceBlob.c)
 *     AlpcpQueryHeadLargeQueue @ 0x1409F671C (AlpcpQueryHeadLargeQueue.c)
 *     AlpcpQueryHeadMainQueue @ 0x1409FCF58 (AlpcpQueryHeadMainQueue.c)
 */

__int64 __fastcall AlpcpReceiveMessagePort(__int64 a1, unsigned __int8 a2, LARGE_INTEGER *a3, ULONG_PTR *a4, LONG a5)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // rsi
  volatile signed __int64 *v8; // rbp
  __int64 *v9; // rdi
  int i; // r12d
  int v11; // eax
  volatile signed __int64 *v12; // r14
  __int64 *v13; // rax
  __int64 *v14; // rdi
  ULONG_PTR HeadLargeQueue; // rdi
  ULONG_PTR HeadCanceledQueue; // rax
  ULONG_PTR v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // edi
  __int64 *v20; // rax
  signed __int64 BugCheckParameter4; // rax
  __int64 *v22; // rax
  __int64 *v23; // r14
  int v24; // eax
  volatile signed __int64 *v25; // rsi
  volatile signed __int64 *v27; // rsi
  unsigned int v28; // edx
  int v29; // ecx
  __int64 *v30; // rax
  __int64 *v31; // r14
  struct _LIST_ENTRY *v32; // rdx
  LIST_ENTRY *p_WaitListHead; // rcx
  void *v34; // r14
  int v35; // edi
  struct _KTHREAD *v36; // rax
  __int64 *v37; // rax
  __int64 *v38; // rdi
  __int64 *v39; // rax
  __int64 *v40; // rdi
  int v41; // edi
  unsigned int v42; // r14d
  struct _KTHREAD *v43; // rax
  __int64 *v44; // rax
  __int64 *v45; // rbp
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 *v50; // r15
  __int64 *v51; // rax
  __int64 *v52; // r15
  __int64 v53; // rcx
  volatile signed __int64 *v54; // rsi
  __int64 *v55; // rax
  __int64 *v56; // rdi
  struct _KTHREAD *v57; // [rsp+90h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)a1;
  v57 = CurrentThread;
  v8 = (volatile signed __int64 *)(*(_QWORD *)a1 + 352LL);
LABEL_2:
  v9 = KeAbPreAcquire(v6 + 352, 0LL);
  if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v6 + 352), 0, v9, v6 + 352);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  for ( i = 0; ; i = 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(v6 + 416);
        if ( (v11 & 0x40) != 0 )
        {
          v19 = -1073740032;
          goto LABEL_50;
        }
        if ( (v11 & 0x10) != 0 )
        {
          v19 = -1073741759;
          goto LABEL_50;
        }
        v12 = (volatile signed __int64 *)(v6 + 136);
        v13 = KeAbPreAcquire(v6 + 136, 0LL);
        v14 = v13;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 136), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 136), v13, v6 + 136);
        if ( v14 )
          *((_BYTE *)v14 + 10) = 1;
        HeadLargeQueue = AlpcpQueryHeadLargeQueue(v6);
        if ( !HeadLargeQueue )
        {
          HeadLargeQueue = AlpcpQueryHeadMainQueue(v6);
          if ( !HeadLargeQueue )
            break;
        }
        v20 = KeAbPreAcquire(HeadLargeQueue - 16, 0LL);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(HeadLargeQueue - 16), 0LL) )
        {
          if ( v20 )
            *((_BYTE *)v20 + 10) = 1;
          *(_BYTE *)(HeadLargeQueue - 32) |= 1u;
          BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(HeadLargeQueue - 24), 0x10000uLL)
                             + 0x10000;
          if ( BugCheckParameter4 <= 0 )
            KeBugCheckEx(0x18u, 0LL, HeadLargeQueue, 0x27uLL, BugCheckParameter4);
          goto LABEL_27;
        }
        if ( v20 )
          KeAbPostReleaseEx(HeadLargeQueue - 16, (ULONG_PTR)v20);
        if ( !*(_QWORD *)(HeadLargeQueue + 96) )
        {
          _m_prefetchw((const void *)(HeadLargeQueue - 24));
          v48 = *(_QWORD *)(HeadLargeQueue - 24);
          while ( v48 > 0 )
          {
            v49 = v48;
            v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(HeadLargeQueue - 24), v48 + 1, v48);
            if ( v48 == v49 )
              goto LABEL_138;
          }
          if ( v48 )
            KeBugCheckEx(0x18u, 0LL, HeadLargeQueue, 0x20uLL, v48);
LABEL_138:
          if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
          KeAbPostRelease(v6 + 136);
          if ( i )
          {
            if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
            i = 0;
          }
          else
          {
            i = 0;
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          }
          KeAbPostRelease(v6 + 352);
          AlpcpLockForCachedReferenceBlob(HeadLargeQueue);
          --*(_WORD *)(HeadLargeQueue - 30);
          v50 = KeAbPreAcquire(v6 + 352, 0LL);
          if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)(v6 + 352), 0, v50, v6 + 352);
          if ( v50 )
            *((_BYTE *)v50 + 10) = 1;
          if ( (*(_DWORD *)(v6 + 416) & 0x50) != 0 )
          {
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
              goto LABEL_163;
            goto LABEL_164;
          }
          v51 = KeAbPreAcquire(v6 + 136, 0LL);
          v52 = v51;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 136), v51, v6 + 136);
          if ( v52 )
            *((_BYTE *)v52 + 10) = 1;
          if ( AlpcpQueryHeadLargeQueue(v6) || HeadLargeQueue != AlpcpQueryHeadMainQueue(v6) )
          {
            v53 = *(_QWORD *)(v6 + 160);
            if ( v53 == v6 + 160 || !v53 )
              v53 = 0LL;
            if ( HeadLargeQueue != v53 )
            {
              if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
              KeAbPostRelease(v6 + 136);
              if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
LABEL_163:
                ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
LABEL_164:
              KeAbPostRelease(v6 + 352);
              AlpcpUnlockMessage(HeadLargeQueue);
              CurrentThread = v57;
              goto LABEL_2;
            }
          }
LABEL_27:
          if ( (*(_DWORD *)(HeadLargeQueue + 40) & 7) == 1 )
            --*(_DWORD *)(v6 + 448);
          else
            --*(_DWORD *)(v6 + 452);
          *(_DWORD *)(HeadLargeQueue + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(HeadLargeQueue + 16) = 0LL;
          **(_QWORD **)(HeadLargeQueue + 8) = *(_QWORD *)HeadLargeQueue;
          *(_QWORD *)(*(_QWORD *)HeadLargeQueue + 8LL) = *(_QWORD *)(HeadLargeQueue + 8);
          if ( (*(_DWORD *)(HeadLargeQueue + 40) & 0x200) == 0 )
            goto LABEL_30;
          v28 = (*(_QWORD *)(HeadLargeQueue + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
          if ( !*(_QWORD *)(HeadLargeQueue + 144) )
            v28 = *(_QWORD *)(HeadLargeQueue + 136) != 0LL ? 0x80000000 : 0;
          v29 = v28 | 0x10000000;
          if ( !*(_QWORD *)(HeadLargeQueue + 152) )
            v29 = v28;
          if ( (v29 & a5) != 0 )
          {
LABEL_30:
            *(_WORD *)(HeadLargeQueue + 244) |= 0x2000u;
            v22 = KeAbPreAcquire(v6 + 176, 0LL);
            v23 = v22;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 176), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 176), v22, v6 + 176);
            if ( v23 )
              *((_BYTE *)v23 + 10) = 1;
            v24 = *(_DWORD *)(HeadLargeQueue + 40);
            *(_QWORD *)(HeadLargeQueue + 16) = v6;
            *(_DWORD *)(HeadLargeQueue + 40) = v24 & 0xFFFFFF83 | (4 * (*(_DWORD *)(v6 + 416) & 6)) | 3;
            *(_QWORD *)(HeadLargeQueue + 8) = *(_QWORD *)(v6 + 192);
            *(_QWORD *)HeadLargeQueue = v6 + 184;
            **(_QWORD **)(v6 + 192) = HeadLargeQueue;
            *(_QWORD *)(v6 + 192) = HeadLargeQueue;
            ++*(_DWORD *)(v6 + 456);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 176));
            KeAbPostRelease(v6 + 176);
          }
          else
          {
            *(_WORD *)(HeadLargeQueue + 244) &= ~0x2000u;
            --*(_WORD *)(HeadLargeQueue - 30);
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
          KeAbPostRelease(v6 + 136);
          v25 = (volatile signed __int64 *)(v6 + 352);
          if ( i )
          {
            if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v25);
          }
          else if ( _InterlockedCompareExchange64(v25, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)v25);
          }
          KeAbPostRelease((ULONG_PTR)v25);
          goto LABEL_43;
        }
        if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        v55 = KeAbPreAcquire(v6 + 352, 0LL);
        v56 = v55;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 352), v55, v6 + 352);
        if ( v56 )
          *((_BYTE *)v56 + 10) = 1;
        CurrentThread = v57;
        i = 1;
      }
      HeadCanceledQueue = AlpcpQueryHeadCanceledQueue(v6);
      v17 = HeadCanceledQueue;
      if ( !HeadCanceledQueue )
        break;
      if ( (unsigned __int8)AlpcpTryLockForCachedReferenceBlob(HeadCanceledQueue) )
      {
        *(_DWORD *)(v17 + 40) &= ~0x20000u;
        **(_QWORD **)(v17 + 88) = *(_QWORD *)(v17 + 80);
        *(_QWORD *)(*(_QWORD *)(v17 + 80) + 8LL) = *(_QWORD *)(v17 + 88);
        --*(_DWORD *)(v6 + 464);
        if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        v54 = (volatile signed __int64 *)(v6 + 352);
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64(v54, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v54);
        }
        else if ( _InterlockedCompareExchange64(v54, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)v54);
        }
        KeAbPostRelease((ULONG_PTR)v54);
        --*(_WORD *)(v17 - 30);
        *a4 = v17;
        return 0LL;
      }
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
      KeAbPostRelease(v6 + 136);
      if ( i )
      {
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
      }
      else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
      }
      KeAbPostRelease(v6 + 352);
      v39 = KeAbPreAcquire(v6 + 352, 0LL);
      v40 = v39;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 352), v39, v6 + 352);
      if ( v40 )
        *((_BYTE *)v40 + 10) = 1;
      i = 1;
    }
    v18 = *(_QWORD *)(v6 + 360);
    if ( v18 )
    {
      if ( (*(_QWORD *)(*(_QWORD *)(v18 + 80) + 64LL) & 0xFFFFFFLL) != 0xFFFFFF )
        break;
    }
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
    KeAbPostRelease(v6 + 136);
    if ( *(_QWORD *)(v6 + 32) )
      goto LABEL_22;
    if ( (*(_DWORD *)(v6 + 416) & 0x200) != 0 )
    {
      if ( (*(_DWORD *)(v6 + 256) & 0x1000) == 0 )
      {
LABEL_22:
        v19 = -1073741823;
        goto LABEL_50;
      }
      if ( i )
      {
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
      }
      else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
      }
      KeAbPostRelease(v6 + 352);
      if ( AlpcpLogEnabled )
        AlpcpLogWaitForNewMessage(v6);
      v34 = *(void **)(v6 + 248);
      if ( _bittestandreset((signed __int32 *)(a1 + 48), 2u) )
      {
        v19 = AlpcpSignalAndWait(a1, v34, WrLpcReceive, a2, a3, 0);
      }
      else
      {
        v35 = *(_DWORD *)(a1 + 48);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v19 = KeWaitForSingleObject(v34, WrLpcReceive, a2, (v35 & 0x200000) != 0, a3);
        v36 = KeGetCurrentThread();
        --v36->KernelApcDisable;
        if ( AlpcpLogEnabled )
          AlpcpLogUnwait(v19);
      }
      if ( v19 )
        return v19;
      goto LABEL_2;
    }
    if ( *(_QWORD *)(v6 + 368) )
    {
      v19 = 258;
      goto LABEL_50;
    }
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
      goto LABEL_22;
    if ( i )
    {
      CurrentThread[1].Timer.Header.LockNV = a5;
      v30 = KeAbPreAcquire(v6 + 224, 0LL);
      v31 = v30;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 224), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 224), v30, v6 + 224);
      if ( v31 )
        *((_BYTE *)v31 + 10) = 1;
      v32 = *(struct _LIST_ENTRY **)(v6 + 240);
      p_WaitListHead = &CurrentThread[1].Timer.Header.WaitListHead;
      if ( v32->Flink != (struct _LIST_ENTRY *)(v6 + 232) )
LABEL_70:
        __fastfail(3u);
      p_WaitListHead->Flink = (struct _LIST_ENTRY *)(v6 + 232);
      CurrentThread[1].Timer.Header.WaitListHead.Blink = v32;
      v32->Flink = p_WaitListHead;
      *(_QWORD *)(v6 + 240) = p_WaitListHead;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 224));
      KeAbPostRelease(v6 + 224);
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
      KeAbPostRelease(v6 + 352);
      if ( AlpcpLogEnabled )
        AlpcpLogWaitForNewMessage(v6);
      if ( _bittestandreset((signed __int32 *)(a1 + 48), 2u) )
      {
        v42 = AlpcpSignalAndWait(a1, &CurrentThread[1].KernelStack, WrLpcReceive, a2, a3, 0);
      }
      else
      {
        v41 = *(_DWORD *)(a1 + 48);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v42 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReceive, a2, (v41 & 0x200000) != 0, a3);
        v43 = KeGetCurrentThread();
        --v43->KernelApcDisable;
        if ( AlpcpLogEnabled )
          AlpcpLogUnwait(v42);
      }
      if ( v42 )
      {
        v44 = KeAbPreAcquire(v6 + 224, 0LL);
        v45 = v44;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 224), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 224), v44, v6 + 224);
        if ( v45 )
          *((_BYTE *)v45 + 10) = 1;
        Flink = CurrentThread[1].Timer.Header.WaitListHead.Flink;
        if ( Flink )
        {
          *(_QWORD *)&CurrentThread[1].Timer.Header.Lock = 0LL;
          Blink = CurrentThread[1].Timer.Header.WaitListHead.Blink;
          if ( Flink->Blink != &CurrentThread[1].Timer.Header.WaitListHead
            || Blink->Flink != &CurrentThread[1].Timer.Header.WaitListHead )
          {
            goto LABEL_70;
          }
          Blink->Flink = Flink;
          Flink->Blink = Blink;
          CurrentThread[1].Timer.Header.WaitListHead.Flink = 0LL;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 224));
          KeAbPostRelease(v6 + 224);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 224));
          KeAbPostRelease(v6 + 224);
          AlpcpWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReceive, 0, 0, 0LL);
          HeadLargeQueue = *(_QWORD *)&CurrentThread[1].Timer.Header.Lock;
          *(_QWORD *)&CurrentThread[1].Timer.Header.Lock = 0LL;
          if ( HeadLargeQueue )
            goto LABEL_114;
        }
        return v42;
      }
      else
      {
        HeadLargeQueue = *(_QWORD *)&CurrentThread[1].Timer.Header.Lock;
        *(_QWORD *)&CurrentThread[1].Timer.Header.Lock = 0LL;
        if ( !HeadLargeQueue )
          goto LABEL_2;
LABEL_114:
        AlpcpLockForCachedReferenceBlob(HeadLargeQueue);
        --*(_WORD *)(HeadLargeQueue - 30);
        *(_DWORD *)(HeadLargeQueue + 40) &= ~0x2000u;
LABEL_43:
        if ( AlpcpLogEnabled )
          AlpcpLogReceiveMessage(HeadLargeQueue);
        *a4 = HeadLargeQueue;
        return 0LL;
      }
    }
    if ( _InterlockedCompareExchange64(v8, 1LL, 17LL) != 17 )
    {
      if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
      KeAbPostRelease(v6 + 352);
      v37 = KeAbPreAcquire(v6 + 352, 0LL);
      v38 = v37;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 352), v37, v6 + 352);
      if ( v38 )
        *((_BYTE *)v38 + 10) = 1;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
  KeAbPostRelease(v6 + 136);
  v19 = 1073741872;
LABEL_50:
  v27 = (volatile signed __int64 *)(v6 + 352);
  if ( i )
  {
    if ( (_InterlockedExchangeAdd64(v27, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    {
      ExfTryToWakePushLock(v27);
      KeAbPostRelease((ULONG_PTR)v27);
      return v19;
    }
  }
  else if ( _InterlockedCompareExchange64(v27, 0LL, 17LL) != 17 )
  {
    ExfReleasePushLockShared((signed __int64 *)v27);
  }
  KeAbPostRelease((ULONG_PTR)v27);
  return v19;
}
