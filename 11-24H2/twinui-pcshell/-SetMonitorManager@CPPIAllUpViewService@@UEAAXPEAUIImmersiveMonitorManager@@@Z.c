/*
 * XREFs of ?SetMonitorManager@CPPIAllUpViewService@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x1802317E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPPIAllUpViewService::SetMonitorManager(
        CPPIAllUpViewService *this,
        struct IImmersiveMonitorManager *a2)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 4, (__int64)a2);
}
