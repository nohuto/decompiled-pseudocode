/*
 * XREFs of ?GetMonitorDisplayInfo@TouchEdgeGripperWindow@@AEAAJPEAUIImmersiveMonitor@@PEAUCRect@Geometry@@PEAI2@Z @ 0x180227DE8
 * Callers:
 *     ??0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@@Z @ 0x180597C6C (--0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV-$function@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806846FC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchEdgeGripperWindow::GetMonitorDisplayInfo(
        TouchEdgeGripperWindow *this,
        struct IImmersiveMonitor *a2,
        struct Geometry::CRect *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int v7; // ebx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v7 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E3,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperwindow.cpp",
      (const char *)0x80004003LL);
    MicrosoftTelemetryAssertTriggeredNoArgs();
    return v7;
  }
  v9 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct Geometry::CRect *))(*(_QWORD *)a2 + 72LL))(a2, a3);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned int *, unsigned int *))(*(_QWORD *)a2 + 112LL))(
            a2,
            a4,
            a5);
    v7 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E5,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperwindow.cpp",
        (const char *)(unsigned int)v11);
      MicrosoftTelemetryAssertTriggeredNoArgs();
      return v7;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E4,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperwindow.cpp",
      (const char *)(unsigned int)v9);
    MicrosoftTelemetryAssertTriggeredNoArgs();
    return v10;
  }
}
