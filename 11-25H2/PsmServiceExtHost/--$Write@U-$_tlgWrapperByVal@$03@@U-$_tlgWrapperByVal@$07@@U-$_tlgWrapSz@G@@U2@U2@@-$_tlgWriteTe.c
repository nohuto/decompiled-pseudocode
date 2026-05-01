/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@44@Z @ 0x180064D5C
 * Callers:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180005B20 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const wchar_t **a7,
        __int64 a8,
        __int64 a9)
{
  const wchar_t *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int8 *v15; // [rsp+60h] [rbp-41h]
  int v16; // [rsp+68h] [rbp-39h]
  int v17; // [rsp+6Ch] [rbp-35h]
  __int64 v18; // [rsp+70h] [rbp-31h]
  __int64 v19; // [rsp+78h] [rbp-29h]
  __int64 v20; // [rsp+80h] [rbp-21h]
  __int64 v21; // [rsp+88h] [rbp-19h]
  const wchar_t *v22; // [rsp+90h] [rbp-11h]
  int v23; // [rsp+98h] [rbp-9h]
  int v24; // [rsp+9Ch] [rbp-5h]
  __int64 v25; // [rsp+A0h] [rbp-1h]
  __int64 v26; // [rsp+A8h] [rbp+7h]
  __int64 v27; // [rsp+B0h] [rbp+Fh]
  __int64 v28; // [rsp+B8h] [rbp+17h]

  v27 = a9;
  v25 = a8;
  v28 = 8LL;
  v26 = 8LL;
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
    v9 = &word_1800C10AC;
    v11 = 2;
  }
  v23 = v11;
  v20 = a6;
  v18 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v22 = v9;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v21 = 8LL;
  v24 = 0;
  v19 = 4LL;
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1800E72B8;
  UserData.Size = *(unsigned __int16 *)off_1800E72B8;
  v16 = *(unsigned __int16 *)(a2 + 11);
  v15 = a2 + 11;
  UserData.Reserved = 2;
  v17 = 1;
  return EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
}
