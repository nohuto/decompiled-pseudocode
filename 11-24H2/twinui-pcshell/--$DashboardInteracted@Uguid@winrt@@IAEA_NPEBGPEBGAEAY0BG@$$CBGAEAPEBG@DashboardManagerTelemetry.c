/*
 * XREFs of ??$DashboardInteracted@Uguid@winrt@@IAEA_NPEBGPEBGAEAY0BG@$$CBGAEAPEBG@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAIAEA_N$$QEAPEBG3AEAY0BG@$$CBGAEAPEBG@Z @ 0x1802D021C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1805CE4F0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_Resume.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180191A90 (-Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U4@U4@U4@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@666AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801B7A44 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWra.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

char __fastcall DashboardManagerTelemetry::DashboardInteracted<winrt::guid,unsigned int,bool &,unsigned short const *,unsigned short const *,unsigned short const (&)[22],unsigned short const * &>(
        __int128 *a1,
        int *a2,
        _BYTE *a3,
        const WCHAR **a4,
        const WCHAR **a5,
        int a6,
        const WCHAR **a7)
{
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int128 v15; // xmm0
  const WCHAR *v16; // rcx
  _BYTE v18[4]; // [rsp+68h] [rbp-11h] BYREF
  int v19; // [rsp+6Ch] [rbp-Dh] BYREF
  __int64 v20; // [rsp+70h] [rbp-9h] BYREF
  const WCHAR *v21; // [rsp+78h] [rbp-1h] BYREF
  const WCHAR *v22; // [rsp+80h] [rbp+7h] BYREF
  const WCHAR *v23; // [rsp+88h] [rbp+Fh] BYREF
  const WCHAR *v24; // [rsp+90h] [rbp+17h] BYREF
  __int128 *v25; // [rsp+98h] [rbp+1Fh] BYREF
  __int128 v26; // [rsp+A0h] [rbp+27h] BYREF

  v11 = DashboardManagerTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)v11 > 5u )
  {
    LOBYTE(v11) = tlgKeywordOn((__int64)v11, 0x400000000000LL);
    if ( (_BYTE)v11 )
    {
      v15 = *a1;
      v22 = L"DismissDashboardAsync";
      v21 = *a7;
      v20 = 50331648LL;
      v16 = *a5;
      v24 = *a4;
      v18[0] = *a3;
      v19 = *a2;
      v25 = &v26;
      v23 = v16;
      v26 = v15;
      LOBYTE(v11) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                      v14,
                      (unsigned __int8 *)&unk_180816E5D,
                      v12,
                      v13,
                      (__int64 *)&v25,
                      (__int64)&v19,
                      (__int64)v18,
                      &v24,
                      &v23,
                      &v22,
                      &v21,
                      (__int64)&v20);
    }
  }
  return (char)v11;
}
