/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18000381C
 * Callers:
 *     ?InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z @ 0x1800D3A48 (-InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z.c)
 *     ?LogOnInterfacePathChanging@BamoDockableDeviceProxy@@AEAAXPEBG@Z @ 0x180117310 (-LogOnInterfacePathChanging@BamoDockableDeviceProxy@@AEAAXPEBG@Z.c)
 *     ?LogOnPanelIdChanging@BamoDockDeviceProxy@@AEAAXPEBG@Z @ 0x180117744 (-LogOnPanelIdChanging@BamoDockDeviceProxy@@AEAAXPEBG@Z.c)
 *     ?LogSetInterfacePath@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEBG@Z @ 0x18017DE88 (-LogSetInterfacePath@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEBG@Z.c)
 *     ?LogSetPanelId@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEBG@Z @ 0x18017DEF8 (-LogSetPanelId@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEBG@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const WCHAR **a6)
{
  const WCHAR *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  _BYTE v11[32]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+58h] [rbp-30h]
  const WCHAR *v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+6Ch] [rbp-1Ch]

  v7 = *a6;
  if ( *a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v7 = &WindowName;
    v9 = 2;
  }
  v15 = v9;
  v14 = v7;
  v12 = a5;
  v13 = 4LL;
  v16 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 4, v11);
}
