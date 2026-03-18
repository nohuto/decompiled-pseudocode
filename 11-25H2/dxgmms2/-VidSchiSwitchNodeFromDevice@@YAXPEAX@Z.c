/*
 * XREFs of ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x140031490
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiDecrementContextReference @ 0x14002A940 (VidSchiDecrementContextReference.c)
 *     VidSchiIncrementContextReference @ 0x140032DF0 (VidSchiIncrementContextReference.c)
 *     VidSchiSwitchNodeFromContext @ 0x1400AFC90 (VidSchiSwitchNodeFromContext.c)
 */

void __fastcall VidSchiSwitchNodeFromDevice(_QWORD *a1)
{
  __int64 v1; // rbp
  _QWORD **v2; // rsi
  _QWORD *v3; // rdi
  struct _VIDSCH_CONTEXT *v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[4];
  v2 = (_QWORD **)(a1 + 9);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1984), &LockHandle);
  v3 = *v2;
  while ( v3 != v2 )
  {
    v4 = (struct _VIDSCH_CONTEXT *)(v3 - 3);
    VidSchiIncrementContextReference(v3 - 3);
    if ( !*((_DWORD *)v3 + 220) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiSwitchNodeFromContext(v3 - 3);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1984), &LockHandle);
    }
    v3 = (_QWORD *)*v3;
    VidSchiDecrementContextReference(v4, 1);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
