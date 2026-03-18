/*
 * XREFs of ?VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z @ 0x14001DC70
 * Callers:
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x14001DD28 (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiSuspendResumeHwContext @ 0x140020730 (VidSchiSuspendResumeHwContext.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1400351E0 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchiCheckNodeTimeout @ 0x1400B6030 (VidSchiCheckNodeTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiCheckHwSchNodeProgress(struct _VIDSCH_NODE *a1, char a2)
{
  KSPIN_LOCK *v3; // rcx
  unsigned __int8 v4; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-30h] BYREF
  __int16 v7; // [rsp+40h] [rbp-18h]

  v3 = (KSPIN_LOCK *)(*((_QWORD *)a1 + 3) + 1984LL);
  v7 = 0;
  if ( a2 )
  {
    KeAcquireInStackQueuedSpinLock(v3, &LockHandle);
    LOBYTE(v7) = 1;
  }
  if ( *((_DWORD *)a1 + 432) || *((_DWORD *)a1 + 434) )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    *((_DWORD *)a1 + 110) = 0;
  }
  if ( !(_BYTE)v7 )
    return v4;
  if ( !HIBYTE(v7) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return v4;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  return v4;
}
