/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByRef@$0BA@@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByRef@$0BA@@@33@Z @ 0x14004A1D0
 * Callers:
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x140046F04 (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // rcx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-99h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-81h] BYREF
  unsigned __int8 *v15; // [rsp+60h] [rbp-71h]
  int v16; // [rsp+68h] [rbp-69h]
  int v17; // [rsp+6Ch] [rbp-65h]
  __int64 v18; // [rsp+70h] [rbp-61h]
  __int64 v19; // [rsp+78h] [rbp-59h]
  __int64 v20; // [rsp+80h] [rbp-51h]
  __int64 v21; // [rsp+88h] [rbp-49h]
  __int64 v22; // [rsp+90h] [rbp-41h]
  __int64 v23; // [rsp+98h] [rbp-39h]
  __int64 v24; // [rsp+A0h] [rbp-31h]
  __int64 v25; // [rsp+A8h] [rbp-29h]
  __int64 v26; // [rsp+B0h] [rbp-21h]
  __int64 v27; // [rsp+B8h] [rbp-19h]
  __int64 v28; // [rsp+C0h] [rbp-11h]
  __int64 v29; // [rsp+C8h] [rbp-9h]
  __int64 v30; // [rsp+D0h] [rbp-1h]
  __int64 v31; // [rsp+D8h] [rbp+7h]

  v30 = a11;
  v28 = a10;
  v31 = 4LL;
  v29 = 4LL;
  v27 = 16LL;
  v11 = *a9;
  v24 = a8;
  v22 = a7;
  v20 = a6;
  v18 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v26 = v11;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_14015B5F8;
  v25 = 4LL;
  v23 = 8LL;
  v21 = 4LL;
  v19 = 4LL;
  UserData.Size = *(unsigned __int16 *)off_14015B5F8;
  v16 = *(unsigned __int16 *)(a2 + 11);
  v15 = a2 + 11;
  UserData.Reserved = 2;
  v17 = 1;
  return EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
}
