/*
 * XREFs of ?UpdateMMCSSTask@DWM@KST@InputTraceLogging@@SAX_N@Z @ 0x1800FD89C
 * Callers:
 *     ?UpdateMMCSSTask@CKst@@EEAAJXZ @ 0x1800FD830 (-UpdateMMCSSTask@CKst@@EEAAJXZ.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180137874 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180228DA0 (--$Write@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall InputTraceLogging::KST::DWM::UpdateMMCSSTask(char a1)
{
  const struct _tlgProvider_t *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  char v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u )
  {
    if ( (unsigned __int8)tlgKeywordOn(v2, 2LL, v3, v4) )
    {
      v8 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>>(
        v5,
        (unsigned int)&unk_1803DAD4F,
        v6,
        v7,
        (__int64)&v8);
    }
  }
}
