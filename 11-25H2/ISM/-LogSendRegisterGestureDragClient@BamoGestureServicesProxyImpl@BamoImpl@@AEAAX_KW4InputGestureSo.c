/*
 * XREFs of ?LogSendRegisterGestureDragClient@BamoGestureServicesProxyImpl@BamoImpl@@AEAAX_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@4567@I@Z @ 0x1801196F0
 * Callers:
 *     ?RegisterGestureDragClient@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJ_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@4567@PEAVBamoDragManagerClientPrincipal@@@Z @ 0x1801212B8 (-RegisterGestureDragClient@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJ_KW4InputGestureSourceTyp.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x180005DF4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoGestureServicesProxyImpl::LogSendRegisterGestureDragClient(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // rax
  int v11; // ecx
  int v12; // [rsp+50h] [rbp-20h] BYREF
  int v13; // [rsp+54h] [rbp-1Ch] BYREF
  int v14; // [rsp+58h] [rbp-18h] BYREF
  int v15; // [rsp+5Ch] [rbp-14h] BYREF
  int v16; // [rsp+60h] [rbp-10h] BYREF
  __int64 v17; // [rsp+68h] [rbp-8h] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v12 = a5;
    v10 = *(_QWORD *)(v9 + 16);
    v13 = v7;
    v14 = v6;
    v17 = a2;
    v11 = *(_DWORD *)(v10 + 36);
    v16 = *(_DWORD *)(v9 + 24);
    v15 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      (__int64)&unk_18020ED54,
      v6,
      v7,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v17,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12);
  }
}
