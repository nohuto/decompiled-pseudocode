/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1401DE154
 * Callers:
 *     ?CallLowLevelHooks@Keyboard@InputTraceLogging@@SAXK@Z @ 0x1401DE0F4 (-CallLowLevelHooks@Keyboard@InputTraceLogging@@SAXK@Z.c)
 *     ?xxxRefreshDisplayOrientation@CRotationMgr@@UEAAXXZ @ 0x140270898 (-xxxRefreshDisplayOrientation@CRotationMgr@@UEAAXXZ.c)
 *     ?xxxSetSlateAutoRotationState@CRotationMgr@@QEAAJH@Z @ 0x140270CC0 (-xxxSetSlateAutoRotationState@CRotationMgr@@QEAAJH@Z.c)
 *     ?ReloadCursorSizes@Cursor@InputTraceLogging@@SAXI_N@Z @ 0x140271488 (-ReloadCursorSizes@Cursor@InputTraceLogging@@SAXI_N@Z.c)
 *     ?UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z @ 0x14027158C (-UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z.c)
 *     ?RapidHpdModeChange@DesktopRecalc@InputTraceLogging@@SAXH@Z @ 0x1402EB41C (-RapidHpdModeChange@DesktopRecalc@InputTraceLogging@@SAXH@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140326F78 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140119524 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v9 = 0;
  v7 = a5;
  v8 = 4;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 3u, &v6);
}
