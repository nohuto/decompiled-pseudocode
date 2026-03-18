/*
 * XREFs of DpiFdoHandleQueryConnectionChange @ 0x140028940
 * Callers:
 *     DpiDxgkDdiQueryConnectionChange @ 0x1400285C0 (DpiDxgkDdiQueryConnectionChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoHandleQueryConnectionChange(__int64 a1, _OWORD *a2)
{
  _QWORD *v4; // rdi
  _QWORD **v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  unsigned int v8; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3624), &LockHandle);
  v5 = (_QWORD **)(a1 + 3632);
  v6 = *v5;
  if ( *v5 == v5 )
  {
    v8 = 255;
  }
  else
  {
    v4 = *v5;
    if ( (_QWORD **)v6[1] != v5 || (v7 = (_QWORD *)*v6, (_QWORD *)v7[1] != v4) )
      __fastfail(3u);
    *v5 = v7;
    v7[1] = v5;
    v8 = 0;
    *a2 = *(_OWORD *)(v4 + 3);
    a2[1] = *(_OWORD *)(v4 + 5);
    a2[2] = *(_OWORD *)(v4 + 7);
    a2[3] = *(_OWORD *)(v4 + 9);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
    ExFreeToNPagedLookasideList(&Lookaside, v4);
  return v8;
}
