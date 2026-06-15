/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x180075F34
 * Callers:
 *     ?OnActiveRenderEndpointChanged@CAudioRenderEndpointChangeDelegator@@AEAAXXZ @ 0x180075DEC (-OnActiveRenderEndpointChanged@CAudioRenderEndpointChangeDelegator@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const CHAR **a5)
{
  const CHAR *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  _DWORD v10[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h]
  unsigned __int16 *v12; // [rsp+48h] [rbp-38h] BYREF
  int v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+54h] [rbp-2Ch]
  unsigned __int8 *v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+64h] [rbp-1Ch]
  const CHAR *v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+70h] [rbp-10h]
  int v20; // [rsp+74h] [rbp-Ch]

  v6 = *a5;
  if ( *a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v6 = MultiByteStr;
    v8 = 1;
  }
  v20 = 0;
  v19 = v8;
  v10[0] = *a2 << 24;
  v18 = v6;
  v10[1] = *(unsigned __int16 *)(a2 + 1);
  v11 = *(_QWORD *)(a2 + 3);
  v12 = *(unsigned __int16 **)(a1 + 8);
  v13 = *v12;
  v16 = *(unsigned __int16 *)(a2 + 11);
  v15 = a2 + 11;
  v17 = 1;
  v14 = 2;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v10, 0LL, 0LL, 3, &v12);
}
