/*
 * XREFs of ??$UndockedSearchExperienceManager_HideResult@AEA_NPEBGAEBG@UndockedSearchExperienceManagerTIPTelemetry@@SAXAEA_N$$QEAPEBGAEBG@Z @ 0x1803AFAB4
 * Callers:
 *     ?on_result@_tip_SearchHideTest@@QEAAXAEBUTipReportingInfo@@@Z @ 0x1803C3E64 (-on_result@_tip_SearchHideTest@@QEAAXAEBUTipReportingInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800040F0 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@.c)
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800824C8 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 */

char __fastcall UndockedSearchExperienceManagerTIPTelemetry::UndockedSearchExperienceManager_HideResult<bool &,unsigned short const *,unsigned short const &>(
        char *a1,
        _QWORD *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD v8[3]; // [rsp+50h] [rbp-18h] BYREF
  char v9; // [rsp+88h] [rbp+20h] BYREF

  v4 = SearchAppLauncherLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v8[0] = *a2;
      v9 = *a1;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v6,
                     (__int64)&unk_1807F1929,
                     v5,
                     v6,
                     (__int64)&v9,
                     v8);
    }
  }
  return (char)v4;
}
