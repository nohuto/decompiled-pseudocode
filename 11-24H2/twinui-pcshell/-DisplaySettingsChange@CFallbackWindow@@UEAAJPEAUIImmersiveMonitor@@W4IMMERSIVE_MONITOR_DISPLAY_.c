/*
 * XREFs of ?DisplaySettingsChange@CFallbackWindow@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18022CD10
 * Callers:
 *     <none>
 * Callees:
 *     ?_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x180206430 (-_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFallbackWindow::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 1) != 0 )
  {
    v5 = *(_QWORD *)a2;
    v6 = *(_QWORD *)(a1 + 40);
    v8 = 0;
    if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, __int64, int *))(v5 + 96))(a2, v6, &v8) >= 0 )
    {
      if ( v8 )
        CFallbackWindow::_SizeWindow((HWND *)(a1 - 80), a2);
    }
  }
  return 0LL;
}
