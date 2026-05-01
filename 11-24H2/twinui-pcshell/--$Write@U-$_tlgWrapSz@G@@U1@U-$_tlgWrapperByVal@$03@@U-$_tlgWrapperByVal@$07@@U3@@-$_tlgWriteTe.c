/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@5@Z @ 0x1800ACF8C
 * Callers:
 *     ??$ViewKeptAlive@PEBGPEBGIAEBQEAUHWND__@@@Hide@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0$$QEAIAEBQEAUHWND__@@@Z @ 0x1800ACE98 (--$ViewKeptAlive@PEBGPEBGIAEBQEAUHWND__@@@Hide@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0$$Q.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v12; // rcx
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  const WCHAR *v16; // rdx
  int v17; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int8 *v21; // [rsp+60h] [rbp-41h]
  int v22; // [rsp+68h] [rbp-39h]
  int v23; // [rsp+6Ch] [rbp-35h]
  const WCHAR *v24; // [rsp+70h] [rbp-31h]
  int v25; // [rsp+78h] [rbp-29h]
  int v26; // [rsp+7Ch] [rbp-25h]
  const WCHAR *v27; // [rsp+80h] [rbp-21h]
  int v28; // [rsp+88h] [rbp-19h]
  int v29; // [rsp+8Ch] [rbp-15h]
  __int64 v30; // [rsp+90h] [rbp-11h]
  __int64 v31; // [rsp+98h] [rbp-9h]
  __int64 v32; // [rsp+A0h] [rbp-1h]
  __int64 v33; // [rsp+A8h] [rbp+7h]
  __int64 v34; // [rsp+B0h] [rbp+Fh]
  __int64 v35; // [rsp+B8h] [rbp+17h]

  v34 = a9;
  v32 = a8;
  v12 = -1LL;
  v30 = a7;
  v35 = 8LL;
  v33 = 8LL;
  v31 = 4LL;
  v13 = *a6;
  if ( *a6 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = &pvData;
    v15 = 2;
  }
  v28 = v15;
  v27 = v13;
  v29 = 0;
  v16 = *a5;
  if ( *a5 )
  {
    do
      ++v12;
    while ( v16[v12] );
    v17 = 2 * v12 + 2;
  }
  else
  {
    v16 = &pvData;
    v17 = 2;
  }
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v25 = v17;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v24 = v16;
  v26 = 0;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v22 = *(unsigned __int16 *)(a2 + 11);
  v21 = a2 + 11;
  UserData.Reserved = 2;
  v23 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, a3, 0LL, 7u, &UserData);
}
