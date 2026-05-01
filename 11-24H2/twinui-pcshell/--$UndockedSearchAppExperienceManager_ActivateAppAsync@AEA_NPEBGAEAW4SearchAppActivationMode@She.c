/*
 * XREFs of ??$UndockedSearchAppExperienceManager_ActivateAppAsync@AEA_NPEBGAEAW4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@AEAW4ShellExperienceViewFocusOptions@Experience@2Internal@Windows@@@SearchAppExperienceManagerTelemetry@@SAXAEA_N$$QEAPEBGAEAW4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@AEAW4ShellExperienceViewFocusOptions@Experience@2Internal@Windows@@@Z @ 0x1800CCE88
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1802430DC (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 * Callees:
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800824C8 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@33@Z @ 0x1800CCF28 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

const struct _tlgProvider_t *__fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateAppAsync<bool &,unsigned short const *,enum winrt::WindowsUdk::UI::Shell::SearchAppActivationMode &,enum Windows::Internal::Shell::Experience::ShellExperienceViewFocusOptions &>(
        unsigned __int8 *a1,
        __int64 *a2,
        int *a3,
        int *a4)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v9; // rdx
  int v10; // r9d
  int v11; // r8d
  int v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+44h] [rbp-24h] BYREF
  int v14; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF

  result = SearchAppLauncherLogging::Provider((__int64)a1);
  if ( *(_DWORD *)result > 5u )
  {
    v9 = *a2;
    v10 = *a4;
    v11 = *a3;
    v14 = *a1;
    v15 = v9;
    v12 = v10;
    v13 = v11;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_1807F1451,
                                            v11,
                                            v10,
                                            (__int64)&v14,
                                            (__int64)&v15,
                                            (__int64)&v13,
                                            (__int64)&v12);
  }
  return result;
}
