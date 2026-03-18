/*
 * XREFs of ?FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z @ 0x14005DA14
 * Callers:
 *     ??1DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1401FC4C4 (--1DXGTRACKEDWORKLOAD@@QEAA@XZ.c)
 *     ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021BE90 (-VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x14031E194 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x14033BE70 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1403A1F60 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 * Callees:
 *     Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline @ 0x1400667C8 (Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1403473B0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

void __fastcall DXGPROCESS::FreeHandleUnsafe(DXGPROCESS *this, unsigned int a2)
{
  Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline();
  HMGRTABLE::FreeHandle((DXGPROCESS *)((char *)this + 280), a2);
}
