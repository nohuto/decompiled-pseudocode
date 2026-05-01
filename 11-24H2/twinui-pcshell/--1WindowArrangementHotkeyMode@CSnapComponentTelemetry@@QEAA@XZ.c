/*
 * XREFs of ??1WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA@XZ @ 0x1805AD514
 * Callers:
 *     ??1HotkeyHandler@@UEAA@XZ @ 0x1805AD41C (--1HotkeyHandler@@UEAA@XZ.c)
 *     ??4WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805AD598 (--4WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AE210 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 *     ?_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805B01E0 (-_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@.c)
 *     _HotkeyHandler::HandleHotkey_::_1_::dtor$10 @ 0x1806F7278 (_HotkeyHandler--HandleHotkey_--_1_--dtor$10.c)
 *     _HotkeyHandler::HandleHotkey_::_1_::dtor$12 @ 0x1806F728A (_HotkeyHandler--HandleHotkey_--_1_--dtor$12.c)
 *     _HotkeyHandler::_OnHotkeyModeEnd_::_1_::dtor$0 @ 0x1806F72D2 (_HotkeyHandler--_OnHotkeyModeEnd_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18020087C (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode(
        CSnapComponentTelemetry::WindowArrangementHotkeyMode *this)
{
  *(_QWORD *)this = &CSnapComponentTelemetry::WindowArrangementHotkeyMode::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
