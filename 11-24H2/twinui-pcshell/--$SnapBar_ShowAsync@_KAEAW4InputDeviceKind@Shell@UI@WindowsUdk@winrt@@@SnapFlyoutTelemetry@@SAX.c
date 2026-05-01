/*
 * XREFs of ??$SnapBar_ShowAsync@_KAEAW4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@SnapFlyoutTelemetry@@SAX$$QEA_KAEAW4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1800B6F74
 * Callers:
 *     SnapFlyoutHost::ShowSnapBarAsync$_ResumeCoro$1 @ 0x180272910 (SnapFlyoutHost--ShowSnapBarAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

int __fastcall SnapFlyoutTelemetry::SnapBar_ShowAsync<unsigned __int64,enum winrt::WindowsUdk::UI::Shell::InputDeviceKind &>(
        __int64 *a1,
        _DWORD *a2)
{
  const struct _tlgProvider_t *v4; // rax
  _DWORD v6[2]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v7; // [rsp+38h] [rbp-31h] BYREF
  __int64 v8; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  void *v11; // [rsp+70h] [rbp+7h]
  int v12; // [rsp+78h] [rbp+Fh]
  int v13; // [rsp+7Ch] [rbp+13h]
  __int64 *v14; // [rsp+80h] [rbp+17h]
  __int64 v15; // [rsp+88h] [rbp+1Fh]
  _DWORD *v16; // [rsp+90h] [rbp+27h]
  __int64 v17; // [rsp+98h] [rbp+2Fh]
  __int64 *v18; // [rsp+A0h] [rbp+37h]
  __int64 v19; // [rsp+A8h] [rbp+3Fh]

  v4 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v4 > 5u
    && (*((_QWORD *)v4 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v4 + 3) & 0x200000000000LL) == *((_QWORD *)v4 + 3) )
  {
    v6[0] = *a2;
    v8 = *a1;
    v18 = &v7;
    v16 = v6;
    v14 = &v8;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v4 + 1);
    EventDescriptor.Keyword = 0x200000000000LL;
    v7 = 0x1000000LL;
    v19 = 8LL;
    v17 = 4LL;
    v15 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v11 = &unk_1808157D1;
    UserData.Reserved = 2;
    v12 = 62;
    v13 = 1;
    v6[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v4) = EventWriteTransfer(*((_QWORD *)v4 + 4), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return (int)v4;
}
