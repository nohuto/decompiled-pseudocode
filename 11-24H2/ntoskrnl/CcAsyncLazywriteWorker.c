/*
 * XREFs of CcAsyncLazywriteWorker @ 0x14027B0C8
 * Callers:
 *     CcAsyncLazywriteWorkerThread @ 0x1404D8960 (CcAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcFreeWorkQueueEntry @ 0x140279C5C (CcFreeWorkQueueEntry.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140279DE0 (CcPerfLogWorkItemEnqueue.c)
 *     CcFindNextWorkQueueEntry @ 0x14027ACDC (CcFindNextWorkQueueEntry.c)
 *     CcPerfLogWorkItemComplete @ 0x14027AD94 (CcPerfLogWorkItemComplete.c)
 *     CcPerfLogWorkItemDequeue @ 0x14027AE00 (CcPerfLogWorkItemDequeue.c)
 *     CcWriteBehindAsync @ 0x14027B44C (CcWriteBehindAsync.c)
 *     CcRepostToSynchronousLazywriter @ 0x14027B688 (CcRepostToSynchronousLazywriter.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcReEngageWorkerThreads @ 0x1404D4C20 (CcReEngageWorkerThreads.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CcDebugExceptionFilter @ 0x1405778A4 (CcDebugExceptionFilter.c)
 */

void __fastcall CcAsyncLazywriteWorker(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v2; // rdi
  __int64 v3; // r13
  __int64 v4; // r14
  char v5; // r15
  __int64 v6; // rcx
  _DWORD *v7; // rax
  _DWORD *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  unsigned int v14; // edi
  int v15; // eax
  _QWORD *v16; // rax
  char v17; // [rsp+30h] [rbp-B8h]
  _QWORD *P; // [rsp+38h] [rbp-B0h]
  _DWORD v19[2]; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD *v20; // [rsp+50h] [rbp-98h]
  __int64 v21; // [rsp+58h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-88h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-70h]
  struct _KTHREAD *v24; // [rsp+80h] [rbp-68h]
  __int128 v25; // [rsp+90h] [rbp-58h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-48h]

  v1 = 0LL;
  v2 = 0LL;
  v17 = 0;
  v19[1] = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v25 = 0LL;
  v26 = 0LL;
  v19[0] = 0;
  v20 = 0LL;
  if ( *(_DWORD *)(a1 + 32) != 7 )
    KeBugCheckEx(0x34u, 0x239uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 72);
LABEL_3:
  v5 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 832), &LockHandle);
  if ( v17 )
  {
    *(_BYTE *)(v4 + 196) = 0;
    v17 = 0;
    CcReEngageWorkerThreads(v3, v4, *(unsigned int *)(v4 + 180), *(unsigned int *)(v4 + 184));
  }
  if ( v20 == (_QWORD *)35422 )
  {
    if ( *((_DWORD *)v2 + 32) == 7 )
      *(_QWORD *)(v2[3] + 504LL) = v2;
    v16 = (_QWORD *)v1[1];
    if ( (_QWORD *)*v16 != v1 )
      __fastfail(3u);
    *v2 = v1;
    v2[1] = v16;
    *v16 = v2;
    v1[1] = v2;
    v20 = 0LL;
  }
  while ( !v5 )
  {
    v5 = 1;
    v1 = (_QWORD *)(v4 + 312);
    if ( (_QWORD *)*v1 == v1 )
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
    v9 = v4 + 104;
    if ( v1 == (_QWORD *)(v4 + 104) )
      goto LABEL_31;
    if ( !*v7 || (unsigned int)(*(_DWORD *)(v4 + 192) + 1) < *v8 || *(_DWORD *)(v4 + 152) )
    {
      if ( v1 == (_QWORD *)v9 )
      {
LABEL_31:
        if ( (unsigned int)(*(_DWORD *)(v4 + 188) + 1) <= *(_DWORD *)(v3 + 1288) )
          goto LABEL_13;
      }
      else
      {
LABEL_13:
        P = CcFindNextWorkQueueEntry(v9, v4, (_QWORD *)(v4 + 312));
        if ( P )
        {
          v21 = v4 + 188;
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 188));
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( (xmmword_140FC6B50 & 0x20000) != 0 )
            CcPerfLogWorkItemDequeue((__int64)P);
          v13 = *((_DWORD *)P + 32);
          if ( v13 == 4 )
          {
            KeSetEvent((PRKEVENT)P[2], 0, 0);
            v17 = 1;
          }
          else if ( v13 == 7 )
          {
            CurrentThread = KeGetCurrentThread();
            *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
            v14 = 0;
            do
            {
              v20 = P;
              v15 = CcWriteBehindAsync(P, v19, &v25);
              if ( v14 >= 0xA )
                break;
              ++v14;
            }
            while ( v20 == (_QWORD *)35422 );
            if ( v15 == 2 )
            {
              CcRepostToSynchronousLazywriter(P);
              P = 0LL;
            }
            v24 = KeGetCurrentThread();
            *((_DWORD *)&v24[1].SwapListEntry + 3) &= ~2u;
          }
          _InterlockedDecrement((volatile signed __int32 *)(v4 + 188));
          v2 = P;
          if ( P )
          {
            if ( v20 == (_QWORD *)35422 )
            {
              if ( (xmmword_140FC6B50 & 0x20000) != 0 )
                CcPerfLogWorkItemEnqueue((__int64)v1, (__int64)P, 1, 0);
            }
            else
            {
              if ( (xmmword_140FC6B50 & 0x20000) != 0 )
                CcPerfLogWorkItemComplete((__int64)P);
              CcFreeWorkQueueEntry((_SLIST_ENTRY *)P, v10, v11, v12);
            }
          }
          goto LABEL_3;
        }
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
