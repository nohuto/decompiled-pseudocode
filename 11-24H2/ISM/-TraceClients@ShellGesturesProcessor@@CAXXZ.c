/*
 * XREFs of ?TraceClients@ShellGesturesProcessor@@CAXXZ @ 0x18008A514
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800886F0 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z @ 0x180159C88 (-ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18000D544 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180037A08 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ @ 0x180077120 (-GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ.c)
 *     ?IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z @ 0x180079664 (-IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z.c)
 *     ?IsDetachedFromTree@ShellGesturesClientProxy@@QEAA_NXZ @ 0x180080A80 (-IsDetachedFromTree@ShellGesturesClientProxy@@QEAA_NXZ.c)
 *     ?GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ @ 0x1800815C0 (-GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x18008A664 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     ?IsTestSigningEnabled@KernelContextProvider@@SA_NXZ @ 0x18010A7E4 (-IsTestSigningEnabled@KernelContextProvider@@SA_NXZ.c)
 *     ??$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x180158D94 (--$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 *     ?Client@ShellGestures@InputTraceLogging@@SAXK_N000K00@Z @ 0x180159324 (-Client@ShellGestures@InputTraceLogging@@SAXK_N000K00@Z.c)
 *     ?GetTouchpadSupportedGestures@BamoShellGesturesClientProxy@@UEAA?AW4TouchpadGlobalGestureKinds@Input@Internal@UI@Windows@@XZ @ 0x180159970 (-GetTouchpadSupportedGestures@BamoShellGesturesClientProxy@@UEAA-AW4TouchpadGlobalGestureKinds@I.c)
 */

void ShellGesturesProcessor::TraceClients(void)
{
  KernelContextProvider *Instance; // rbx
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  _QWORD *v3; // r15
  bool IsTestSigningEnabled; // r13
  char IsDesktopAllowed; // r12
  unsigned int TouchpadSupportedGestures; // r14d
  bool GesturesEnabled; // bp
  bool TouchEnabled; // si
  char v9; // di
  char IsDetachedFromTree; // bl
  unsigned int ProcessId; // eax
  unsigned __int64 v12; // [rsp+80h] [rbp+8h]
  __int64 v13; // [rsp+88h] [rbp+10h]
  KernelContextProvider *v14; // [rsp+90h] [rbp+18h]

  if ( (unsigned __int8)InputTraceLogging::Enabled(512LL, 0LL) )
  {
    Instance = KernelContextProvider::GetInstance();
    v14 = Instance;
    v1 = qword_180250F08;
    v2 = qword_180250F08 + qword_180250F10;
    v13 = qword_180250F08 + qword_180250F10;
    while ( 1 )
    {
      v12 = v1;
      if ( v1 == v2 )
        break;
      v3 = *(_QWORD **)(*((_QWORD *)Src + ((qword_180250F00 - 1) & (v1 >> 1))) + 8 * (v1 & 1));
      IsTestSigningEnabled = KernelContextProvider::IsTestSigningEnabled();
      IsDesktopAllowed = KernelContextProvider::IsDesktopAllowed(Instance, v3[22]);
      TouchpadSupportedGestures = BamoShellGesturesClientProxy::GetTouchpadSupportedGestures(v3 + 1);
      GesturesEnabled = BamoMagnifierControllerProxy::GetGesturesEnabled((BamoMagnifierControllerProxy *)(v3 + 1));
      TouchEnabled = BamoShellGesturesClientProxy::GetTouchEnabled((BamoShellGesturesClientProxy *)(v3 + 1));
      v9 = IsShellClient<ShellGesturesClientProxy>(v3);
      IsDetachedFromTree = ShellGesturesClientProxy::IsDetachedFromTree((ShellGesturesClientProxy *)v3);
      ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(v3[4] + 16LL));
      InputTraceLogging::ShellGestures::Client(
        ProcessId,
        IsDetachedFromTree,
        v9,
        TouchEnabled,
        GesturesEnabled,
        TouchpadSupportedGestures,
        IsDesktopAllowed,
        IsTestSigningEnabled);
      v2 = v13;
      v1 = v12 + 1;
      Instance = v14;
    }
  }
}
