/*
 * XREFs of CcAsyncLazywriteWorkerMulti @ 0x1404C8A30
 * Callers:
 *     CcAsyncLazywriteWorkerThread @ 0x1404DF850 (CcAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     CcFlushCachePostProcessOneRange @ 0x1402D9210 (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCachePreProcess @ 0x1402D9F6C (CcFlushCachePreProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     CcRepostToSynchronousLazywriter @ 0x1403AAF90 (CcRepostToSynchronousLazywriter.c)
 *     CcFreeWorkQueueEntry @ 0x1403AC6BC (CcFreeWorkQueueEntry.c)
 *     CcFindNextWBWorkQueueEntry @ 0x14057AF18 (CcFindNextWBWorkQueueEntry.c)
 *     CcQueueAsyncLazywriteCompletion @ 0x14057AF90 (CcQueueAsyncLazywriteCompletion.c)
 *     CcWriteBehindAsyncFlushOneRange @ 0x14057B01C (CcWriteBehindAsyncFlushOneRange.c)
 *     CcWriteBehindAsyncPreProcess @ 0x14057B09C (CcWriteBehindAsyncPreProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall CcAsyncLazywriteWorkerMulti(__int64 a1)
{
  int v1; // r15d
  __int64 v2; // r14
  __int64 v3; // r12
  int v4; // edi
  _DWORD *v5; // rbx
  int CycleTime; // r9d
  unsigned int CurrentRunTime; // eax
  __int64 v8; // rdx
  ULONG v9; // esi
  char v10; // cl
  NTSTATUS v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  const char *v15; // r8
  KSPIN_LOCK *v16; // r14
  __int64 v17; // rcx
  ULONG v18; // r13d
  __int64 NextWBWorkQueueEntry; // rbx
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r15
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rcx
  volatile signed __int32 *v26; // rax
  __int64 v27; // r14
  __int64 v28; // r13
  __int64 v29; // r15
  __int64 v30; // r8
  char v31; // al
  BOOLEAN Alertable[4]; // [rsp+28h] [rbp-D8h]
  ULONG v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v36; // [rsp+80h] [rbp-80h]
  PVOID Object[3]; // [rsp+88h] [rbp-78h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v40[64]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v41[64]; // [rsp+300h] [rbp+200h] BYREF
  struct _KWAIT_BLOCK v42; // [rsp+500h] [rbp+400h] BYREF

  if ( !a1 )
    return;
  v1 = *(_DWORD *)(a1 + 40);
  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 72);
  v4 = 3;
  v34 = v2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *(_OWORD *)Object = 0LL;
  if ( v1 )
    return;
  v5 = *(_DWORD **)(a1 + 64);
  CycleTime = KeGetCurrentThread()[1].CycleTime;
  *(_DWORD *)Alertable = v5[6];
  CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
  v36 = v5;
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcAsyncLazywriteWorkerMulti(vid-%02x): Starting worker thread(tid-%x, %p)\n",
    CycleTime,
    CurrentRunTime,
    *(_DWORD *)Alertable,
    0,
    KeGetCurrentThread());
  memset_0(v40, 0, sizeof(v40));
  memset_0(v41, 0, sizeof(v41));
  LODWORD(v8) = v5[402];
  Object[1] = v5 + 294;
  Object[0] = (PVOID)(v3 + 328);
  v40[0] = (PVOID)(v3 + 328);
  if ( (unsigned int)v8 >= 0x40 )
    LODWORD(v8) = 63;
  v9 = 1;
  v33 = v8;
  while ( 1 )
  {
    v10 = *(_BYTE *)(v3 + 196);
    if ( v10 )
    {
      if ( v9 == 1 )
        break;
    }
    if ( v9 - 1 < (unsigned int)v8 && *(_QWORD *)(v3 + 312) != v3 + 312 && !v10 )
      break;
    if ( v9 == 1 )
    {
      v11 = KeWaitForMultipleObjects(
              2u,
              Object,
              WaitAny,
              WrFreePage,
              0,
              0,
              &CcAsyncWriteBehindWaitTimeout,
              &WaitBlockArray);
      v14 = v11;
      if ( v11 == 258 )
      {
        v4 = 3;
      }
      else if ( v11 )
      {
        if ( v11 == 1 )
          v4 = 2;
      }
      else
      {
        v4 = 0;
      }
      if ( !v4 )
        goto LABEL_29;
      if ( v4 != 1 )
      {
        if ( v4 != 2 )
          goto LABEL_49;
        goto LABEL_23;
      }
    }
    else
    {
      v14 = KeWaitForMultipleObjects(v9, v40, WaitAny, WrFreePage, 0, 0, 0LL, &v42);
      if ( !v14 )
        break;
      v4 = 1;
    }
    LODWORD(v8) = v33;
    if ( v14 < v9 )
    {
      _mm_lfence();
      v27 = v14;
      v28 = v41[v27];
      if ( v28 )
      {
        v29 = *(_QWORD *)(v28 + 16);
        if ( v29 )
        {
          if ( !CcFlushCachePostProcessOneRange(*(__int64 **)(v28 + 16), v33, v12, v13)
            || (v31 = CcWriteBehindAsyncFlushOneRange(v29), v1 = 0, v8 = v33, !v31) )
          {
            v40[v14] = 0LL;
            LOBYTE(v30) = 1;
            v41[v14] = 0LL;
            LOBYTE(v8) = 1;
            CcQueueAsyncLazywriteCompletion(v28, v8, v30);
            while ( v14 < v9 - 1 )
            {
              v40[v27++] = v40[++v14];
              v40[v27 + 63] = (PVOID)v41[v14];
            }
            v1 = 0;
            --v9;
            LODWORD(v8) = v33;
            v40[v14] = 0LL;
            v41[v14] = 0LL;
            _InterlockedDecrement(*(volatile signed __int32 **)(v3 + 352));
          }
        }
        else
        {
          v1 = 0;
        }
      }
LABEL_7:
      v2 = v34;
    }
  }
  v4 = 0;
LABEL_29:
  v16 = (KSPIN_LOCK *)(v2 + 832);
  KeAcquireInStackQueuedSpinLock(v16, &LockHandle);
  v18 = v9 - 1;
  while ( *(_QWORD *)(v3 + 312) != v3 + 312 && v18 < v33 )
  {
    NextWBWorkQueueEntry = CcFindNextWBWorkQueueEntry(v17, v3, v3 + 312, v18);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !NextWBWorkQueueEntry )
    {
      KeAcquireInStackQueuedSpinLock(v16, &LockHandle);
      break;
    }
    if ( *(_DWORD *)(NextWBWorkQueueEntry + 128) == 4 )
    {
      KeSetEvent(*(PRKEVENT *)(NextWBWorkQueueEntry + 16), 0, 0);
      CcFreeWorkQueueEntry((_SLIST_ENTRY *)NextWBWorkQueueEntry);
      KeAcquireInStackQueuedSpinLock(v16, &LockHandle);
      *(_BYTE *)(v3 + 196) = 0;
    }
    else
    {
      v20 = CcWriteBehindAsyncPreProcess(NextWBWorkQueueEntry, NextWBWorkQueueEntry + 56, NextWBWorkQueueEntry + 32);
      if ( v20 == 1 )
      {
        v21 = 0LL;
LABEL_41:
        v24 = 0LL;
        goto LABEL_45;
      }
      if ( v20 == 2 )
      {
        CcRepostToSynchronousLazywriter(NextWBWorkQueueEntry);
        goto LABEL_46;
      }
      v22 = *(_QWORD *)(NextWBWorkQueueEntry + 16);
      v23 = CcFlushCachePreProcess(v22);
      *(_QWORD *)(v22 + 96) = 0LL;
      if ( !v23 )
      {
        LOBYTE(v21) = 1;
        goto LABEL_41;
      }
      if ( (unsigned __int8)CcWriteBehindAsyncFlushOneRange(v22) )
      {
        v25 = v9++;
        ++v18;
        v40[v25] = *(PVOID *)(v22 + 72);
        v26 = *(volatile signed __int32 **)(v3 + 352);
        v41[v25] = NextWBWorkQueueEntry;
        _InterlockedIncrement(v26);
        goto LABEL_46;
      }
      LOBYTE(v21) = 1;
      LOBYTE(v24) = 1;
LABEL_45:
      CcQueueAsyncLazywriteCompletion(NextWBWorkQueueEntry, v24, v21);
LABEL_46:
      KeAcquireInStackQueuedSpinLock(v16, &LockHandle);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v1 = 0;
LABEL_49:
  if ( v4 != 3 )
  {
    LODWORD(v8) = v33;
    goto LABEL_7;
  }
LABEL_23:
  v15 = "ExitEvent";
  if ( v4 != 2 )
    v15 = "Inactivity";
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcAsyncLazywriteWorkerMulti(vid-%02x): Exiting worker thread (tid-%x, %p) due to %s.\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    v36[6],
    v1,
    KeGetCurrentThread(),
    v15);
}
