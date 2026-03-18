/*
 * XREFs of ?SetGuestCpuVisibleBuffer@DXGPROCESSVMWP@@QEAAX_K0@Z @ 0x14007B38C
 * Callers:
 *     ?VmBusSetIoSpaceRegion@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402306E0 (-VmBusSetIoSpaceRegion@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?SetGuestCpuVisibleBuffer@DXGVIRTUALMACHINE@@QEAAX_K0@Z @ 0x14007B3A8 (-SetGuestCpuVisibleBuffer@DXGVIRTUALMACHINE@@QEAAX_K0@Z.c)
 */

void __fastcall DXGPROCESSVMWP::SetGuestCpuVisibleBuffer(
        DXGVIRTUALMACHINE **this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  DXGVIRTUALMACHINE::SetGuestCpuVisibleBuffer(this[74], a2, a3);
}
