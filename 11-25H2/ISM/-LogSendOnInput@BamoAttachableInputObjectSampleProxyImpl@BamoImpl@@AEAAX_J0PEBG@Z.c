/*
 * XREFs of ?LogSendOnInput@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@AEAAX_J0PEBG@Z @ 0x1801193C0
 * Callers:
 *     ?OnInput@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@QEAAJ_J0PEBG@Z @ 0x18011D910 (-OnInput@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@QEAAJ_J0PEBG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x180005EA8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTe.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoAttachableInputObjectSampleProxyImpl::LogSendOnInput(
        BamoImpl::BamoAttachableInputObjectSampleProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  const WCHAR *v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rax
  int v10; // edx
  int v11; // [rsp+50h] [rbp-28h] BYREF
  int v12; // [rsp+54h] [rbp-24h] BYREF
  const WCHAR *v13; // [rsp+58h] [rbp-20h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h] BYREF
  __int64 v15; // [rsp+68h] [rbp-10h] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v9 = *(_QWORD *)(v7 + 16);
    v14 = v5;
    v15 = v8;
    v13 = v6;
    v10 = *(_DWORD *)(v9 + 36);
    v12 = *(_DWORD *)(v7 + 24);
    v11 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
      v4,
      (__int64)&unk_18020C6F4,
      v5,
      (__int64)v6,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v15,
      (__int64)&v14,
      &v13);
  }
}
