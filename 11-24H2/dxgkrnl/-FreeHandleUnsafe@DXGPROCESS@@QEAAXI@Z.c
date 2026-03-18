/*
 * XREFs of ?FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z @ 0x14005D474
 * Callers:
 *     ??1DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x140202BD4 (--1DXGTRACKEDWORKLOAD@@QEAA@XZ.c)
 *     ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402222F0 (-VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1402CD2EC (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x140322E94 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x140394DD0 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 * Callees:
 *     Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline @ 0x140066334 (Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x140335510 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

void __fastcall DXGPROCESS::FreeHandleUnsafe(DXGPROCESS *this, unsigned int a2)
{
  Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline();
  HMGRTABLE::FreeHandle((DXGPROCESS *)((char *)this + 280), a2);
}
