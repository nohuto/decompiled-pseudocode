/*
 * XREFs of ?AggregateEvent@NdisFreeSharedMemoryTelemetry@@AEBAXXZ @ 0x1400DC148
 * Callers:
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x1400498B0 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U_tlgWrapperPtrSize@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@22222222222AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4AEBU_tlgWrapperPtrSize@@4@Z @ 0x140004098 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByRef@$0BA@@@U-.c)
 *     _tlgKeywordOn @ 0x1400713E0 (_tlgKeywordOn.c)
 */

void __fastcall NdisFreeSharedMemoryTelemetry::AggregateEvent(NdisFreeSharedMemoryTelemetry *this)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v7; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v8; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v9; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v10; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v11; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v12; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v13; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v14; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v15; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v16; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v17; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v18; // [rsp+100h] [rbp-20h] BYREF
  int *v19; // [rsp+108h] [rbp-18h] BYREF
  int v20; // [rsp+110h] [rbp-10h]
  int v21; // [rsp+130h] [rbp+10h] BYREF
  int v22; // [rsp+138h] [rbp+18h] BYREF
  int v23; // [rsp+140h] [rbp+20h] BYREF
  int v24; // [rsp+148h] [rbp+28h] BYREF
  int v25; // [rsp+14Ch] [rbp+2Ch]

  v24 = *((_DWORD *)this + 10);
  v25 = *((_DWORD *)this + 11);
  if ( (unsigned int)dword_14011A7B0 > 4 && tlgKeywordOn((__int64)&dword_14011A7B0, 2048LL) )
  {
    v21 = *(_DWORD *)(v2 + 192);
    v19 = &v24;
    v22 = *(_DWORD *)(v2 + 32);
    v23 = *(_DWORD *)(v2 + 36);
    v6 = v2 + 16;
    v16 = *(_QWORD *)(v2 + 8);
    v17 = v16;
    v13 = v3;
    v14 = v3;
    v15 = v3;
    v20 = 8;
    v7 = v5;
    v8 = v5;
    v9 = v5;
    v10 = v4;
    v11 = v4;
    v12 = v4;
    v18 = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperByVal<4>>(
      v1,
      (int)&unk_140102403,
      v2,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      &v6,
      (__int64)&v23,
      (__int64)&v22,
      (__int64 *)&v19,
      (__int64)&v21);
  }
}
