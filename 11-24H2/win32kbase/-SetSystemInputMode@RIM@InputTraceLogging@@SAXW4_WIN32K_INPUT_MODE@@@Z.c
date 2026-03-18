/*
 * XREFs of ?SetSystemInputMode@RIM@InputTraceLogging@@SAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14011D968
 * Callers:
 *     RIMSetSystemInputMode @ 0x14011D91C (RIMSetSystemInputMode.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1400B1ED0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z @ 0x1400D69B8 (-InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z.c)
 */

void InputTraceLogging::RIM::SetSystemInputMode()
{
  int v0; // r8d
  const char *v1; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, 256LL) )
  {
    v1 = InputTraceLogging::InputModeToString(v0);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)&dword_14029AE30,
      byte_140277F60,
      0LL,
      0LL,
      (void **)&v1);
  }
}
