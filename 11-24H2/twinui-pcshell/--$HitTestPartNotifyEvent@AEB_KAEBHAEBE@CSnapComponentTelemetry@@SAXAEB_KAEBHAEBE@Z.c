/*
 * XREFs of ??$HitTestPartNotifyEvent@AEB_KAEBHAEBE@CSnapComponentTelemetry@@SAXAEB_KAEBHAEBE@Z @ 0x1800B7F24
 * Callers:
 *     ?OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x1800B7DE0 (-OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

int __fastcall CSnapComponentTelemetry::HitTestPartNotifyEvent<unsigned __int64 const &,int const &,unsigned char const &>(
        __int64 *a1,
        int *a2,
        _BYTE *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // rcx
  int v8; // edx
  bool v9; // zf
  bool v11; // [rsp+38h] [rbp-39h] BYREF
  _DWORD v12[3]; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v13; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-9h] BYREF
  void *v16; // [rsp+78h] [rbp+7h]
  int v17; // [rsp+80h] [rbp+Fh]
  int v18; // [rsp+84h] [rbp+13h]
  __int64 *v19; // [rsp+88h] [rbp+17h]
  __int64 v20; // [rsp+90h] [rbp+1Fh]
  _DWORD *v21; // [rsp+98h] [rbp+27h]
  __int64 v22; // [rsp+A0h] [rbp+2Fh]
  bool *v23; // [rsp+A8h] [rbp+37h]
  __int64 v24; // [rsp+B0h] [rbp+3Fh]

  v6 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v7 = *a1;
    v8 = *a2;
    v9 = *a3 == 0;
    v23 = &v11;
    v21 = v12;
    v11 = !v9;
    v13 = v7;
    v19 = &v13;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v6 + 1);
    v24 = 1LL;
    v12[0] = v8;
    v22 = 4LL;
    v20 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v16 = &unk_180813052;
    v18 = 1;
    UserData.Reserved = 2;
    v17 = 48;
    v12[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v6) = EventWriteTransfer(*((_QWORD *)v6 + 4), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return (int)v6;
}
