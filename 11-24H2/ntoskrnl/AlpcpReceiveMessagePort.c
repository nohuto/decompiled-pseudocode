/*
 * XREFs of AlpcpReceiveMessagePort @ 0x14089DB00
 * Callers:
 *     AlpcpReceiveLegacyMessage @ 0x14089D780 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessage @ 0x1408A1800 (AlpcpReceiveMessage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     AlpcpSignalAndWait @ 0x1402CD9A0 (AlpcpSignalAndWait.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     AlpcpLogUnwait @ 0x140740878 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x1407408E4 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogReceiveMessage @ 0x14089BECC (AlpcpLogReceiveMessage.c)
 *     AlpcpQueryHeadCanceledQueue @ 0x14089E71C (AlpcpQueryHeadCanceledQueue.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x14089E750 (AlpcpTryLockForCachedReferenceBlob.c)
 *     AlpcpQueryHeadLargeQueue @ 0x14089E7DC (AlpcpQueryHeadLargeQueue.c)
 *     AlpcpQueryHeadMainQueue @ 0x14089E7F8 (AlpcpQueryHeadMainQueue.c)
 *     AlpcpReferenceBlob @ 0x14089EB60 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14089ED30 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcpReceiveMessagePort(__int64 a1, KPROCESSOR_MODE a2, LARGE_INTEGER *a3, __int64 *a4, LONG a5)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // rdi
  volatile signed __int64 *v8; // r14
  char *v9; // rsi
  int i; // r12d
  int v11; // eax
  volatile signed __int64 *v12; // rbp
  char *v13; // rax
  char *v14; // rsi
  __int64 HeadLargeQueue; // rsi
  ULONG_PTR HeadCanceledQueue; // rax
  ULONG_PTR v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // esi
  volatile signed __int64 *v20; // rdi
  char *v21; // r15
  char *v22; // rax
  char *v23; // r15
  unsigned int v24; // edx
  int v25; // ecx
  char *v26; // rax
  char *v27; // r14
  int v28; // eax
  volatile signed __int64 *v29; // rdi
  char *v30; // rax
  char *v31; // rbp
  struct _LIST_ENTRY *v32; // rcx
  LIST_ENTRY *p_WaitListHead; // rdx
  void *v34; // rbp
  int v35; // esi
  struct _KTHREAD *v36; // rax
  char *v38; // rax
  char *v39; // rsi
  char *v40; // rsi
  int v41; // esi
  unsigned int v42; // r15d
  struct _KTHREAD *v43; // rax
  char *v44; // rax
  char *v45; // rbp
  struct _LIST_ENTRY *Flink; // rax
  NTSTATUS v47; // eax
  struct _KTHREAD *v48; // rcx
  volatile signed __int64 *v49; // rdi
  __int64 v50; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct _KTHREAD *v52; // [rsp+90h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)a1;
  v52 = CurrentThread;
  v8 = (volatile signed __int64 *)(*(_QWORD *)a1 + 352LL);
LABEL_2:
  while ( 2 )
  {
    v9 = (char *)KeAbPreAcquire(v6 + 352, 0LL);
    if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v6 + 352), 0, v9, v6 + 352);
    if ( v9 )
      v9[10] = 1;
    for ( i = 0; ; i = 1 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(v6 + 416);
        if ( (v11 & 0x40) != 0 )
        {
          v19 = -1073740032;
          goto LABEL_21;
        }
        if ( (v11 & 0x10) != 0 )
        {
          v19 = -1073741759;
          goto LABEL_21;
        }
        v12 = (volatile signed __int64 *)(v6 + 136);
        v13 = (char *)KeAbPreAcquire(v6 + 136, 0LL);
        v14 = v13;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 136), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 136), v13, v6 + 136);
        if ( v14 )
          v14[10] = 1;
        HeadLargeQueue = AlpcpQueryHeadLargeQueue(v6);
        if ( HeadLargeQueue || (HeadLargeQueue = AlpcpQueryHeadMainQueue(v6)) != 0 )
        {
          if ( (unsigned __int8)AlpcpTryLockForCachedReferenceBlob(HeadLargeQueue) )
            goto LABEL_49;
          if ( *(_QWORD *)(HeadLargeQueue + 96) )
          {
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
            v40 = (char *)KeAbPreAcquire(v6 + 352, 0LL);
            if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
              goto LABEL_108;
            goto LABEL_109;
          }
          AlpcpReferenceBlob(HeadLargeQueue);
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
          v21 = (char *)KeAbPreAcquire(v6 + 352, 0LL);
          if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)(v6 + 352), 0, v21, v6 + 352);
          if ( v21 )
            v21[10] = 1;
          if ( (*(_DWORD *)(v6 + 416) & 0x50) != 0 )
          {
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) == 17 )
              goto LABEL_180;
          }
          else
          {
            v22 = (char *)KeAbPreAcquire(v6 + 136, 0LL);
            v23 = v22;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 136), v22, v6 + 136);
            if ( v23 )
              v23[10] = 1;
            if ( !AlpcpQueryHeadLargeQueue(v6) && HeadLargeQueue == AlpcpQueryHeadMainQueue(v6) )
              goto LABEL_49;
            v50 = *(_QWORD *)(v6 + 160);
            if ( v50 == v6 + 160 || !v50 )
              v50 = 0LL;
            if ( HeadLargeQueue == v50 )
            {
LABEL_49:
              if ( (*(_DWORD *)(HeadLargeQueue + 40) & 7) == 1 )
                --*(_DWORD *)(v6 + 448);
              else
                --*(_DWORD *)(v6 + 452);
              *(_DWORD *)(HeadLargeQueue + 40) &= 0xFFFFFFF8;
              *(_QWORD *)(HeadLargeQueue + 16) = 0LL;
              **(_QWORD **)(HeadLargeQueue + 8) = *(_QWORD *)HeadLargeQueue;
              *(_QWORD *)(*(_QWORD *)HeadLargeQueue + 8LL) = *(_QWORD *)(HeadLargeQueue + 8);
              if ( (*(_DWORD *)(HeadLargeQueue + 40) & 0x200) == 0 )
                goto LABEL_57;
              v24 = (*(_QWORD *)(HeadLargeQueue + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
              if ( !*(_QWORD *)(HeadLargeQueue + 144) )
                v24 = *(_QWORD *)(HeadLargeQueue + 136) != 0LL ? 0x80000000 : 0;
              v25 = v24 | 0x10000000;
              if ( !*(_QWORD *)(HeadLargeQueue + 152) )
                v25 = v24;
              if ( (v25 & a5) == 0 )
              {
                *(_WORD *)(HeadLargeQueue + 244) &= ~0x2000u;
                --*(_WORD *)(HeadLargeQueue - 30);
              }
              else
              {
LABEL_57:
                *(_WORD *)(HeadLargeQueue + 244) |= 0x2000u;
                v26 = (char *)KeAbPreAcquire(v6 + 176, 0LL);
                v27 = v26;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 176), 0LL) )
                  ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 176), v26, v6 + 176);
                if ( v27 )
                  v27[10] = 1;
                v28 = *(_DWORD *)(HeadLargeQueue + 40);
                *(_QWORD *)(HeadLargeQueue + 16) = v6;
                *(_DWORD *)(HeadLargeQueue + 40) = v28 & 0xFFFFFF83 | (4 * (*(_DWORD *)(v6 + 416) & 6)) | 3;
                *(_QWORD *)(HeadLargeQueue + 8) = *(_QWORD *)(v6 + 192);
                *(_QWORD *)HeadLargeQueue = v6 + 184;
                **(_QWORD **)(v6 + 192) = HeadLargeQueue;
                *(_QWORD *)(v6 + 192) = HeadLargeQueue;
                ++*(_DWORD *)(v6 + 456);
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 176));
                KeAbPostRelease(v6 + 176);
              }
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
              KeAbPostRelease(v6 + 136);
              v29 = (volatile signed __int64 *)(v6 + 352);
              if ( i )
              {
                if ( (_InterlockedExchangeAdd64(v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v29);
              }
              else if ( _InterlockedCompareExchange64(v29, 0LL, 17LL) != 17 )
              {
                ExfReleasePushLockShared((signed __int64 *)v29);
              }
              KeAbPostRelease((ULONG_PTR)v29);
              goto LABEL_98;
            }
            if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
            KeAbPostRelease(v6 + 136);
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) == 17 )
            {
LABEL_180:
              KeAbPostRelease(v6 + 352);
              AlpcpUnlockMessage(HeadLargeQueue);
              CurrentThread = v52;
              goto LABEL_2;
            }
          }
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          goto LABEL_180;
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
          v49 = (volatile signed __int64 *)(v6 + 352);
          if ( i )
          {
            if ( (_InterlockedExchangeAdd64(v49, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v49);
          }
          else if ( _InterlockedCompareExchange64(v49, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)v49);
          }
          KeAbPostRelease((ULONG_PTR)v49);
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
        v40 = (char *)KeAbPreAcquire(v6 + 352, 0LL);
        if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
LABEL_108:
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 352), v40, v6 + 352);
LABEL_109:
        if ( v40 )
          v40[10] = 1;
        i = 1;
      }
      v18 = *(_QWORD *)(v6 + 360);
      if ( v18 && (*(_QWORD *)(*(_QWORD *)(v18 + 80) + 64LL) & 0xFFFFFFLL) != 0xFFFFFF )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        v19 = 1073741872;
LABEL_21:
        v20 = (volatile signed __int64 *)(v6 + 352);
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          {
            ExfTryToWakePushLock(v20);
            KeAbPostRelease((ULONG_PTR)v20);
            return v19;
          }
        }
        else if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)v20);
        }
        KeAbPostRelease((ULONG_PTR)v20);
        return v19;
      }
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
      KeAbPostRelease(v6 + 136);
      if ( *(_QWORD *)(v6 + 32) )
        goto LABEL_29;
      if ( (*(_DWORD *)(v6 + 416) & 0x200) != 0 )
      {
        if ( (*(_DWORD *)(v6 + 256) & 0x1000) == 0 )
        {
LABEL_29:
          v19 = -1073741823;
          goto LABEL_21;
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
          KeLeaveCriticalRegionThread();
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
        goto LABEL_21;
      }
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
        goto LABEL_29;
      if ( i )
        break;
      if ( _InterlockedCompareExchange64(v8, 1LL, 17LL) != 17 )
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        KeAbPostRelease(v6 + 352);
        v38 = (char *)KeAbPreAcquire(v6 + 352, 0LL);
        v39 = v38;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 352), v38, v6 + 352);
        if ( v39 )
          v39[10] = 1;
      }
    }
    CurrentThread[1].Timer.Header.LockNV = a5;
    v30 = (char *)KeAbPreAcquire(v6 + 224, 0LL);
    v31 = v30;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 224), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 224), v30, v6 + 224);
    if ( v31 )
      v31[10] = 1;
    v32 = *(struct _LIST_ENTRY **)(v6 + 240);
    p_WaitListHead = &CurrentThread[1].Timer.Header.WaitListHead;
    if ( v32->Flink != (struct _LIST_ENTRY *)(v6 + 232) )
LABEL_77:
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
      KeLeaveCriticalRegionThread();
      v42 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReceive, a2, (v41 & 0x200000) != 0, a3);
      v43 = KeGetCurrentThread();
      --v43->KernelApcDisable;
      if ( AlpcpLogEnabled )
        AlpcpLogUnwait(v42);
    }
    if ( v42 )
    {
      v44 = (char *)KeAbPreAcquire(v6 + 224, 0LL);
      v45 = v44;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 224), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 224), v44, v6 + 224);
      if ( v45 )
        v45[10] = 1;
      Flink = v52[1].Timer.Header.WaitListHead.Flink;
      if ( Flink )
      {
        *(_QWORD *)&v52[1].Timer.Header.Lock = 0LL;
        Blink = v52[1].Timer.Header.WaitListHead.Blink;
        if ( Flink->Blink != &v52[1].Timer.Header.WaitListHead || Blink->Flink != &v52[1].Timer.Header.WaitListHead )
          goto LABEL_77;
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        v52[1].Timer.Header.WaitListHead.Flink = 0LL;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 224));
        KeAbPostRelease(v6 + 224);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 224));
        KeAbPostRelease(v6 + 224);
        KeLeaveCriticalRegionThread();
        v47 = KeWaitForSingleObject(&v52[1].KernelStack, WrLpcReceive, 0, 0, 0LL);
        v48 = KeGetCurrentThread();
        --v48->KernelApcDisable;
        if ( AlpcpLogEnabled )
          AlpcpLogUnwait(v47);
        HeadLargeQueue = *(_QWORD *)&v52[1].Timer.Header.Lock;
        *(_QWORD *)&v52[1].Timer.Header.Lock = 0LL;
        if ( HeadLargeQueue )
          goto LABEL_128;
      }
      return v42;
    }
    else
    {
      CurrentThread = v52;
      HeadLargeQueue = *(_QWORD *)&v52[1].Timer.Header.Lock;
      *(_QWORD *)&v52[1].Timer.Header.Lock = 0LL;
      if ( !HeadLargeQueue )
        continue;
LABEL_128:
      AlpcpLockForCachedReferenceBlob(HeadLargeQueue);
      --*(_WORD *)(HeadLargeQueue - 30);
      *(_DWORD *)(HeadLargeQueue + 40) &= ~0x2000u;
LABEL_98:
      if ( AlpcpLogEnabled )
        AlpcpLogReceiveMessage(HeadLargeQueue);
      *a4 = HeadLargeQueue;
      return 0LL;
    }
  }
}
