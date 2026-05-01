/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180063BC4
 * Callers:
 *     ?HampStoreIdReferenceTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180063B20 (-HampStoreIdReferenceTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        const wchar_t **a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rcx
  const wchar_t *v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  const wchar_t *v13; // rdx
  int v14; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int8 *v18; // [rsp+60h] [rbp-29h]
  int v19; // [rsp+68h] [rbp-21h]
  int v20; // [rsp+6Ch] [rbp-1Dh]
  const wchar_t *v21; // [rsp+70h] [rbp-19h]
  int v22; // [rsp+78h] [rbp-11h]
  int v23; // [rsp+7Ch] [rbp-Dh]
  const wchar_t *v24; // [rsp+80h] [rbp-9h]
  int v25; // [rsp+88h] [rbp-1h]
  int v26; // [rsp+8Ch] [rbp+3h]
  __int64 v27; // [rsp+90h] [rbp+7h]
  __int64 v28; // [rsp+98h] [rbp+Fh]
  __int64 v29; // [rsp+A0h] [rbp+17h]
  __int64 v30; // [rsp+A8h] [rbp+1Fh]

  v29 = a8;
  v9 = -1LL;
  v27 = a7;
  v30 = 8LL;
  v28 = 8LL;
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
  v25 = v12;
  v24 = v10;
  v26 = 0;
  v13 = *a5;
  if ( *a5 )
  {
    do
      ++v9;
    while ( v13[v9] );
    v14 = 2 * v9 + 2;
  }
  else
  {
    v13 = &word_1800C10AC;
    v14 = 2;
  }
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v22 = v14;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v21 = v13;
  v23 = 0;
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1800E72B8;
  UserData.Size = *(unsigned __int16 *)off_1800E72B8;
  v19 = *(unsigned __int16 *)(a2 + 11);
  v18 = a2 + 11;
  UserData.Reserved = 2;
  v20 = 1;
  return EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
}
