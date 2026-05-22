/*
 * XREFs of ?LogSendSendHapticFeedbackForDuration@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@AEAAXGMI@Z @ 0x18011BC88
 * Callers:
 *     ?SendHapticFeedbackForDuration@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJGMI@Z @ 0x180124CC0 (-SendHapticFeedbackForDuration@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJGMI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@33@Z @ 0x180005FD0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U1@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoSimpleHapticsControllerProxyImpl::LogSendSendHapticFeedbackForDuration(
        BamoImpl::BamoSimpleHapticsControllerProxyImpl *this,
        __int64 a2,
        float a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int16 v6; // r10
  __int64 v7; // rax
  int v8; // edx
  _WORD v9[2]; // [rsp+50h] [rbp-28h] BYREF
  int v10; // [rsp+54h] [rbp-24h] BYREF
  float v11; // [rsp+58h] [rbp-20h] BYREF
  int v12; // [rsp+5Ch] [rbp-1Ch] BYREF
  _DWORD v13[6]; // [rsp+60h] [rbp-18h] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v7 = *(_QWORD *)(v4 + 16);
    v11 = a3;
    v10 = v5;
    v9[0] = v6;
    v8 = *(_DWORD *)(v7 + 36);
    v13[0] = *(_DWORD *)(v4 + 24);
    v12 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v3,
      (__int64)&unk_18021979F,
      v4,
      v5,
      (__int64)v13,
      (__int64)&v12,
      (__int64)v9,
      (__int64)&v11,
      (__int64)&v10);
  }
}
