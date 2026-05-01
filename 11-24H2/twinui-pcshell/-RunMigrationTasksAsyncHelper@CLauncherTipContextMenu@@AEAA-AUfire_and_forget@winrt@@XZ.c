/*
 * XREFs of ?RunMigrationTasksAsyncHelper@CLauncherTipContextMenu@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1800687C4
 * Callers:
 *     ?RunMigrationTasks@CLauncherTipContextMenu@@UEAAJXZ @ 0x180068790 (-RunMigrationTasks@CLauncherTipContextMenu@@UEAAJXZ.c)
 * Callees:
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_InitCoro$2 @ 0x180284348 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_InitCoro$2.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CLauncherTipContextMenu::RunMigrationTasksAsyncHelper(__int64 a1, __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+58h] [rbp+10h] BYREF

  v4 = operator new(0x20uLL);
  v6 = 0;
  CLauncherTipContextMenu::RunMigrationTasksAsyncHelper__InitCoro_2(&v6, v4, a2, a1);
  return a2;
}
