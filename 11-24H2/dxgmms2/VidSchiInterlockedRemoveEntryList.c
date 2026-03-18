/*
 * XREFs of VidSchiInterlockedRemoveEntryList @ 0x140034A80
 * Callers:
 *     VidSchiWaitFlushCompletion @ 0x1400B510C (VidSchiWaitFlushCompletion.c)
 *     VidSchFlushDevice @ 0x1400B5320 (VidSchFlushDevice.c)
 *     WaitDmaBufferNotBusy @ 0x1400B7760 (WaitDmaBufferNotBusy.c)
 *     VidSchSubmitCommand @ 0x1400D2850 (VidSchSubmitCommand.c)
 *     VidSchSubmitPagingCommand @ 0x1400E2E98 (VidSchSubmitPagingCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1400E4AC0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1400E4CE0 (VidSchiAllocateHwQueuePacket.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1400F0C50 (VidSchWaitForQueuedPresentLimit.c)
 *     VidSchUnregisterCompletionEvent @ 0x1401007DC (VidSchUnregisterCompletionEvent.c)
 *     VidSchBlockUntilNoUnorderedWaitsInDevice @ 0x140101A40 (VidSchBlockUntilNoUnorderedWaitsInDevice.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x1401040E4 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VidSchiInterlockedRemoveEntryList(KSPIN_LOCK *a1, _QWORD *a2, _DWORD *a3)
{
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  bool v7; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v5 = (_QWORD *)*a2;
  v6 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v6 != a2 )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  v7 = v6 == v5;
  if ( a3 )
    --*a3;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v7;
}
