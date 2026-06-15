/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180065C48
 * Callers:
 *     ?SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z @ 0x18010E3C0 (-SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const WCHAR **a6,
        const WCHAR **a7,
        __int64 a8)
{
  __int64 v9; // rcx
  const WCHAR *v11; // r8
  __int64 v12; // rax
  int v13; // eax
  const WCHAR *v14; // rdx
  int v15; // ecx
  _DWORD v17[2]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v18; // [rsp+40h] [rbp-49h]
  unsigned __int16 *v19; // [rsp+50h] [rbp-39h]
  int v20; // [rsp+58h] [rbp-31h]
  int v21; // [rsp+5Ch] [rbp-2Dh]
  unsigned __int8 *v22; // [rsp+60h] [rbp-29h]
  int v23; // [rsp+68h] [rbp-21h]
  int v24; // [rsp+6Ch] [rbp-1Dh]
  __int64 v25; // [rsp+70h] [rbp-19h]
  __int64 v26; // [rsp+78h] [rbp-11h]
  const WCHAR *v27; // [rsp+80h] [rbp-9h]
  int v28; // [rsp+88h] [rbp-1h]
  int v29; // [rsp+8Ch] [rbp+3h]
  const WCHAR *v30; // [rsp+90h] [rbp+7h]
  int v31; // [rsp+98h] [rbp+Fh]
  int v32; // [rsp+9Ch] [rbp+13h]
  __int64 v33; // [rsp+A0h] [rbp+17h]
  __int64 v34; // [rsp+A8h] [rbp+1Fh]

  v33 = a8;
  v9 = -1LL;
  v34 = 4LL;
  v11 = *a7;
  if ( *a7 )
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
  v31 = v13;
  v30 = v11;
  v32 = 0;
  v14 = *a6;
  if ( *a6 )
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
  v25 = a5;
  v17[0] = *a2 << 24;
  v28 = v15;
  v17[1] = *(unsigned __int16 *)(a2 + 1);
  v18 = *(_QWORD *)(a2 + 3);
  v19 = *(unsigned __int16 **)(a1 + 8);
  v27 = v14;
  v29 = 0;
  v26 = 8LL;
  v20 = *v19;
  v23 = *(unsigned __int16 *)(a2 + 11);
  v22 = a2 + 11;
  v21 = 2;
  v24 = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v17, 0LL, 0LL);
}
