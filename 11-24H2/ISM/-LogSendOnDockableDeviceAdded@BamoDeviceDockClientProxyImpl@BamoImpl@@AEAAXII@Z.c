/*
 * XREFs of ?LogSendOnDockableDeviceAdded@BamoDeviceDockClientProxyImpl@BamoImpl@@AEAAXII@Z @ 0x180182B00
 * Callers:
 *     ?OnDockableDeviceAdded@BamoDeviceDockClientProxyImpl@BamoImpl@@QEAAJIPEAVBamoDockableDevicePrincipal@@@Z @ 0x180183290 (-OnDockableDeviceAdded@BamoDeviceDockClientProxyImpl@BamoImpl@@QEAAJIPEAVBamoDockableDevicePrinc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180001FC4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoDeviceDockClientProxyImpl::LogSendOnDockableDeviceAdded(
        BamoImpl::BamoDeviceDockClientProxyImpl *this)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // r10d
  __int64 v5; // rax
  int v6; // edx
  int v7; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v9[4]; // [rsp+48h] [rbp-10h] BYREF
  int v10; // [rsp+78h] [rbp+20h] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v5 = *(_QWORD *)(v3 + 16);
    v10 = v2;
    v7 = v4;
    v6 = *(_DWORD *)(v5 + 36);
    v9[0] = *(_DWORD *)(v3 + 24);
    v8 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v1,
      (__int64)&unk_1802243DA,
      v2,
      v3,
      (__int64)v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v10);
  }
}
