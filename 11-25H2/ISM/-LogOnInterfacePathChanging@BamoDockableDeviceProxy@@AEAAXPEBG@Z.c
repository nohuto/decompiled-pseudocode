/*
 * XREFs of ?LogOnInterfacePathChanging@BamoDockableDeviceProxy@@AEAAXPEBG@Z @ 0x180117310
 * Callers:
 *     ?UpdateInterfacePath@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z @ 0x1801287A8 (-UpdateInterfacePath@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18000381C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void __fastcall BamoDockableDeviceProxy::LogOnInterfacePathChanging(
        BamoDockableDeviceProxy *this,
        const unsigned __int16 *a2)
{
  __int64 v2; // rcx
  const WCHAR *v3; // r8
  __int64 v4; // r9
  int v5; // [rsp+50h] [rbp+18h] BYREF
  const WCHAR *v6; // [rsp+58h] [rbp+20h] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v5 = *(_DWORD *)(v4 + 40);
    v6 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v2,
      (__int64)&unk_180210A2D,
      (__int64)v3,
      v4,
      (__int64)&v5,
      &v6);
  }
}
