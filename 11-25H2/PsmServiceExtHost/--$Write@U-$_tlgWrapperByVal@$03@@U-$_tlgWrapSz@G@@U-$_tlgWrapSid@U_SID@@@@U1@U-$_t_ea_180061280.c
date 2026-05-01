/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180061280
 * Callers:
 *     ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180068B18 (-HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18007F598 (-HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const wchar_t **a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // eax
  const wchar_t *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int8 *v16; // [rsp+60h] [rbp-41h]
  int v17; // [rsp+68h] [rbp-39h]
  int v18; // [rsp+6Ch] [rbp-35h]
  __int64 v19; // [rsp+70h] [rbp-31h]
  __int64 v20; // [rsp+78h] [rbp-29h]
  const wchar_t *v21; // [rsp+80h] [rbp-21h]
  int v22; // [rsp+88h] [rbp-19h]
  int v23; // [rsp+8Ch] [rbp-15h]
  __int64 v24; // [rsp+90h] [rbp-11h]
  int v25; // [rsp+98h] [rbp-9h]
  int v26; // [rsp+9Ch] [rbp-5h]
  __int64 v27; // [rsp+A0h] [rbp-1h]
  __int64 v28; // [rsp+A8h] [rbp+7h]
  __int64 v29; // [rsp+B0h] [rbp+Fh]
  __int64 v30; // [rsp+B8h] [rbp+17h]

  v29 = a9;
  v27 = a8;
  v30 = 1LL;
  v28 = 4LL;
  v9 = *(unsigned __int8 *)(*a7 + 1);
  v24 = *a7;
  v26 = 0;
  v25 = 4 * v9 + 8;
  v10 = *a6;
  if ( *a6 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v10 = &word_1800C10AC;
    v12 = 2;
  }
  v22 = v12;
  v19 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v21 = v10;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1800E72B8;
  v23 = 0;
  v20 = 4LL;
  UserData.Size = *(unsigned __int16 *)off_1800E72B8;
  v17 = *(unsigned __int16 *)(a2 + 11);
  v16 = a2 + 11;
  v18 = 1;
  UserData.Reserved = 2;
  return EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
}
