/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@444444@Z @ 0x18004C05C
 * Callers:
 *     ?HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ @ 0x180080988 (-HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18004C6C0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v15; // rcx
  int v16; // r8d
  const WCHAR *v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  const WCHAR *v20; // rdx
  _BYTE v22[32]; // [rsp+30h] [rbp-B1h] BYREF
  const WCHAR *v23; // [rsp+50h] [rbp-91h]
  int v24; // [rsp+58h] [rbp-89h]
  int v25; // [rsp+5Ch] [rbp-85h]
  const WCHAR *v26; // [rsp+60h] [rbp-81h]
  int v27; // [rsp+68h] [rbp-79h]
  int v28; // [rsp+6Ch] [rbp-75h]
  __int64 v29; // [rsp+70h] [rbp-71h]
  __int64 v30; // [rsp+78h] [rbp-69h]
  __int64 v31; // [rsp+80h] [rbp-61h]
  __int64 v32; // [rsp+88h] [rbp-59h]
  __int64 v33; // [rsp+90h] [rbp-51h]
  __int64 v34; // [rsp+98h] [rbp-49h]
  __int64 v35; // [rsp+A0h] [rbp-41h]
  __int64 v36; // [rsp+A8h] [rbp-39h]
  __int64 v37; // [rsp+B0h] [rbp-31h]
  __int64 v38; // [rsp+B8h] [rbp-29h]
  __int64 v39; // [rsp+C0h] [rbp-21h]
  __int64 v40; // [rsp+C8h] [rbp-19h]
  __int64 v41; // [rsp+D0h] [rbp-11h]
  __int64 v42; // [rsp+D8h] [rbp-9h]

  v41 = a13;
  v39 = a12;
  v15 = -1LL;
  v16 = 2;
  v37 = a11;
  v35 = a10;
  v33 = a9;
  v31 = a8;
  v29 = a7;
  v42 = 4LL;
  v40 = 4LL;
  v38 = 4LL;
  v17 = *a6;
  v36 = 4LL;
  v34 = 4LL;
  v32 = 4LL;
  v30 = 4LL;
  if ( v17 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v17 = &LocaleName;
    v19 = 2;
  }
  v27 = v19;
  v26 = v17;
  v28 = 0;
  v20 = *a5;
  if ( *a5 )
  {
    do
      ++v15;
    while ( v20[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v20 = &LocaleName;
  }
  v23 = v20;
  v24 = v16;
  v25 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 11, (__int64)v22);
}
