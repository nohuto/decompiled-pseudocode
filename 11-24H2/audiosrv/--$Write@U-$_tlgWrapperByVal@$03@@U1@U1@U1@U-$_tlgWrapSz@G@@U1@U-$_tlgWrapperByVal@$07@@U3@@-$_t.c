/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@5@Z @ 0x180063420
 * Callers:
 *     ?Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z @ 0x180063320 (-Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const WCHAR **a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  const WCHAR *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  _DWORD v17[2]; // [rsp+38h] [rbp-B1h] BYREF
  __int64 v18; // [rsp+40h] [rbp-A9h]
  unsigned __int16 *v19; // [rsp+50h] [rbp-99h]
  int v20; // [rsp+58h] [rbp-91h]
  int v21; // [rsp+5Ch] [rbp-8Dh]
  unsigned __int8 *v22; // [rsp+60h] [rbp-89h]
  int v23; // [rsp+68h] [rbp-81h]
  int v24; // [rsp+6Ch] [rbp-7Dh]
  __int64 v25; // [rsp+70h] [rbp-79h]
  __int64 v26; // [rsp+78h] [rbp-71h]
  __int64 v27; // [rsp+80h] [rbp-69h]
  __int64 v28; // [rsp+88h] [rbp-61h]
  __int64 v29; // [rsp+90h] [rbp-59h]
  __int64 v30; // [rsp+98h] [rbp-51h]
  __int64 v31; // [rsp+A0h] [rbp-49h]
  __int64 v32; // [rsp+A8h] [rbp-41h]
  const WCHAR *v33; // [rsp+B0h] [rbp-39h]
  int v34; // [rsp+B8h] [rbp-31h]
  int v35; // [rsp+BCh] [rbp-2Dh]
  __int64 v36; // [rsp+C0h] [rbp-29h]
  __int64 v37; // [rsp+C8h] [rbp-21h]
  __int64 v38; // [rsp+D0h] [rbp-19h]
  __int64 v39; // [rsp+D8h] [rbp-11h]
  __int64 v40; // [rsp+E0h] [rbp-9h]
  __int64 v41; // [rsp+E8h] [rbp-1h]

  v40 = a12;
  v38 = a11;
  v36 = a10;
  v41 = 8LL;
  v39 = 8LL;
  v37 = 4LL;
  v13 = *a9;
  if ( *a9 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = &LocaleName;
    v15 = 2;
  }
  v34 = v15;
  v31 = a8;
  v29 = a7;
  v27 = a6;
  v25 = a5;
  v17[0] = *a2 << 24;
  v33 = v13;
  v17[1] = *(unsigned __int16 *)(a2 + 1);
  v18 = *(_QWORD *)(a2 + 3);
  v19 = *(unsigned __int16 **)(a1 + 8);
  v35 = 0;
  v32 = 4LL;
  v30 = 4LL;
  v28 = 4LL;
  v26 = 4LL;
  v20 = *v19;
  v23 = *(unsigned __int16 *)(a2 + 11);
  v22 = a2 + 11;
  v21 = 2;
  v24 = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v17, 0LL, 0LL);
}
