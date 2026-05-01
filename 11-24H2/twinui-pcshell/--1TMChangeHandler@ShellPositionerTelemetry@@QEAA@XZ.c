/*
 * XREFs of ??1TMChangeHandler@ShellPositionerTelemetry@@QEAA@XZ @ 0x1804EBE7C
 * Callers:
 *     ?TabletModeChanged@ShellPositionerManager@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x1804EE450 (-TabletModeChanged@ShellPositionerManager@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 *     _ShellPositionerManager::TabletModeChanged_::_1_::dtor$0 @ 0x1806F0315 (_ShellPositionerManager--TabletModeChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801204E0 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall ShellPositionerTelemetry::TMChangeHandler::~TMChangeHandler(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&ShellPositionerTelemetry::TMChangeHandler::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
