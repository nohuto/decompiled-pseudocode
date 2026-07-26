/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U_tlgWrapperPtrSize@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@22222222222AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4AEBU_tlgWrapperPtrSize@@4@Z @ 0x140004098
 * Callers:
 *     ?AggregateEvent@NdisFreeSharedMemoryTelemetry@@AEBAXXZ @ 0x1400DC148 (-AggregateEvent@NdisFreeSharedMemoryTelemetry@@AEBAXXZ.c)
 * Callees:
 *     _tlgWriteAgg @ 0x1400E6324 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperByVal<4>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 *a16,
        __int64 a17,
        __int64 a18,
        __int64 *a19,
        __int64 a20)
{
  __int64 v20; // rcx
  _BYTE v22[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h]
  __int64 v27; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  __int64 v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  __int64 v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  __int64 v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  __int64 v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  __int64 v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  __int64 v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  __int64 v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  __int64 v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  __int64 v51; // [rsp+130h] [rbp+30h]
  __int64 v52; // [rsp+138h] [rbp+38h]
  __int64 v53; // [rsp+140h] [rbp+40h]
  int v54; // [rsp+148h] [rbp+48h]
  int v55; // [rsp+14Ch] [rbp+4Ch]
  __int64 v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]

  v56 = a20;
  v23 = a4;
  v53 = *a19;
  v54 = *((_DWORD *)a19 + 2);
  v51 = a18;
  v49 = a17;
  v57 = 4LL;
  v55 = 0;
  v52 = 4LL;
  v20 = *a16;
  v45 = a15;
  v43 = a14;
  v41 = a13;
  v39 = a12;
  v37 = a11;
  v35 = a10;
  v33 = a9;
  v31 = a8;
  v29 = a7;
  v27 = a6;
  v25 = a5;
  v47 = v20;
  v50 = 4LL;
  v48 = 16LL;
  v46 = 8LL;
  v44 = 8LL;
  v42 = 8LL;
  v40 = 8LL;
  v38 = 8LL;
  v36 = 8LL;
  v34 = 8LL;
  v32 = 8LL;
  v30 = 8LL;
  v28 = 8LL;
  v26 = 8LL;
  v24 = 8LL;
  return tlgWriteAgg((unsigned int)&dword_14011A7B0, a2, 0, 19, (__int64)v22);
}
