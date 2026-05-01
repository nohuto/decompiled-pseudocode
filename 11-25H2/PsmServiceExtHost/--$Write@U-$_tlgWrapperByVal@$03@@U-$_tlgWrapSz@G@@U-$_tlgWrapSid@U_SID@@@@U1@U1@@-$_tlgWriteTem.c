/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@33@Z @ 0x180002280
 * Callers:
 *     ?HamSrvQueryPackageStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18006CE78 (-HamSrvQueryPackageStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAT_HAM_EXTERNAL_STATE_SU.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800557F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
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
  _BYTE v14[32]; // [rsp+30h] [rbp-51h] BYREF
  __int64 v15; // [rsp+50h] [rbp-31h]
  __int64 v16; // [rsp+58h] [rbp-29h]
  const wchar_t *v17; // [rsp+60h] [rbp-21h]
  int v18; // [rsp+68h] [rbp-19h]
  int v19; // [rsp+6Ch] [rbp-15h]
  __int64 v20; // [rsp+70h] [rbp-11h]
  int v21; // [rsp+78h] [rbp-9h]
  int v22; // [rsp+7Ch] [rbp-5h]
  __int64 v23; // [rsp+80h] [rbp-1h]
  __int64 v24; // [rsp+88h] [rbp+7h]
  __int64 v25; // [rsp+90h] [rbp+Fh]
  __int64 v26; // [rsp+98h] [rbp+17h]

  v25 = a9;
  v23 = a8;
  v26 = 4LL;
  v24 = 4LL;
  v9 = *(unsigned __int8 *)(*a7 + 1);
  v20 = *a7;
  v22 = 0;
  v21 = 4 * v9 + 8;
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
  v18 = v12;
  v15 = a5;
  v17 = v10;
  v19 = 0;
  v16 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(&dword_1800E72B0, a2, 0LL, 0LL, 7, v14);
}
