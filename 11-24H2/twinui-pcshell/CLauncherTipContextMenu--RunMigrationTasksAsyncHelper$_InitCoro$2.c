/*
 * XREFs of CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_InitCoro$2 @ 0x180284348
 * Callers:
 *     ?RunMigrationTasksAsyncHelper@CLauncherTipContextMenu@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1800687C4 (-RunMigrationTasksAsyncHelper@CLauncherTipContextMenu@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 * Callees:
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x1802843A0 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_ResumeCoro$1.c)
 */

__int64 __fastcall CLauncherTipContextMenu::RunMigrationTasksAsyncHelper__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 17) = a4;
  *(_QWORD *)a2 = CLauncherTipContextMenu::RunMigrationTasksAsyncHelper__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 16) = 0;
  return CLauncherTipContextMenu::RunMigrationTasksAsyncHelper__ResumeCoro_1(a2);
}
