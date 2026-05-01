/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@55@Z @ 0x180046F38
 * Callers:
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180047074 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        __int64 a6,
        __int64 a7,
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
  const wchar_t *v18; // [rsp+70h] [rbp-31h]
  int v19; // [rsp+78h] [rbp-29h]
  int v20; // [rsp+7Ch] [rbp-25h]
  __int64 v21; // [rsp+80h] [rbp-21h]
  __int64 v22; // [rsp+88h] [rbp-19h]
  __int64 v23; // [rsp+90h] [rbp-11h]
  __int64 v24; // [rsp+98h] [rbp-9h]
  __int64 v25; // [rsp+A0h] [rbp-1h]
  __int64 v26; // [rsp+A8h] [rbp+7h]
  __int64 v27; // [rsp+B0h] [rbp+Fh]
  __int64 v28; // [rsp+B8h] [rbp+17h]

  v27 = a9;
  v25 = a8;
  v23 = a7;
  v21 = a6;
  v28 = 1LL;
  v26 = 1LL;
  v24 = 1LL;
  v9 = *a5;
  v22 = 8LL;
  if ( v9 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v9 = &word_1800C1FFC;
    v11 = 2;
  }
  v19 = v11;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v18 = v9;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1800E82B8;
  v20 = 0;
  UserData.Size = *(unsigned __int16 *)off_1800E82B8;
  v16 = *(unsigned __int16 *)(a2 + 11);
  v15 = a2 + 11;
  v17 = 1;
  UserData.Reserved = 2;
  return EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
}
