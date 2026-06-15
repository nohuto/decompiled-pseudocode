/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@4@Z @ 0x1800620EC
 * Callers:
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x1800576C8 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const WCHAR **a8,
        const WCHAR **a9)
{
  __int64 v9; // rcx
  const WCHAR *v11; // r8
  __int64 v12; // rax
  int v13; // eax
  const WCHAR *v14; // rdx
  int v15; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int8 *v19; // [rsp+60h] [rbp-41h]
  int v20; // [rsp+68h] [rbp-39h]
  int v21; // [rsp+6Ch] [rbp-35h]
  __int64 v22; // [rsp+70h] [rbp-31h]
  __int64 v23; // [rsp+78h] [rbp-29h]
  __int64 v24; // [rsp+80h] [rbp-21h]
  __int64 v25; // [rsp+88h] [rbp-19h]
  __int64 v26; // [rsp+90h] [rbp-11h]
  __int64 v27; // [rsp+98h] [rbp-9h]
  const WCHAR *v28; // [rsp+A0h] [rbp-1h]
  int v29; // [rsp+A8h] [rbp+7h]
  int v30; // [rsp+ACh] [rbp+Bh]
  const WCHAR *v31; // [rsp+B0h] [rbp+Fh]
  int v32; // [rsp+B8h] [rbp+17h]
  int v33; // [rsp+BCh] [rbp+1Bh]

  v9 = -1LL;
  v11 = *a9;
  if ( *a9 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &LocaleName;
    v13 = 2;
  }
  v32 = v13;
  v31 = v11;
  v33 = 0;
  v14 = *a8;
  if ( *a8 )
  {
    do
      ++v9;
    while ( v14[v9] );
    v15 = 2 * v9 + 2;
  }
  else
  {
    v14 = &LocaleName;
    v15 = 2;
  }
  v26 = a7;
  v24 = a6;
  v22 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v29 = v15;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v28 = v14;
  v30 = 0;
  v27 = 4LL;
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1801D8380;
  v25 = 4LL;
  v23 = 4LL;
  UserData.Size = *(unsigned __int16 *)off_1801D8380;
  v20 = *(unsigned __int16 *)(a2 + 11);
  v19 = a2 + 11;
  UserData.Reserved = 2;
  v21 = 1;
  return EventWriteTransfer(qword_1801D8398, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
}
