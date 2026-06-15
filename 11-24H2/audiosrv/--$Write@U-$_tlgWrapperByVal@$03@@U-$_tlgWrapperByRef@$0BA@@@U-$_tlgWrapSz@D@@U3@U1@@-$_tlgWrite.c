/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@53@Z @ 0x180055424
 * Callers:
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x1800551F4 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        const CHAR **a7,
        const CHAR **a8,
        __int64 a9)
{
  __int64 v9; // rcx
  const CHAR *v11; // r8
  __int64 v12; // rax
  int v13; // eax
  const CHAR *v14; // rdx
  int v15; // ecx
  __int64 v16; // rcx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int8 *v20; // [rsp+60h] [rbp-41h]
  int v21; // [rsp+68h] [rbp-39h]
  int v22; // [rsp+6Ch] [rbp-35h]
  __int64 v23; // [rsp+70h] [rbp-31h]
  __int64 v24; // [rsp+78h] [rbp-29h]
  __int64 v25; // [rsp+80h] [rbp-21h]
  __int64 v26; // [rsp+88h] [rbp-19h]
  const CHAR *v27; // [rsp+90h] [rbp-11h]
  int v28; // [rsp+98h] [rbp-9h]
  int v29; // [rsp+9Ch] [rbp-5h]
  const CHAR *v30; // [rsp+A0h] [rbp-1h]
  int v31; // [rsp+A8h] [rbp+7h]
  int v32; // [rsp+ACh] [rbp+Bh]
  __int64 v33; // [rsp+B0h] [rbp+Fh]
  __int64 v34; // [rsp+B8h] [rbp+17h]

  v33 = a9;
  v9 = -1LL;
  v34 = 4LL;
  v11 = *a8;
  if ( *a8 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v11 = MultiByteStr;
    v13 = 1;
  }
  v31 = v13;
  v30 = v11;
  v32 = 0;
  v14 = *a7;
  if ( *a7 )
  {
    do
      ++v9;
    while ( v14[v9] );
    v15 = v9 + 1;
  }
  else
  {
    v14 = MultiByteStr;
    v15 = 1;
  }
  v28 = v15;
  v27 = v14;
  v29 = 0;
  v16 = *a6;
  v23 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v25 = v16;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1801D8380;
  v26 = 16LL;
  v24 = 4LL;
  UserData.Size = *(unsigned __int16 *)off_1801D8380;
  v21 = *(unsigned __int16 *)(a2 + 11);
  v20 = a2 + 11;
  UserData.Reserved = 2;
  v22 = 1;
  return EventWriteTransfer(qword_1801D8398, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
}
