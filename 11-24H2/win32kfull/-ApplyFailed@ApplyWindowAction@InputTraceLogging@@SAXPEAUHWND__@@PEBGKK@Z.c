/*
 * XREFs of ?ApplyFailed@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGKK@Z @ 0x1402C8FF8
 * Callers:
 *     ?ApplyWindowActionErrorCode@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@W4ApplyWindowActionError@AdvancedWindowPos@@@Z @ 0x1402C9084 (-ApplyWindowActionErrorCode@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@W4ApplyWindowActionError@Advance.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x140005278 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::ApplyWindowAction::ApplyFailed(HWND a1, const unsigned __int16 *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 v6; // [rsp+48h] [rbp-20h] BYREF
  HWND v7[3]; // [rsp+50h] [rbp-18h] BYREF

  if ( (unsigned int)dword_140398B80 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_140398B80, 0x80000LL) )
    {
      v6 = v5;
      v7[0] = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_140398B80,
        (__int64)&unk_140368A8A,
        v3,
        v4,
        (__int64)v7,
        &v6);
    }
  }
}
