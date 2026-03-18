/*
 * XREFs of ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x14003124C
 * Callers:
 *     ?GuestResumed@HOSTVMMONITORMAPPING@@QEAAXXZ @ 0x140030C58 (-GuestResumed@HOSTVMMONITORMAPPING@@QEAAXXZ.c)
 *     ?SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IE@Z @ 0x140030D10 (-SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IE@Z.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___ @ 0x140030E14 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x140030FDC (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1400310E0 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x14003E1D0 (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1400419DC (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x140061AC0 (-QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGAUTOSPINLOCK::Acquire(DXGAUTOSPINLOCK *this)
{
  KSPIN_LOCK *v1; // rbx

  v1 = (KSPIN_LOCK *)*((_QWORD *)this + 1);
  KeAcquireInStackQueuedSpinLock(v1, (PKLOCK_QUEUE_HANDLE)((char *)this + 16));
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  v1[1] = (KSPIN_LOCK)KeGetCurrentThread();
  *((_BYTE *)this + 40) = 1;
}
