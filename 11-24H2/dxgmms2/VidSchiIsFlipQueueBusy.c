/*
 * XREFs of VidSchiIsFlipQueueBusy @ 0x140031E60
 * Callers:
 *     VidSchiWaitForSchedulerEvents @ 0x140115A90 (VidSchiWaitForSchedulerEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiIsFlipQueueBusy(__int64 a1)
{
  unsigned __int8 v2; // di
  __int64 i; // rdx
  __int64 v4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1984), &LockHandle);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(a1 + 8 * i + 3432);
    if ( v4 && *(_DWORD *)(v4 + 3248) )
    {
      v2 = 1;
      break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
