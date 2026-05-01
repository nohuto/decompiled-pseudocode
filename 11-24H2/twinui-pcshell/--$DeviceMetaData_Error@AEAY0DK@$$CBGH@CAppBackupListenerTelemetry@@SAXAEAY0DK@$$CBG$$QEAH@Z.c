/*
 * XREFs of ??$DeviceMetaData_Error@AEAY0DK@$$CBGH@CAppBackupListenerTelemetry@@SAXAEAY0DK@$$CBG$$QEAH@Z @ 0x180610134
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$1_::_1_::catch$12 @ 0x1806FFF48 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMe_ea_1806FFF48.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800026B8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1801EA0B4 (-Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CAppBackupListenerTelemetry::DeviceMetaData_Error<unsigned short const (&)[58],int>(__int64 a1)
{
  const struct _tlgProvider_t *v1; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  const wchar_t *v5; // [rsp+68h] [rbp+20h] BYREF

  v1 = CAppBackupListenerLogging::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)v1, 0x400000000000LL);
    if ( (_BYTE)v1 )
    {
      v5 = L"Event-driven App DeviceMetaData Backup failed with error.";
      LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v3,
                     (__int64)&unk_18081C372,
                     v2,
                     v3,
                     &v5);
    }
  }
  return (char)v1;
}
