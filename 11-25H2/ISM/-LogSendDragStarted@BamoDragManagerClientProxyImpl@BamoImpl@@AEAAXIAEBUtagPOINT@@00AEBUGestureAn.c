/*
 * XREFs of ?LogSendDragStarted@BamoDragManagerClientProxyImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2W4InputType@Input@Internal@UI@7@22W4GestureProcessorType@@@Z @ 0x180143640
 * Callers:
 *     ?DragStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2W4InputType@Input@Internal@UI@7@22W4GestureProcessorType@@@Z @ 0x180142CB0 (-DragStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUGestureAnimation.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@U1@U2@U1@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@343443@Z @ 0x180006E94 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@U1@U2@U1@U2@U2@U1@@-$_tlgWriteT.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void BamoImpl::BamoDragManagerClientProxyImpl::LogSendDragStarted(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // r10d
  __int64 v5; // rax
  int v6; // ecx
  int v7; // [rsp+70h] [rbp-21h] BYREF
  int v8; // [rsp+74h] [rbp-1Dh] BYREF
  __int64 v9; // [rsp+78h] [rbp-19h] BYREF
  __int64 v10; // [rsp+80h] [rbp-11h] BYREF
  __int64 v11; // [rsp+88h] [rbp-9h] BYREF
  __int64 v12; // [rsp+90h] [rbp-1h] BYREF
  __int64 v13; // [rsp+C0h] [rbp+2Fh] BYREF
  va_list va; // [rsp+C0h] [rbp+2Fh]
  __int64 v15; // [rsp+C8h] [rbp+37h] BYREF
  va_list va1; // [rsp+C8h] [rbp+37h]
  __int64 v17; // [rsp+D0h] [rbp+3Fh] BYREF
  va_list va2; // [rsp+D0h] [rbp+3Fh]
  __int64 v19; // [rsp+D8h] [rbp+47h] BYREF
  va_list va3; // [rsp+D8h] [rbp+47h]
  __int64 v21; // [rsp+E0h] [rbp+4Fh]
  __int64 v22; // [rsp+E8h] [rbp+57h]
  __int64 v23; // [rsp+F0h] [rbp+5Fh]
  __int64 v24; // [rsp+F8h] [rbp+67h]
  __int64 v25; // [rsp+100h] [rbp+6Fh]
  __int64 v26; // [rsp+108h] [rbp+77h]
  __int64 v27; // [rsp+110h] [rbp+7Fh]
  va_list va4; // [rsp+118h] [rbp+87h] BYREF

  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v19 = va_arg(va4, _QWORD);
  v21 = va_arg(va4, _QWORD);
  v22 = va_arg(va4, _QWORD);
  v23 = va_arg(va4, _QWORD);
  v24 = va_arg(va4, _QWORD);
  v25 = va_arg(va4, _QWORD);
  v26 = va_arg(va4, _QWORD);
  v27 = va_arg(va4, _QWORD);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    LODWORD(v15) = v27;
    v9 = v26;
    v10 = v25;
    LODWORD(v13) = v24;
    v11 = v23;
    LODWORD(v17) = v22;
    v12 = v21;
    v5 = *(_QWORD *)(v3 + 16);
    LODWORD(v19) = v4;
    v6 = *(_DWORD *)(v5 + 36);
    v8 = *(_DWORD *)(v3 + 24);
    v7 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v2,
      (__int64)&unk_180215DEB,
      v2,
      v3,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)va3,
      (__int64)&v12,
      (__int64)va2,
      (__int64)&v11,
      (__int64)va,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)va1);
  }
}
