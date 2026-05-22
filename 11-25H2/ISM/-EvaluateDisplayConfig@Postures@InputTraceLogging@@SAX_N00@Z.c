/*
 * XREFs of ?EvaluateDisplayConfig@Postures@InputTraceLogging@@SAX_N00@Z @ 0x180111918
 * Callers:
 *     ?IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ @ 0x180112164 (-IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@33@Z @ 0x1800026E4 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AA20 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Postures::EvaluateDisplayConfig(char a1, char a2, char a3)
{
  const struct _tlgProvider_t *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // [rsp+40h] [rbp-18h] BYREF
  _BYTE v11[23]; // [rsp+41h] [rbp-17h] BYREF
  char v12; // [rsp+78h] [rbp+20h] BYREF

  v6 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v6 > 4u && tlgKeywordOn((__int64)v6, 2LL) )
  {
    v12 = a3;
    v10 = a2;
    v11[0] = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v7,
      (__int64)&unk_18020BE68,
      v8,
      v9,
      (__int64)v11,
      (__int64)&v10,
      (__int64)&v12);
  }
}
