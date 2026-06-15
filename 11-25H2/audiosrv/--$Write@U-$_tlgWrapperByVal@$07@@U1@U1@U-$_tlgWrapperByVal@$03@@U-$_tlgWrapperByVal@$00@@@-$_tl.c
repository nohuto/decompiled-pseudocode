/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18007C0C4
 * Callers:
 *     ??1CProcessSubmixProxy@@MEAA@XZ @ 0x18002599C (--1CProcessSubmixProxy@@MEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  _DWORD v10[2]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v11; // [rsp+40h] [rbp-61h]
  unsigned __int16 *v12; // [rsp+50h] [rbp-51h] BYREF
  int v13; // [rsp+58h] [rbp-49h]
  int v14; // [rsp+5Ch] [rbp-45h]
  unsigned __int8 *v15; // [rsp+60h] [rbp-41h]
  int v16; // [rsp+68h] [rbp-39h]
  int v17; // [rsp+6Ch] [rbp-35h]
  __int64 v18; // [rsp+70h] [rbp-31h]
  __int64 v19; // [rsp+78h] [rbp-29h]
  __int64 v20; // [rsp+80h] [rbp-21h]
  __int64 v21; // [rsp+88h] [rbp-19h]
  __int64 v22; // [rsp+90h] [rbp-11h]
  __int64 v23; // [rsp+98h] [rbp-9h]
  __int64 v24; // [rsp+A0h] [rbp-1h]
  __int64 v25; // [rsp+A8h] [rbp+7h]
  __int64 v26; // [rsp+B0h] [rbp+Fh]
  __int64 v27; // [rsp+B8h] [rbp+17h]

  v26 = a9;
  v24 = a8;
  v22 = a7;
  v20 = a6;
  v18 = a5;
  v10[0] = *a2 << 24;
  v10[1] = *(unsigned __int16 *)(a2 + 1);
  v27 = 1LL;
  v23 = 8LL;
  v11 = *(_QWORD *)(a2 + 3);
  v12 = *(unsigned __int16 **)(a1 + 8);
  v21 = 8LL;
  v19 = 8LL;
  v25 = 4LL;
  v13 = *v12;
  v16 = *(unsigned __int16 *)(a2 + 11);
  v15 = a2 + 11;
  v17 = 1;
  v14 = 2;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v10, 0LL, 0LL, 7, &v12);
}
