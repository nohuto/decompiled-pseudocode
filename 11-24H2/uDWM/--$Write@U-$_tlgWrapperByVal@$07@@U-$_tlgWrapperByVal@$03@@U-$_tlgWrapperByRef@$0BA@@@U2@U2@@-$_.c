/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@44@Z @ 0x180032E24
 * Callers:
 *     ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z @ 0x1800328D8 (-StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rcx
  _DWORD v12[2]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v13; // [rsp+40h] [rbp-61h]
  unsigned __int16 *v14; // [rsp+50h] [rbp-51h]
  int v15; // [rsp+58h] [rbp-49h]
  int v16; // [rsp+5Ch] [rbp-45h]
  unsigned __int8 *v17; // [rsp+60h] [rbp-41h]
  int v18; // [rsp+68h] [rbp-39h]
  int v19; // [rsp+6Ch] [rbp-35h]
  __int64 v20; // [rsp+70h] [rbp-31h]
  int v21; // [rsp+78h] [rbp-29h]
  int v22; // [rsp+7Ch] [rbp-25h]
  __int64 v23; // [rsp+80h] [rbp-21h]
  int v24; // [rsp+88h] [rbp-19h]
  int v25; // [rsp+8Ch] [rbp-15h]
  __int64 v26; // [rsp+90h] [rbp-11h]
  int v27; // [rsp+98h] [rbp-9h]
  int v28; // [rsp+9Ch] [rbp-5h]
  __int64 v29; // [rsp+A0h] [rbp-1h]
  int v30; // [rsp+A8h] [rbp+7h]
  int v31; // [rsp+ACh] [rbp+Bh]
  __int64 v32; // [rsp+B0h] [rbp+Fh]
  int v33; // [rsp+B8h] [rbp+17h]
  int v34; // [rsp+BCh] [rbp+1Bh]

  v34 = 0;
  v31 = 0;
  v28 = 0;
  v25 = 0;
  v22 = 0;
  v32 = a9;
  v29 = a8;
  v33 = 4;
  v30 = 4;
  v27 = 16;
  v10 = *a7;
  v23 = a6;
  v20 = a5;
  v12[0] = *a2 << 24;
  v26 = v10;
  v12[1] = *(unsigned __int16 *)(a2 + 1);
  v13 = *(_QWORD *)(a2 + 3);
  v14 = *(unsigned __int16 **)(a1 + 8);
  v24 = 4;
  v21 = 8;
  v15 = *v14;
  v18 = *(unsigned __int16 *)(a2 + 11);
  v17 = a2 + 11;
  v16 = 2;
  v19 = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v12);
}
