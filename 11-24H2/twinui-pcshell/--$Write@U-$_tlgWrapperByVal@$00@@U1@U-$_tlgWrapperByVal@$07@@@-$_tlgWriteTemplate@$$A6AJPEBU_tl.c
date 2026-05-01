/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180168A64
 * Callers:
 *     ??$HandleTabletPostureChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1801688F4 (--$HandleTabletPostureChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeybo.c)
 *     ??$HandleAllowInputPanelMdmPolicyUpdated@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1801689E0 (--$HandleAllowInputPanelMdmPolicyUpdated@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@.c)
 *     ??$LockScreenStateChanged@AEA_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N$$QEA_N@Z @ 0x1801CD47C (--$LockScreenStateChanged@AEA_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N$$QEA_N@Z.c)
 *     ??$ToastPeekRegionClicked@_NAEA_N@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEA_NAEA_N@Z @ 0x1802C7E4C (--$ToastPeekRegionClicked@_NAEA_N@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEA_NAEA.c)
 *     ??$SearchDisabledByPolicy@AEA_NAEAU?$atomic@_N@std@@@StartWindowTelemetry@@SAXAEA_NAEAU?$atomic@_N@std@@@Z @ 0x180463E00 (--$SearchDisabledByPolicy@AEA_NAEAU-$atomic@_N@std@@@StartWindowTelemetry@@SAXAEA_NAEAU-$atomic@.c)
 *     ??$HandleAccessibilityKeyboardVisibilityChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804844F0 (--$HandleAccessibilityKeyboardVisibilityChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Wi.c)
 *     ??$HandleEditControlFocusChanged@AEAEAEBW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEBW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804845F0 (--$HandleEditControlFocusChanged@AEAEAEBW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKe.c)
 *     ??$HandleOnScreenKeyboardVisibilityChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804849CC (--$HandleOnScreenKeyboardVisibilityChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows.c)
 *     ??$HandleShellRequestedShow@AEAU?$atomic@_N@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@_N@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180484B10 (--$HandleShellRequestedShow@AEAU-$atomic@_N@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windo.c)
 *     ??$PinConsentPromptCompleted@_N_N@PinManagerTelemetry@@SAX$$QEA_N0@Z @ 0x1805E04F8 (--$PinConsentPromptCompleted@_N_N@PinManagerTelemetry@@SAX$$QEA_N0@Z.c)
 *     ??$PinConsentNotificationCompleted@_N_N@PinManagerTelemetry@@SAX$$QEA_N0@Z @ 0x1805ED4BC (--$PinConsentNotificationCompleted@_N_N@PinManagerTelemetry@@SAX$$QEA_N0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int8 *v10; // [rsp+60h] [rbp-11h]
  int v11; // [rsp+68h] [rbp-9h]
  int v12; // [rsp+6Ch] [rbp-5h]
  __int64 v13; // [rsp+70h] [rbp-1h]
  __int64 v14; // [rsp+78h] [rbp+7h]
  __int64 v15; // [rsp+80h] [rbp+Fh]
  __int64 v16; // [rsp+88h] [rbp+17h]
  __int64 v17; // [rsp+90h] [rbp+1Fh]
  __int64 v18; // [rsp+98h] [rbp+27h]

  v17 = a7;
  v15 = a6;
  v13 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v16 = 1LL;
  v14 = 1LL;
  v18 = 8LL;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v11 = *(unsigned __int16 *)(a2 + 11);
  v10 = a2 + 11;
  v12 = 1;
  UserData.Reserved = 2;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
}
