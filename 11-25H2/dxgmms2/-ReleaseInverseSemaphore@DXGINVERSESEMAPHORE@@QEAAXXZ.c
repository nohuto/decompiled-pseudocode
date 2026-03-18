/*
 * XREFs of ?ReleaseInverseSemaphore@DXGINVERSESEMAPHORE@@QEAAXXZ @ 0x140040678
 * Callers:
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1400CDFC0 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGINVERSESEMAPHORE::ReleaseInverseSemaphore(struct _KEVENT *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline(v2);
  this->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  if ( this[2].Header.LockNV-- == 1 )
    KeSetEvent(this + 1, 0, 0);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline(v3);
  this->Header.WaitListHead.Flink = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
