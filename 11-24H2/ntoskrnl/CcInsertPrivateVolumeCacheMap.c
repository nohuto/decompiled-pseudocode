/*
 * XREFs of CcInsertPrivateVolumeCacheMap @ 0x140430768
 * Callers:
 *     CcCreatePrivateVolumeCacheMap @ 0x14042FE00 (CcCreatePrivateVolumeCacheMap.c)
 *     CcFindPrivateVolumeCacheMap @ 0x14042FF54 (CcFindPrivateVolumeCacheMap.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall CcInsertPrivateVolumeCacheMap(__int64 a1, __int64 a2, _QWORD *a3, char a4, char a5, _BYTE *a6)
{
  const void *v6; // r15
  struct _KTHREAD *CurrentThread; // rcx
  char v12; // bp
  _QWORD *v13; // rax
  _QWORD *i; // rdx
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  _DWORD *v17; // rbx
  struct _KTHREAD *v18; // r10
  const char *v19; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rsi
  _QWORD *v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v25; // [rsp+78h] [rbp-30h] BYREF

  v6 = *(const void **)(a2 + 16);
  *a3 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v25, 0, sizeof(v25));
  CurrentThread = KeGetCurrentThread();
  v12 = 0;
  *a6 = 0;
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcInsertPrivateVolumeCacheMap: VCM:%p(vid:%2lx), DO:%p, PVCM:%p(vid:%2lx)\n",
    LODWORD(CurrentThread[1].CycleTime),
    CurrentThread[1].CurrentRunTime,
    *(const void **)(a2 + 40),
    *(_DWORD *)(a2 + 24),
    v6,
    (const void *)a2,
    *(_DWORD *)(a2 + 24));
  if ( !a4 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  v13 = (_QWORD *)(a1 + 32);
  for ( i = *(_QWORD **)(a1 + 32); i != v13; i = (_QWORD *)*i )
  {
    v21 = i - 72;
    if ( (const void *)*(i - 70) == v6 )
    {
      ++*((_DWORD *)v21 + 1);
      *a3 = v21;
      v17 = (_DWORD *)(a1 + 48);
      goto LABEL_11;
    }
  }
  v15 = *(_QWORD **)(a1 + 40);
  v16 = (_QWORD *)(a2 + 576);
  if ( (_QWORD *)*v15 != v13 )
    __fastfail(3u);
  v17 = (_DWORD *)(a1 + 48);
  *v16 = v13;
  v12 = 1;
  *(_QWORD *)(a2 + 584) = v15;
  *v15 = v16;
  *(_QWORD *)(a1 + 40) = v16;
  *(_BYTE *)(a2 + 1173) = 1;
  if ( !a5 )
    ++*v17;
  if ( *v17 == 1 )
    KeResetEvent((PRKEVENT)(a1 + 56));
LABEL_11:
  if ( !a4 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v12 )
  {
    if ( a4 )
    {
      *a6 = 1;
    }
    else
    {
      v22 = *(_QWORD *)(a2 + 40);
      if ( v22 )
      {
        KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v25);
        v23 = *(_QWORD **)(v22 + 224);
        *(_QWORD *)(a2 + 592) = v22 + 216;
        *(_QWORD *)(a2 + 600) = v23;
        *v23 = a2 + 592;
        *(_QWORD *)(v22 + 224) = a2 + 592;
        KeReleaseInStackQueuedSpinLock(&v25);
      }
    }
  }
  v18 = KeGetCurrentThread();
  v19 = "YES";
  if ( !v12 )
    v19 = "NO";
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcInsertPrivateVolumeCacheMap: VCM:%p(vid:%2lx), DO:%p, PVCM:%p(vid:%2lx), PVCMCount:%lu, Inserted:%s\n",
    LODWORD(v18[1].CycleTime),
    v18[1].CurrentRunTime,
    *(const void **)(a2 + 40),
    *(_DWORD *)(a2 + 24),
    v6,
    (const void *)a2,
    *(_DWORD *)(a2 + 24),
    *v17,
    v19);
  return v12;
}
