/*
 * XREFs of VidSchSubmitGlobalCommand @ 0x1400E45A8
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x140020380 (VidSchSuspendResumeDevice.c)
 *     VidSchiSuspendFlipQueues @ 0x1400E3328 (VidSchiSuspendFlipQueues.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAUVIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1400E34AC (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 *     VidSchSwitchFromContext @ 0x1400E42E0 (VidSchSwitchFromContext.c)
 *     VidSchSuspendAdapter @ 0x1400E43D0 (VidSchSuspendAdapter.c)
 *     VidSchSwitchFromDevice @ 0x1400E44D0 (VidSchSwitchFromDevice.c)
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x140004B80 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiSetPriorityContext @ 0x140047D78 (VidSchiSetPriorityContext.c)
 *     VidSchiAllocateQueuePacket @ 0x1400E4AC0 (VidSchiAllocateQueuePacket.c)
 */

void __fastcall VidSchSubmitGlobalCommand(__int64 a1, __int64 a2)
{
  struct _VIDSCH_CONTEXT **v2; // rax
  struct _VIDSCH_CONTEXT *v5; // rbp
  __int64 QueuePacket; // rdi
  KPRIORITY PriorityThread; // eax

  v2 = (struct _VIDSCH_CONTEXT **)(a1 + 264);
  if ( *(_DWORD *)(a2 + 40) == 2 )
    v2 = *(struct _VIDSCH_CONTEXT ***)(a2 + 48);
  v5 = *v2;
  QueuePacket = VidSchiAllocateQueuePacket(*v2, 1LL);
  *(_DWORD *)QueuePacket = 895576406;
  *(_DWORD *)(QueuePacket + 48) = 6;
  *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(QueuePacket + 52) = 2;
  *(_QWORD *)(QueuePacket + 88) = v5;
  *(_QWORD *)(QueuePacket + 104) = KeGetCurrentThread();
  *(_OWORD *)(QueuePacket + 752) = *(_OWORD *)a2;
  *(_OWORD *)(QueuePacket + 768) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(QueuePacket + 784) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(QueuePacket + 800) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(QueuePacket + 816) = *(_OWORD *)(a2 + 64);
  if ( (*(_DWORD *)(a1 + 2792) & 4) != 0 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    VidSchiSetPriorityContext(v5, PriorityThread);
  }
  VidSchiSubmitCommandPacketToQueue(QueuePacket);
}
