/*
 * XREFs of ?HandleConnectIfNewPrimaryArrives@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801FF938
 * Callers:
 *     s_HandleConnectIfNewPrimaryArrives @ 0x180462570 (s_HandleConnectIfNewPrimaryArrives.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCurrentMonitorAlsoPrimary@ImmersiveMonitorHelper@@AEAA_NXZ @ 0x1801FFA14 (-IsCurrentMonitorAlsoPrimary@ImmersiveMonitorHelper@@AEAA_NXZ.c)
 *     ?MoveStartToMonitorWithoutHiding@ImmersiveMonitorHelper@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180462534 (-MoveStartToMonitorWithoutHiding@ImmersiveMonitorHelper@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall ImmersiveMonitorHelper::HandleConnectIfNewPrimaryArrives(
        ImmersiveMonitorHelper *a1,
        struct IImmersiveMonitor *a2,
        char a3)
{
  __int64 v6; // rax
  char v7; // bl
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v13; // [rsp+40h] [rbp+18h] BYREF
  int v14; // [rsp+48h] [rbp+20h] BYREF

  if ( (a3 & 2) == 0 )
    return 0;
  v6 = *(_QWORD *)a2;
  v7 = 0;
  v13 = 0;
  v8 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(v6 + 48))(a2, &v13);
  if ( v8 < 0 )
  {
    v9 = 410LL;
LABEL_8:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v8);
    return v7;
  }
  if ( v13 )
  {
    v10 = *(_QWORD *)a2;
    v14 = 0;
    v8 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(v10 + 56))(a2, &v14);
    if ( v8 >= 0 )
    {
      if ( v14 && !ImmersiveMonitorHelper::IsCurrentMonitorAlsoPrimary(a1) )
      {
        v11 = ImmersiveMonitorHelper::MoveStartToMonitorWithoutHiding(a1, a2);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1A3,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
            (const char *)(unsigned int)v11);
        return 1;
      }
      return v7;
    }
    v9 = 413LL;
    goto LABEL_8;
  }
  return v7;
}
