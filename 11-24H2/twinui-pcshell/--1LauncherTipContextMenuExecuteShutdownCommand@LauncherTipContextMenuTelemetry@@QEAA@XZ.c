/*
 * XREFs of ??1LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ @ 0x1805FF834
 * Callers:
 *     ?_ExecuteShutdownCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@PEBUtagRECT@@@Z @ 0x1806030E8 (-_ExecuteShutdownCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherT.c)
 *     _CLauncherTipContextMenu::_ExecuteShutdownCommand_::_1_::dtor$1 @ 0x1806FF176 (_CLauncherTipContextMenu--_ExecuteShutdownCommand_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180233824 (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand::~LauncherTipContextMenuExecuteShutdownCommand(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
