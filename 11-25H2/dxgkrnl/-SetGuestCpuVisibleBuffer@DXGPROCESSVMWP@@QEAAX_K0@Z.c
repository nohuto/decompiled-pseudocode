/*
 * XREFs of ?SetGuestCpuVisibleBuffer@DXGPROCESSVMWP@@QEAAX_K0@Z @ 0x14007AE84
 * Callers:
 *     ?VmBusSetIoSpaceRegion@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140229DF0 (-VmBusSetIoSpaceRegion@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?SetGuestCpuVisibleBuffer@DXGVIRTUALMACHINE@@QEAAX_K0@Z @ 0x14007AEA0 (-SetGuestCpuVisibleBuffer@DXGVIRTUALMACHINE@@QEAAX_K0@Z.c)
 */

void __fastcall DXGPROCESSVMWP::SetGuestCpuVisibleBuffer(
        DXGVIRTUALMACHINE **this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  DXGVIRTUALMACHINE::SetGuestCpuVisibleBuffer(this[74], a2, a3);
}
