/*
 * XREFs of VidSchiInterlockedInsertTailList @ 0x140023690
 * Callers:
 *     VidSchCreateHwQueue @ 0x1400224D0 (VidSchCreateHwQueue.c)
 *     VidSchiCreateContextInternal @ 0x140022B78 (VidSchiCreateContextInternal.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x140024504 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     VidSchiCreateNode @ 0x1400A7710 (VidSchiCreateNode.c)
 *     VidSchRegisterCompletionEvent @ 0x1400B5974 (VidSchRegisterCompletionEvent.c)
 *     VidSchSubmitCommand @ 0x1400D2850 (VidSchSubmitCommand.c)
 *     VidSchiCreateDeviceInternal @ 0x1400D3D40 (VidSchiCreateDeviceInternal.c)
 *     VidSchSubmitPagingCommand @ 0x1400E2E98 (VidSchSubmitPagingCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1400E4AC0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1400E4CE0 (VidSchiAllocateHwQueuePacket.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiInterlockedInsertTailList(KSPIN_LOCK *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v7 = *(_QWORD **)(a2 + 8);
  if ( *v7 != a2 )
    __fastfail(3u);
  *a3 = a2;
  a3[1] = v7;
  *v7 = a3;
  *(_QWORD *)(a2 + 8) = a3;
  if ( a4 )
    ++*a4;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
