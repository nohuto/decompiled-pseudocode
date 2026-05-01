/*
 * XREFs of ??1TaskScheduler@shell@@QEAA@XZ @ 0x1805FF860
 * Callers:
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1801EB6A8 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 *     ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x180602BD8 (-_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z.c)
 *     _CLauncherTipContextMenu::_ExecuteCommand_::_1_::dtor$8 @ 0x1806D93CF (_CLauncherTipContextMenu--_ExecuteCommand_--_1_--dtor$8.c)
 *     _CLauncherTipContextMenu::_EnsureMenu_::_1_::dtor$0 @ 0x1806FF140 (_CLauncherTipContextMenu--_EnsureMenu_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall shell::TaskScheduler::~TaskScheduler(shell::TaskScheduler *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
}
