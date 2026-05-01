/*
 * XREFs of ?unsubscribe_from_services@RdpShellExtensionHost@@UEAAXPEAUIServiceProvider@@@Z @ 0x180674A80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@RdpShellExtensionHostTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180674484 (-Provider@RdpShellExtensionHostTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?StopAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ @ 0x1806744A4 (-StopAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ.c)
 */

void __fastcall RdpShellExtensionHost::unsubscribe_from_services(
        RdpShellExtensionHost *this,
        struct IServiceProvider *a2,
        __int64 a3,
        const char *a4)
{
  int v4; // eax
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = RdpShellExtensionHost::StopAllRdpShellExtensions(this, (__int64)a2, a3, a4);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x25,
      (int)"pcshell\\twinui\\rdpshellextensionhost\\lib\\rdpshellextensionhost.cpp",
      (const char *)(unsigned int)v4);
  v6 = RdpShellExtensionHostTelemetry::Provider(v5);
  if ( *(_DWORD *)v6 > 4u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v6,
      byte_18081D136,
      0LL);
}
