/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x180014840
 * Callers:
 *     ?UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z @ 0x180017D78 (-UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z.c)
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x1800374C8 (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _WORD *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int8 *v17; // [rsp+60h] [rbp-59h]
  int v18; // [rsp+68h] [rbp-51h]
  int v19; // [rsp+6Ch] [rbp-4Dh]
  _WORD *v20; // [rsp+70h] [rbp-49h]
  int v21; // [rsp+78h] [rbp-41h]
  int v22; // [rsp+7Ch] [rbp-3Dh]
  __int64 v23; // [rsp+80h] [rbp-39h]
  __int64 v24; // [rsp+88h] [rbp-31h]
  __int64 v25; // [rsp+90h] [rbp-29h]
  __int64 v26; // [rsp+98h] [rbp-21h]
  __int64 v27; // [rsp+A0h] [rbp-19h]
  __int64 v28; // [rsp+A8h] [rbp-11h]
  __int64 v29; // [rsp+B0h] [rbp-9h]
  __int64 v30; // [rsp+B8h] [rbp-1h]
  __int64 v31; // [rsp+C0h] [rbp+7h]
  __int64 v32; // [rsp+C8h] [rbp+Fh]

  v31 = a10;
  v29 = a9;
  v27 = a8;
  v25 = a7;
  v23 = a6;
  v32 = 4LL;
  v30 = 4LL;
  v28 = 4LL;
  v11 = *a5;
  v26 = 4LL;
  v24 = 8LL;
  if ( v11 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &unk_180056790;
    v13 = 2;
  }
  v21 = v13;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v20 = v11;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v22 = 0;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v18 = *(unsigned __int16 *)(a2 + 11);
  v17 = a2 + 11;
  UserData.Reserved = 2;
  v19 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 8u, &UserData);
}
