/*
 * XREFs of ?GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1400355F0
 * Callers:
 *     VidMmProcessPendingTerminations @ 0x1400E1108 (VidMmProcessPendingTerminations.c)
 *     VidMmFlushDeferredEvictions @ 0x1400E9AD4 (VidMmFlushDeferredEvictions.c)
 * Callees:
 *     <none>
 */

struct VIDMM_ALLOC *__fastcall VIDMM_GLOBAL::GetNextPendingTermination(KSPIN_LOCK *this, bool *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  struct VIDMM_ALLOC *result; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this + 5549, &LockHandle);
  v4 = this + 5550;
  v5 = (_QWORD *)this[5550];
  if ( v5 == v4 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    result = 0LL;
    *a2 = 0;
  }
  else
  {
    v7 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v8 = (_QWORD *)v5[1], (_QWORD *)*v8 != v5) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *a2 = *v4 != (_QWORD)v4;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return (struct VIDMM_ALLOC *)(v5 - 27);
  }
  return result;
}
