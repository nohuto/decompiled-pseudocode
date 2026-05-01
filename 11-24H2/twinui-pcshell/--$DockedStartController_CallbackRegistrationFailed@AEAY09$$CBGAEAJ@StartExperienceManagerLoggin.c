/*
 * XREFs of ??$DockedStartController_CallbackRegistrationFailed@AEAY09$$CBGAEAJ@StartExperienceManagerLogging@@SAXAEAY09$$CBGAEAJ@Z @ 0x18038E140
 * Callers:
 *     _CStartExperienceManager::SetDockedStartController_::_1_::catch$17 @ 0x1806E583B (_CStartExperienceManager--SetDockedStartController_--_1_--catch$17.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800026B8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800E8790 (-Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall StartExperienceManagerLogging::DockedStartController_CallbackRegistrationFailed<unsigned short const (&)[10],long &>(
        __int64 a1)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  const wchar_t *v4; // [rsp+68h] [rbp+20h] BYREF

  result = LauncherTelemetryLogging::Provider(a1);
  if ( *(_DWORD *)result > 2u )
  {
    v4 = L"Dismissed";
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                                            (__int64)result,
                                            (__int64)&unk_1807ED7C7,
                                            v2,
                                            v3,
                                            &v4);
  }
  return result;
}
