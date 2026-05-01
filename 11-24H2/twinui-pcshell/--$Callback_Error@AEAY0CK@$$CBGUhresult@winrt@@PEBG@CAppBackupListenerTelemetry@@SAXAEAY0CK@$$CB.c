/*
 * XREFs of ??$Callback_Error@AEAY0CK@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0CK@$$CBG$$QEAUhresult@winrt@@$$QEAPEBG@Z @ 0x18060FA30
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged$_ResumeCoro$1_::_1_::catch$14 @ 0x1807004BB (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileChanged$_ea_1807004BB.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved$_ResumeCoro$1_::_1_::catch$16 @ 0x1807005BD (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileRemoved$_ea_1807005BD.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005908 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1801EA0B4 (-Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[42],winrt::hresult,unsigned short const *>(
        __int64 a1,
        int *a2,
        __int64 *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v11; // [rsp+48h] [rbp-20h] BYREF
  __int64 v12[3]; // [rsp+50h] [rbp-18h] BYREF
  int v13; // [rsp+88h] [rbp+20h] BYREF

  v6 = CAppBackupListenerLogging::Provider(a1);
  if ( *(_DWORD *)v6 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v6, 0x400000000000LL);
    if ( (_BYTE)v6 )
    {
      v9 = *a3;
      v13 = *a2;
      v11 = v9;
      v12[0] = a1;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v8,
                     (__int64)&unk_18081C104,
                     v7,
                     v8,
                     v12,
                     (__int64)&v13,
                     &v11);
    }
  }
  return (char)v6;
}
