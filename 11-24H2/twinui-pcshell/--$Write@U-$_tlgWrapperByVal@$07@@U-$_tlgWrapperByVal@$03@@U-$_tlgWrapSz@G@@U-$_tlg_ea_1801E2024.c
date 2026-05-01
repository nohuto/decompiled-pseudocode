/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1801E2024
 * Callers:
 *     ?StartActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXPEBG_N@Z @ 0x18003E758 (-StartActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUI.c)
 *     ?StartActivity@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXPEBG_N@Z @ 0x1800B4A90 (-StartActivity@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXPEBG_N@Z.c)
 *     ?StartActivity@EM_RaiseApplicationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXPEBG_N@Z @ 0x1801223CC (-StartActivity@EM_RaiseApplicationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@.c)
 *     ?StartActivity@EM_RaiseHideDeepLinkRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXPEBG_N@Z @ 0x1802A4408 (-StartActivity@EM_RaiseHideDeepLinkRequestedEventActivity@ControlCenterTelemetry@ControlCenterUI.c)
 *     ??$StartActivity@_N@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG_N@Z @ 0x18033974C (--$StartActivity@_N@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG_.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        __int64 a8)
{
  const WCHAR *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int8 *v15; // [rsp+60h] [rbp-29h]
  int v16; // [rsp+68h] [rbp-21h]
  int v17; // [rsp+6Ch] [rbp-1Dh]
  __int64 v18; // [rsp+70h] [rbp-19h]
  __int64 v19; // [rsp+78h] [rbp-11h]
  __int64 v20; // [rsp+80h] [rbp-9h]
  __int64 v21; // [rsp+88h] [rbp-1h]
  const WCHAR *v22; // [rsp+90h] [rbp+7h]
  int v23; // [rsp+98h] [rbp+Fh]
  int v24; // [rsp+9Ch] [rbp+13h]
  __int64 v25; // [rsp+A0h] [rbp+17h]
  __int64 v26; // [rsp+A8h] [rbp+1Fh]

  v25 = a8;
  v26 = 1LL;
  v9 = *a7;
  if ( *a7 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v9 = &pvData;
    v11 = 2;
  }
  v23 = v11;
  v20 = a6;
  v18 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v22 = v9;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v24 = 0;
  v21 = 4LL;
  v19 = 8LL;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v16 = *(unsigned __int16 *)(a2 + 11);
  v15 = a2 + 11;
  UserData.Reserved = 2;
  v17 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, a3, a4, 6u, &UserData);
}
