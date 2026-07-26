/*
 * XREFs of ?WriteEvent@NdisFreeSharedMemoryTelemetry@@AEBAXXZ @ 0x1400DC3E0
 * Callers:
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x1400498B0 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U_tlgWrapperPtrSize@@U2@U?$_tlgWrapperArray@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4AEBU_tlgWrapperPtrSize@@4AEBU?$_tlgWrapperArray@$03@@@Z @ 0x140003DD0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U_tlgWrapperPtrSize@@U2@U-$_tlgW.c)
 *     _tlgKeywordOn @ 0x1400713E0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

void __fastcall NdisFreeSharedMemoryTelemetry::WriteEvent(NdisFreeSharedMemoryTelemetry *this)
{
  int v1; // r10d
  unsigned __int16 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r10d
  int v12; // [rsp+50h] [rbp-9h] BYREF
  int v13; // [rsp+54h] [rbp-5h] BYREF
  int v14; // [rsp+58h] [rbp-1h] BYREF
  _DWORD v15[2]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v16; // [rsp+68h] [rbp+Fh] BYREF
  _DWORD *v17; // [rsp+70h] [rbp+17h] BYREF
  __int16 v18; // [rsp+78h] [rbp+1Fh]
  _DWORD *v19; // [rsp+80h] [rbp+27h] BYREF
  int v20; // [rsp+88h] [rbp+2Fh]
  _DWORD v21[4]; // [rsp+90h] [rbp+37h] BYREF

  v1 = *((_DWORD *)this + 48);
  v15[0] = *((_DWORD *)this + 10);
  v3 = 0;
  v15[1] = *((_DWORD *)this + 11);
  if ( (v1 & 3) != 0 )
  {
    LODWORD(v4) = 0;
    if ( *((_BYTE *)this + 80) )
      v4 = *((_QWORD *)this + 11);
    v21[0] = v4;
    v3 = 1;
  }
  if ( (v1 & 0xC) != 0 )
  {
    if ( *((_BYTE *)this + 128) )
      v5 = *((_QWORD *)this + 17);
    else
      LODWORD(v5) = 0;
    v6 = v3++;
    v21[v6] = v5;
  }
  if ( (v1 & 0x30) != 0 )
  {
    LODWORD(v7) = 0;
    if ( *((_BYTE *)this + 176) )
      v7 = *((_QWORD *)this + 23);
    v21[v3] = v7;
  }
  if ( (unsigned int)dword_14011A7B0 > 4 && tlgKeywordOn((__int64)&dword_14011A7B0, 64LL) )
  {
    v18 = v10;
    v17 = v21;
    v12 = v11;
    v19 = v15;
    v13 = *(_DWORD *)(v9 + 32);
    v14 = *(_DWORD *)(v9 + 36);
    v16 = v9 + 16;
    v20 = 8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperByVal<4>,_tlgWrapperArray<4>>(
      v8,
      (__int64)&unk_1401023AC,
      v9,
      v10,
      &v16,
      (__int64)&v14,
      (__int64)&v13,
      (__int64 *)&v19,
      (__int64)&v12,
      (__int64 *)&v17);
  }
}
