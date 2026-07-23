/*
 * XREFs of CcAsyncLazywriteWorkerMulti @ 0x1404C0AEC
 * Callers:
 *     CcAsyncLazywriteWorkerThread @ 0x1404D8960 (CcAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     CcFlushCachePostProcessOneRange @ 0x140275FC0 (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCachePreProcess @ 0x140278C74 (CcFlushCachePreProcess.c)
 *     CcFreeWorkQueueEntry @ 0x140279C5C (CcFreeWorkQueueEntry.c)
 *     CcRepostToSynchronousLazywriter @ 0x14027B688 (CcRepostToSynchronousLazywriter.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcFindNextWBWorkQueueEntry @ 0x14057B6C8 (CcFindNextWBWorkQueueEntry.c)
 *     CcQueueAsyncLazywriteCompletion @ 0x14057B740 (CcQueueAsyncLazywriteCompletion.c)
 *     CcWriteBehindAsyncFlushOneRange @ 0x14057B7CC (CcWriteBehindAsyncFlushOneRange.c)
 *     CcWriteBehindAsyncPreProcess @ 0x14057B84C (CcWriteBehindAsyncPreProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  unsigned int v12; // ebx
  const char *v13; // r8
  KSPIN_LOCK *v14; // r14
  __int64 v15; // rcx
  ULONG v16; // r13d
  __int64 NextWBWorkQueueEntry; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r15
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  volatile signed __int32 *v27; // rax
  __int64 v28; // r14
  __int64 v29; // r13
  __int64 v30; // r15
  __int64 v31; // r8
  char v32; // al
  BOOLEAN Alertable[4]; // [rsp+28h] [rbp-D8h]
  ULONG v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v37; // [rsp+80h] [rbp-80h]
  PVOID Object[3]; // [rsp+88h] [rbp-78h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v41[64]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v42[64]; // [rsp+300h] [rbp+200h] BYREF
  struct _KWAIT_BLOCK v43; // [rsp+500h] [rbp+400h] BYREF

  if ( !a1 )
    return;
  v1 = *(_DWORD *)(a1 + 40);
  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 72);
  v4 = 3;
  v35 = v2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *(_OWORD *)Object = 0LL;
  if ( v1 )
    return;
  v5 = *(_DWORD **)(a1 + 64);
  CycleTime = KeGetCurrentThread()[1].CycleTime;
  *(_DWORD *)Alertable = v5[6];
  CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
  v37 = v5;
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcAsyncLazywriteWorkerMulti(vid-%02x): Starting worker thread(tid-%x, %p)\n",
    CycleTime,
    CurrentRunTime,
    *(_DWORD *)Alertable,
    0,
    KeGetCurrentThread());
  memset_0(v41, 0, sizeof(v41));
  memset_0(v42, 0, sizeof(v42));
  LODWORD(v8) = v5[402];
  Object[1] = v5 + 294;
  Object[0] = (PVOID)(v3 + 328);
  v41[0] = (PVOID)(v3 + 328);
  if ( (unsigned int)v8 >= 0x40 )
    LODWORD(v8) = 63;
  v9 = 1;
  v34 = v8;
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
      v12 = v11;
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
      v12 = KeWaitForMultipleObjects(v9, v41, WaitAny, WrFreePage, 0, 0, 0LL, &v43);
      if ( !v12 )
        break;
      v4 = 1;
    }
    LODWORD(v8) = v34;
    if ( v12 < v9 )
    {
      _mm_lfence();
      v28 = v12;
      v29 = v42[v28];
      if ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 16);
        if ( v30 )
        {
          if ( !CcFlushCachePostProcessOneRange(*(__int64 **)(v29 + 16))
            || (v32 = CcWriteBehindAsyncFlushOneRange(v30), v1 = 0, v8 = v34, !v32) )
          {
            v41[v12] = 0LL;
            LOBYTE(v31) = 1;
            v42[v12] = 0LL;
            LOBYTE(v8) = 1;
            CcQueueAsyncLazywriteCompletion(v29, v8, v31);
            while ( v12 < v9 - 1 )
            {
              v41[v28++] = v41[++v12];
              v41[v28 + 63] = (PVOID)v42[v12];
            }
            v1 = 0;
            --v9;
            LODWORD(v8) = v34;
            v41[v12] = 0LL;
            v42[v12] = 0LL;
            _InterlockedDecrement(*(volatile signed __int32 **)(v3 + 352));
          }
        }
        else
        {
          v1 = 0;
        }
      }
LABEL_7:
      v2 = v35;
    }
  }
  v4 = 0;
LABEL_29:
  v14 = (KSPIN_LOCK *)(v2 + 832);
  KeAcquireInStackQueuedSpinLock(v14, &LockHandle);
  v16 = v9 - 1;
  while ( *(_QWORD *)(v3 + 312) != v3 + 312 && v16 < v34 )
  {
    NextWBWorkQueueEntry = CcFindNextWBWorkQueueEntry(v15, v3, v3 + 312, v16);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !NextWBWorkQueueEntry )
    {
      KeAcquireInStackQueuedSpinLock(v14, &LockHandle);
      break;
    }
    if ( *(_DWORD *)(NextWBWorkQueueEntry + 128) == 4 )
    {
      KeSetEvent(*(PRKEVENT *)(NextWBWorkQueueEntry + 16), 0, 0);
      CcFreeWorkQueueEntry((_SLIST_ENTRY *)NextWBWorkQueueEntry, v18, v19, v20);
      KeAcquireInStackQueuedSpinLock(v14, &LockHandle);
      *(_BYTE *)(v3 + 196) = 0;
    }
    else
    {
      v21 = CcWriteBehindAsyncPreProcess(NextWBWorkQueueEntry, NextWBWorkQueueEntry + 56, NextWBWorkQueueEntry + 32);
      if ( v21 == 1 )
      {
        v22 = 0LL;
LABEL_41:
        v25 = 0LL;
        goto LABEL_45;
      }
      if ( v21 == 2 )
      {
        CcRepostToSynchronousLazywriter(NextWBWorkQueueEntry);
        goto LABEL_46;
      }
      v23 = *(_QWORD *)(NextWBWorkQueueEntry + 16);
      v24 = CcFlushCachePreProcess(v23);
      *(_QWORD *)(v23 + 96) = 0LL;
      if ( !v24 )
      {
        LOBYTE(v22) = 1;
        goto LABEL_41;
      }
      if ( (unsigned __int8)CcWriteBehindAsyncFlushOneRange(v23) )
      {
        v26 = v9++;
        ++v16;
        v41[v26] = *(PVOID *)(v23 + 72);
        v27 = *(volatile signed __int32 **)(v3 + 352);
        v42[v26] = NextWBWorkQueueEntry;
        _InterlockedIncrement(v27);
        goto LABEL_46;
      }
      LOBYTE(v22) = 1;
      LOBYTE(v25) = 1;
LABEL_45:
      CcQueueAsyncLazywriteCompletion(NextWBWorkQueueEntry, v25, v22);
LABEL_46:
      KeAcquireInStackQueuedSpinLock(v14, &LockHandle);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v1 = 0;
LABEL_49:
  if ( v4 != 3 )
  {
    LODWORD(v8) = v34;
    goto LABEL_7;
  }
LABEL_23:
  v13 = "ExitEvent";
  if ( v4 != 2 )
    v13 = "Inactivity";
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcAsyncLazywriteWorkerMulti(vid-%02x): Exiting worker thread (tid-%x, %p) due to %s.\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    v37[6],
    v1,
    KeGetCurrentThread(),
    v13);
}
