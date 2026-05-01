/*
 * XREFs of ??0TaskScheduler@shell@@QEAA@PEAUIShellTaskScheduler@@AEBU_GUID@@@Z @ 0x180238BEC
 * Callers:
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1801EB6A8 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 *     ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x180602BD8 (-_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

shell::TaskScheduler *__fastcall shell::TaskScheduler::TaskScheduler(
        shell::TaskScheduler *this,
        struct IShellTaskScheduler *a2,
        const struct _GUID *a3)
{
  __int128 v3; // xmm0

  v3 = (__int128)*a3;
  *((_QWORD *)this + 2) = a2;
  *(_OWORD *)this = v3;
  ((void (__fastcall *)(struct IShellTaskScheduler *))a2->lpVtbl->AddRef)(a2);
  return this;
}
