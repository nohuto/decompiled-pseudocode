/*
 * XREFs of ?OnHandleDeviceStateChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000A980
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x18000A9BC (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CMonitorManager::OnHandleDeviceStateChanged(
        PTP_CALLBACK_INSTANCE Instance,
        CMonitorManager *Context,
        PTP_WORK Work)
{
  CMonitorManager::ProcessDeviceStateChanged(Context);
  if ( Context )
    (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)Context + 16LL))(Context);
}
