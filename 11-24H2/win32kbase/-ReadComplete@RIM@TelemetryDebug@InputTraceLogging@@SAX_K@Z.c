/*
 * XREFs of ?ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x14005D6CC
 * Callers:
 *     rimSignalReadComplete @ 0x14005D0F0 (rimSignalReadComplete.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400F38B0 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall InputTraceLogging::TelemetryDebug::RIM::ReadComplete(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // r8d
  int v4; // r9d
  void *v5; // rdx
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_DWORD *)(W32GetUserSessionState(a1) + 19504)
    && (v6 = *(_DWORD *)(W32GetUserSessionState(v2) + 19508), (unsigned int)W32GetCurrentWin32kSessionId() == v6)
    && !*(_DWORD *)(W32GetUserSessionState(v7) + 19560) )
  {
    if ( (unsigned int)dword_14029AE30 > 7 && (unsigned __int8)tlgKeywordOn(&dword_14029AE30, 0x10000LL) )
    {
      v5 = &unk_14027980F;
LABEL_12:
      v8 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (unsigned int)&dword_14029AE30,
        (_DWORD)v5,
        v3,
        v4,
        (__int64)&v8);
    }
  }
  else if ( (unsigned int)dword_14029AE30 > 7 && (unsigned __int8)tlgKeywordOn(&dword_14029AE30, 0x10000LL) )
  {
    v5 = &unk_14027978E;
    goto LABEL_12;
  }
}
