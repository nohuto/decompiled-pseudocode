/*
 * XREFs of VidSchiInterlockedRemoveHeadListIfExist @ 0x14002AB40
 * Callers:
 *     VidSchiSetTransferContextRunningTime @ 0x140023890 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiSwitchContextWithCheck @ 0x140024800 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiSwitchContext @ 0x14002A380 (VidSchiSwitchContext.c)
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z @ 0x14002A688 (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z.c)
 *     VidSchiDecrementContextReference @ 0x14002A940 (VidSchiDecrementContextReference.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x140032E88 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     VidSchiAllocateDmaPacket @ 0x1400AE420 (VidSchiAllocateDmaPacket.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1400AE8E0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSubmitCommand @ 0x1400D6BF0 (VidSchSubmitCommand.c)
 *     VidSchSubmitPagingCommand @ 0x1400E35C0 (VidSchSubmitPagingCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1400E5120 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1400E5340 (VidSchiAllocateHwQueuePacket.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VidSchiInterlockedRemoveHeadListIfExist(KSPIN_LOCK *a1, _QWORD **a2, _DWORD *a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0LL;
  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v6 = *a2;
  if ( *a2 != a2 )
  {
    v5 = *a2;
    if ( (_QWORD **)v6[1] != a2 || (v7 = (_QWORD *)*v6, (_QWORD *)v7[1] != v5) )
      __fastfail(3u);
    *a2 = v7;
    v7[1] = a2;
    if ( a3 )
      --*a3;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
