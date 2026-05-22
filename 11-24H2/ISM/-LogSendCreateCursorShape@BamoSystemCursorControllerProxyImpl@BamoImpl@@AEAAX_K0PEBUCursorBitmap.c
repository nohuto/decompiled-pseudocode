/*
 * XREFs of ?LogSendCreateCursorShape@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAX_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x18011AC54
 * Callers:
 *     ?CreateCursorShape@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x180115C4C (-CreateCursorShape@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K0PEBUCursorBitmapDataHea.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@433@Z @ 0x1800054F4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoSystemCursorControllerProxyImpl::LogSendCreateCursorShape(
        BamoImpl::BamoSystemCursorControllerProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const struct CursorBitmapDataHeader *a4,
        unsigned int a5,
        const unsigned __int8 *a6,
        unsigned int a7)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rax
  int v12; // ecx
  int v13; // [rsp+50h] [rbp-20h] BYREF
  int v14; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h] BYREF
  const struct CursorBitmapDataHeader *v17; // [rsp+98h] [rbp+28h] BYREF

  v17 = a4;
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    LODWORD(v17) = a7;
    LODWORD(a6) = a5;
    v11 = *(_QWORD *)(v9 + 16);
    v15 = v7;
    v16 = v10;
    v12 = *(_DWORD *)(v11 + 36);
    v14 = *(_DWORD *)(v9 + 24);
    v13 = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      (__int64)&unk_180217FB5,
      v7,
      v8,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&a6,
      (__int64)&v17);
  }
}
