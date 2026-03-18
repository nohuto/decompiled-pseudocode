/*
 * XREFs of ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x14004683C
 * Callers:
 *     ?VmBusChannelProcessPacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1400462B0 (-VmBusChannelProcessPacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXG_DEFERRED_WORK_QUEUE_DPC::QueueWorkItem(
        DXG_DEFERRED_WORK_QUEUE_DPC *this,
        struct DXG_DEFERRED_QUEUE_WORK_ITEM *a2)
{
  DXG_DEFERRED_WORK_QUEUE_DPC **v4; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this, &LockHandle);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 1) = KeGetCurrentThread();
  v4 = (DXG_DEFERRED_WORK_QUEUE_DPC **)*((_QWORD *)this + 3);
  if ( *v4 != (DXG_DEFERRED_WORK_QUEUE_DPC *)((char *)this + 16) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)this + 16;
  *((_QWORD *)a2 + 1) = v4;
  *v4 = a2;
  *((_QWORD *)this + 3) = a2;
  if ( ++*((_DWORD *)this + 8) == 1 )
  {
    KeResetEvent((PRKEVENT)((char *)this + 40));
    ExQueueWorkItem((PWORK_QUEUE_ITEM)this + 2, *((WORK_QUEUE_TYPE *)this + 24));
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 1) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
