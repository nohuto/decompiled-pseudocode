/*
 * XREFs of ??$UIAFoundBoundingRectForSelectedTextUsing@AEAY0CL@$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAY0CL@$$CBG@Z @ 0x18048BBE8
 * Callers:
 *     ?GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x18048C520 (-GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow@UIAutomationHelpers@KeyboardHos.c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18008317C (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800B24D0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::UIAFoundBoundingRectForSelectedTextUsing<unsigned short const (&)[43]>(
        __int64 a1)
{
  const struct _tlgProvider_t *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  const WCHAR *v6; // [rsp+48h] [rbp+10h] BYREF

  v5 = a1;
  v1 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v1 > 5u )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)v1, 0x200000000000LL);
    if ( (_BYTE)v1 )
    {
      v5 = 0x1000000LL;
      v6 = L"SearchDownBoundingRectFromForegroundWindow";
      LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v2,
                     byte_180804B44,
                     0LL,
                     v3,
                     &v6,
                     (__int64)&v5);
    }
  }
  return (char)v1;
}
