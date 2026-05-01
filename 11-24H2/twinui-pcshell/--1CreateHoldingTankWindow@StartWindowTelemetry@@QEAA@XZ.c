/*
 * XREFs of ??1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x180462824
 * Callers:
 *     ??0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x1804625E8 (--0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z.c)
 *     _FocusHoldingTank::FocusHoldingTank_::_1_::dtor$1 @ 0x1806ECD34 (_FocusHoldingTank--FocusHoldingTank_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E8D88 (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall StartWindowTelemetry::CreateHoldingTankWindow::~CreateHoldingTankWindow(
        StartWindowTelemetry::CreateHoldingTankWindow *this)
{
  *(_QWORD *)this = &StartWindowTelemetry::CreateHoldingTankWindow::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
