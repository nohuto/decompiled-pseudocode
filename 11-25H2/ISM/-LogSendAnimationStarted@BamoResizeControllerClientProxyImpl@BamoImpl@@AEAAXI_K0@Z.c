/*
 * XREFs of ?LogSendAnimationStarted@BamoResizeControllerClientProxyImpl@BamoImpl@@AEAAXI_K0@Z @ 0x180118B08
 * Callers:
 *     ?AnimationStarted@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJI_K0@Z @ 0x1801130FC (-AnimationStarted@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJI_K0@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180005B34 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoResizeControllerClientProxyImpl::LogSendAnimationStarted(
        BamoImpl::BamoResizeControllerClientProxyImpl *this)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // r11d
  __int64 v6; // rax
  int v7; // edx
  int v8; // [rsp+50h] [rbp-28h] BYREF
  int v9; // [rsp+54h] [rbp-24h] BYREF
  int v10; // [rsp+58h] [rbp-20h] BYREF
  __int64 v11; // [rsp+60h] [rbp-18h] BYREF
  __int64 v12; // [rsp+68h] [rbp-10h] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v6 = *(_QWORD *)(v4 + 16);
    v11 = v3;
    v12 = v2;
    v8 = v5;
    v7 = *(_DWORD *)(v6 + 36);
    v10 = *(_DWORD *)(v4 + 24);
    v9 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v1,
      (__int64)&unk_18020C7E1,
      v2,
      v3,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v12,
      (__int64)&v11);
  }
}
