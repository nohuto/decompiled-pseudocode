/*
 * XREFs of ??$TriggerCompatBackupIfUserJsonImpacted_Error@AEAY0EH@$$CBGUhresult@winrt@@PEBGAEA_N@CAppBackupListenerTelemetry@@SAXAEAY0EH@$$CBG$$QEAUhresult@winrt@@$$QEAPEBGAEA_N@Z @ 0x1806103EC
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::TriggerCompatBackupIfUserJsonImpacted_::_1_::catch$24 @ 0x1806DC820 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--TriggerCompatB_ea_1806DC820.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@34AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180011594 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTe.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1801EA0B4 (-Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CAppBackupListenerTelemetry::TriggerCompatBackupIfUserJsonImpacted_Error<unsigned short const (&)[71],winrt::hresult,unsigned short const *,bool &>(
        __int64 a1,
        int *a2,
        __int64 *a3)
{
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  int v10; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+58h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp-18h] BYREF
  const wchar_t *v13; // [rsp+68h] [rbp-10h] BYREF

  v5 = CAppBackupListenerLogging::Provider(a1);
  if ( *(_DWORD *)v5 > 5u )
  {
    LOBYTE(v5) = tlgKeywordOn((__int64)v5, 0x400000000000LL);
    if ( (_BYTE)v5 )
    {
      v12 = *a3;
      v10 = *a2;
      v13 = L"Cannot backup compat json based on CompatJsonWriteTimeRegKey for user.";
      v11 = 0x1000000LL;
      LOBYTE(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v8,
                     (__int64)&unk_18081C22D,
                     v6,
                     v7,
                     &v13,
                     (__int64)&v10,
                     &v12);
    }
  }
  return (char)v5;
}
