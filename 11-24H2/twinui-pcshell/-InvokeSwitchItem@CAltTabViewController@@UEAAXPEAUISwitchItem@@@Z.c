/*
 * XREFs of ?InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804B8AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1804C64A0 (-InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAltTabViewController::InvokeSwitchItem(CAltTabViewController *this, struct ISwitchItem *a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14));
  CMultitaskingViewControllerBase::InvokeSwitchItem(this, a2);
  ViewHostTelemetry::SendAppSwitchTelemetry(a2, 1LL);
}
