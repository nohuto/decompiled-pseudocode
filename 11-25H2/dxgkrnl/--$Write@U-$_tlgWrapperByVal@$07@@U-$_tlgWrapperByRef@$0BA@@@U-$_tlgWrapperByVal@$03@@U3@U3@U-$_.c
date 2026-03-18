/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@55AEBU?$_tlgWrapSz@D@@@Z @ 0x140004C40
 * Callers:
 *     ?CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEAD@Z @ 0x1400828A8 (-CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEA.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400407F4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        const CHAR **a10)
{
  const CHAR *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  _BYTE v14[32]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v15; // [rsp+50h] [rbp-49h]
  __int64 v16; // [rsp+58h] [rbp-41h]
  __int64 v17; // [rsp+60h] [rbp-39h]
  __int64 v18; // [rsp+68h] [rbp-31h]
  __int64 v19; // [rsp+70h] [rbp-29h]
  __int64 v20; // [rsp+78h] [rbp-21h]
  __int64 v21; // [rsp+80h] [rbp-19h]
  __int64 v22; // [rsp+88h] [rbp-11h]
  __int64 v23; // [rsp+90h] [rbp-9h]
  __int64 v24; // [rsp+98h] [rbp-1h]
  const CHAR *v25; // [rsp+A0h] [rbp+7h]
  int v26; // [rsp+A8h] [rbp+Fh]
  int v27; // [rsp+ACh] [rbp+13h]

  v10 = *a10;
  if ( *a10 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = v11 + 1;
  }
  else
  {
    v10 = File;
    v12 = 1;
  }
  v26 = v12;
  v23 = a9;
  v21 = a8;
  v19 = a7;
  v25 = v10;
  v27 = 0;
  v24 = 4LL;
  v17 = *a6;
  v15 = a5;
  v16 = 8LL;
  v22 = 4LL;
  v20 = 4LL;
  v18 = 16LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14015B5B8, a2, a3, 0LL, 8, v14);
}
