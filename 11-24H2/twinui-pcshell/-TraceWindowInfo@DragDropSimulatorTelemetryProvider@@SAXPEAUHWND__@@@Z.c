/*
 * XREFs of ?TraceWindowInfo@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@@Z @ 0x18057BC00
 * Callers:
 *     ?GetDropEndPointByTraversingParentChain@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@PEAUHWND__@@@std@@PEAUHWND__@@@Z @ 0x180579C20 (-GetDropEndPointByTraversingParentChain@DragDropSimulatorComponent@implementation@DragDropSimula.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@4@Z @ 0x18000E228 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?Provider@DragDropSimulatorTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18057AC6C (-Provider@DragDropSimulatorTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall DragDropSimulatorTelemetryProvider::TraceWindowInfo(HWND hWnd)
{
  __int64 v2; // rcx
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  WCHAR *v6; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR *v7; // [rsp+48h] [rbp-B8h] BYREF
  HWND v8; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR String[264]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR ClassName[264]; // [rsp+270h] [rbp+170h] BYREF

  memset_0(ClassName, 0, 0x20AuLL);
  GetClassNameW(hWnd, ClassName, 260);
  ClassName[260] = 0;
  memset_0(String, 0, 0x20AuLL);
  GetWindowTextW(hWnd, String, 260);
  String[260] = 0;
  v3 = DragDropSimulatorTraceLogging::Provider(v2);
  if ( *(_DWORD *)v3 > 4u )
  {
    v8 = hWnd;
    v6 = String;
    v9 = 0x2000000LL;
    v7 = ClassName;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      (__int64)v3,
      (__int64)&unk_18081187D,
      v4,
      v5,
      (__int64)&v9,
      (__int64)&v8,
      &v7,
      &v6);
  }
}
