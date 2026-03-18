/*
 * XREFs of VidSchiInterlockedRemoveEntryList @ 0x140036160
 * Callers:
 *     VidSchiWaitFlushCompletion @ 0x1400ACD5C (VidSchiWaitFlushCompletion.c)
 *     VidSchFlushDevice @ 0x1400ACF70 (VidSchFlushDevice.c)
 *     WaitDmaBufferNotBusy @ 0x1400AF3B0 (WaitDmaBufferNotBusy.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x1400CEA28 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z.c)
 *     VidSchSubmitCommand @ 0x1400D6BF0 (VidSchSubmitCommand.c)
 *     VidSchSubmitPagingCommand @ 0x1400E35C0 (VidSchSubmitPagingCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1400E5120 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1400E5340 (VidSchiAllocateHwQueuePacket.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1400F5710 (VidSchWaitForQueuedPresentLimit.c)
 *     VidSchUnregisterCompletionEvent @ 0x140101AB4 (VidSchUnregisterCompletionEvent.c)
 *     VidSchBlockUntilNoUnorderedWaitsInDevice @ 0x140102AE0 (VidSchBlockUntilNoUnorderedWaitsInDevice.c)
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
