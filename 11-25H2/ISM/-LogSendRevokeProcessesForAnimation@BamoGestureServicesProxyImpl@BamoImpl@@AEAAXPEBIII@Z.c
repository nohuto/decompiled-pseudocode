/*
 * XREFs of ?LogSendRevokeProcessesForAnimation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXPEBIII@Z @ 0x180119E60
 * Callers:
 *     ?RevokeProcessesForAnimation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJPEBIIPEAVBamoDragManagerClientPrincipal@@@Z @ 0x180122D20 (-RevokeProcessesForAnimation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJPEBIIPEAVBamoDragManage.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180001FC4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoGestureServicesProxyImpl::LogSendRevokeProcessesForAnimation(
        BamoImpl::BamoGestureServicesProxyImpl *this,
        const unsigned int *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // rax
  int v7; // edx
  int v8; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v10[4]; // [rsp+48h] [rbp-10h] BYREF
  const unsigned int *v11; // [rsp+68h] [rbp+10h] BYREF

  v11 = a2;
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v6 = *(_QWORD *)(v5 + 16);
    LODWORD(v11) = v4;
    v8 = v3;
    v7 = *(_DWORD *)(v6 + 36);
    v10[0] = *(_DWORD *)(v5 + 24);
    v9 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v2,
      (__int64)&unk_18020F35C,
      v3,
      v4,
      (__int64)v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v11);
  }
}
