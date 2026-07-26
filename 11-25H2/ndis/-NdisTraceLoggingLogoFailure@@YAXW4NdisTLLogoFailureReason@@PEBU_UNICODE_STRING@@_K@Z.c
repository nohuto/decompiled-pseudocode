/*
 * XREFs of ?NdisTraceLoggingLogoFailure@@YAXW4NdisTLLogoFailureReason@@PEBU_UNICODE_STRING@@_K@Z @ 0x14014A120
 * Callers:
 *     ?ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEBU_UNICODE_STRING@@PEAK22@Z @ 0x140175650 (-ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400029A0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$07@.c)
 *     _tlgKeywordOn @ 0x14008DAF0 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingLogoFailure(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned __int16 *v3; // r9
  unsigned __int16 *v4; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+60h] [rbp+8h] BYREF
  __int64 v6; // [rsp+78h] [rbp+20h] BYREF

  v5 = a1;
  if ( (unsigned int)dword_1401247E8 > 5 && tlgKeywordOn((__int64)&dword_1401247E8, 0x400000000000LL) )
  {
    v6 = v2;
    v4 = v3;
    v5 = 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>>(
      v1,
      (__int64)&unk_1401099D8,
      v2,
      (__int64)v3,
      (__int64)&v5,
      &v4,
      (__int64)&v6);
  }
}
