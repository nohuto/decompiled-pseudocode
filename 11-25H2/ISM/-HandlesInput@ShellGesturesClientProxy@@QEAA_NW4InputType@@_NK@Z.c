/*
 * XREFs of ?HandlesInput@ShellGesturesClientProxy@@QEAA_NW4InputType@@_NK@Z @ 0x180159DC4
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180087F00 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z @ 0x180158118 (-ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ @ 0x180077490 (-GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ.c)
 *     ?GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ @ 0x180081520 (-GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18008A99C (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800F1618 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?GetTouchpadSupportedGestures@BamoShellGesturesClientProxy@@UEAA?AW4TouchpadGlobalGestureKinds@Input@Internal@UI@Windows@@XZ @ 0x180157E00 (-GetTouchpadSupportedGestures@BamoShellGesturesClientProxy@@UEAA-AW4TouchpadGlobalGestureKinds@I.c)
 */

bool __fastcall ShellGesturesClientProxy::HandlesInput(__int64 a1, int a2, char a3, unsigned int a4)
{
  char v5; // di
  int v6; // ebx
  __int64 v7; // rsi
  const char *v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (a2 & 8) != 0 )
    return BamoShellGesturesClientProxy::GetTouchEnabled((BamoShellGesturesClientProxy *)(a1 + 8));
  if ( (a2 & 0x1000000) == 0 )
    return 0;
  if ( !a3 )
    return BamoMagnifierControllerProxy::GetGesturesEnabled((BamoMagnifierControllerProxy *)(a1 + 8));
  v5 = 1;
  if ( a4 == 3 )
  {
    v6 = 1;
  }
  else if ( a4 == 4 )
  {
    v6 = 2;
  }
  else
  {
    if ( a4 <= 4 )
    {
      MicrosoftTelemetryAssertTriggeredArgs(a1, 131074, 62);
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0x3F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor\\shell"
             "gesturesclientproxy.cpp",
        "Shell gesture with one or two contacts",
        v8);
    }
    v6 = 4;
  }
  v7 = a1 + 8;
  if ( !BamoMagnifierControllerProxy::GetGesturesEnabled((BamoMagnifierControllerProxy *)(a1 + 8))
    || ((unsigned int)BamoShellGesturesClientProxy::GetTouchpadSupportedGestures(v7) & v6) == 0 )
  {
    return 0;
  }
  return v5;
}
