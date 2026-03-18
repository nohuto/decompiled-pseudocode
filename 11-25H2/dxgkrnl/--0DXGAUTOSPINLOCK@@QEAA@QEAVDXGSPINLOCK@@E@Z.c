/*
 * XREFs of ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x140035A50
 * Callers:
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___ @ 0x1400777F0 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_1d3ed8bc1bcab5b72b8469e05c2c1031___ @ 0x1400779BC (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_1d3ed8bc1bcab5b72b8469e05c2c1031___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___ @ 0x140077B6C (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_410e6522bb99cf0c876cbe7a3c34b555___ @ 0x140077D04 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_410e6522bb99cf0c876cbe7a3c34b555___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___ @ 0x140077EB8 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___.c)
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x140078268 (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 *     ?GuestPaused@HOSTVMMONITORMAPPING@@QEAAXXZ @ 0x140078824 (-GuestPaused@HOSTVMMONITORMAPPING@@QEAAXXZ.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

DXGAUTOSPINLOCK *__fastcall DXGAUTOSPINLOCK::DXGAUTOSPINLOCK(DXGAUTOSPINLOCK *this, KSPIN_LOCK *a2, char a3)
{
  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 40) = 0;
  if ( a3 )
  {
    KeAcquireInStackQueuedSpinLock(a2, (PKLOCK_QUEUE_HANDLE)((char *)this + 16));
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    a2[1] = (KSPIN_LOCK)KeGetCurrentThread();
    *((_BYTE *)this + 40) = 1;
  }
  return this;
}
