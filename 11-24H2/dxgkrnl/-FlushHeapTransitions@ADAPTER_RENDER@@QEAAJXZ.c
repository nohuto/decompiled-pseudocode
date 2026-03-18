/*
 * XREFs of ?FlushHeapTransitions@ADAPTER_RENDER@@QEAAJXZ @ 0x1403AE3D4
 * Callers:
 *     ?VmBusFlushHeapTransitions@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140393BC0 (-VmBusFlushHeapTransitions@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1403AE168 (-NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     DxgkFlushHeapTransitions @ 0x1403AE250 (DxgkFlushHeapTransitions.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::FlushHeapTransitions(ADAPTER_RENDER *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 1040LL))(*((_QWORD *)this + 96));
}
