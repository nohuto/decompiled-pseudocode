/*
 * XREFs of CcAsyncLazywriteWorker @ 0x1403AB228
 * Callers:
 *     CcAsyncLazywriteWorkerThread @ 0x1404DF850 (CcAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcRepostToSynchronousLazywriter @ 0x1403AAF90 (CcRepostToSynchronousLazywriter.c)
 *     CcWriteBehindAsync @ 0x1403AB04C (CcWriteBehindAsync.c)
 *     CcFindNextWorkQueueEntry @ 0x1403AC0BC (CcFindNextWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x1403AC6BC (CcFreeWorkQueueEntry.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403AD310 (CcPerfLogWorkItemEnqueue.c)
 *     CcPerfLogWorkItemComplete @ 0x1403AD508 (CcPerfLogWorkItemComplete.c)
 *     CcPerfLogWorkItemDequeue @ 0x1403AD574 (CcPerfLogWorkItemDequeue.c)
 *     CcReEngageWorkerThreads @ 0x1404DBB10 (CcReEngageWorkerThreads.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CcDebugExceptionFilter @ 0x140577114 (CcDebugExceptionFilter.c)
 */

void __fastcall CcAsyncLazywriteWorker(__int64 a1)
{
  struct _KEVENT *v1; // rsi
  PRKEVENT *v2; // rdi
  __int64 v3; // r13
  __int64 v4; // r14
  char v5; // r15
  __int64 v6; // rcx
  _DWORD *v7; // rax
  _DWORD *v8; // rdx
  struct _KEVENT *v9; // rcx
  __int64 v10; // r8
  int v11; // ecx
  unsigned int v12; // edi
  int v13; // eax
  struct _KEVENT *Flink; // rax
  char v15; // [rsp+30h] [rbp-B8h]
  PRKEVENT *P; // [rsp+38h] [rbp-B0h]
  _DWORD v17[2]; // [rsp+48h] [rbp-A0h] BYREF
  PRKEVENT *v18; // [rsp+50h] [rbp-98h]
  __int64 v19; // [rsp+58h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-88h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-70h]
  struct _KTHREAD *v22; // [rsp+80h] [rbp-68h]
  __int128 v23; // [rsp+90h] [rbp-58h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-48h]

  v1 = 0LL;
  v2 = 0LL;
  v15 = 0;
  v17[1] = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v23 = 0LL;
  v24 = 0LL;
  v17[0] = 0;
  v18 = 0LL;
  if ( *(_DWORD *)(a1 + 32) != 7 )
    KeBugCheckEx(0x34u, 0x239uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 72);
LABEL_3:
  v5 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 832), &LockHandle);
  if ( v15 )
  {
    *(_BYTE *)(v4 + 196) = 0;
    v15 = 0;
    CcReEngageWorkerThreads(v3, v4, *(unsigned int *)(v4 + 180), *(unsigned int *)(v4 + 184));
  }
  if ( v18 == (PRKEVENT *)35422 )
  {
    if ( *((_DWORD *)v2 + 32) == 7 )
      *(_QWORD *)&v2[3][21].Header.Lock = v2;
    Flink = (struct _KEVENT *)v1->Header.WaitListHead.Flink;
    if ( *(struct _KEVENT **)&Flink->Header.Lock != v1 )
      __fastfail(3u);
    *v2 = v1;
    v2[1] = Flink;
    *(_QWORD *)&Flink->Header.Lock = v2;
    v1->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v2;
    v18 = 0LL;
  }
  while ( !v5 )
  {
    v5 = 1;
    v1 = (struct _KEVENT *)(v4 + 312);
    if ( *(struct _KEVENT **)&v1->Header.Lock == v1 )
      break;
    v6 = *(_QWORD *)(v4 + 16);
    if ( CcEnablePerVolumeLazyWriter )
    {
      v7 = (_DWORD *)(v6 + 808);
      v8 = (_DWORD *)(v6 + 776);
    }
    else
    {
      v7 = (_DWORD *)(v3 + 872);
      v8 = (_DWORD *)(v3 + 840);
    }
    v9 = (struct _KEVENT *)(v4 + 104);
    if ( v1 == (struct _KEVENT *)(v4 + 104) )
      goto LABEL_31;
    if ( !*v7 || (unsigned int)(*(_DWORD *)(v4 + 192) + 1) < *v8 || *(_DWORD *)(v4 + 152) )
    {
      if ( v1 == v9 )
      {
LABEL_31:
        if ( (unsigned int)(*(_DWORD *)(v4 + 188) + 1) <= *(_DWORD *)(v3 + 1288) )
          goto LABEL_13;
      }
      else
      {
LABEL_13:
        P = (PRKEVENT *)CcFindNextWorkQueueEntry(v9, v4, v4 + 312);
        if ( P )
        {
          v19 = v4 + 188;
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 188));
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( (xmmword_140FC5B10 & 0x20000) != 0 )
            CcPerfLogWorkItemDequeue(P);
          v11 = *((_DWORD *)P + 32);
          if ( v11 == 4 )
          {
            KeSetEvent(P[2], 0, 0);
            v15 = 1;
          }
          else if ( v11 == 7 )
          {
            CurrentThread = KeGetCurrentThread();
            *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
            v12 = 0;
            do
            {
              v18 = P;
              v13 = CcWriteBehindAsync((__int64)P, v17, &v23);
              if ( v12 >= 0xA )
                break;
              ++v12;
            }
            while ( v18 == (PRKEVENT *)35422 );
            if ( v13 == 2 )
            {
              CcRepostToSynchronousLazywriter((__int64)P);
              P = 0LL;
            }
            v22 = KeGetCurrentThread();
            *((_DWORD *)&v22[1].SwapListEntry + 3) &= ~2u;
          }
          _InterlockedDecrement((volatile signed __int32 *)(v4 + 188));
          v2 = P;
          if ( P )
          {
            if ( v18 == (PRKEVENT *)35422 )
            {
              if ( (xmmword_140FC5B10 & 0x20000) != 0 )
              {
                LOBYTE(v10) = 1;
                CcPerfLogWorkItemEnqueue(v1, P, v10, 0LL);
              }
            }
            else
            {
              if ( (xmmword_140FC5B10 & 0x20000) != 0 )
                CcPerfLogWorkItemComplete(P);
              CcFreeWorkQueueEntry(P);
            }
          }
          goto LABEL_3;
        }
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
