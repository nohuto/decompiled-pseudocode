/*
 * XREFs of ?VidSchiProcessExitTelemetry@@YAXPEAU_VIDSCH_PROCESS@@@Z @ 0x14003F438
 * Callers:
 *     VidSchTerminateProcess @ 0x1400FE140 (VidSchTerminateProcess.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@3333AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x140001FF4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapSz@D@@U1@U.c)
 *     _tlgKeywordOn @ 0x1400404B8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 */

void __fastcall VidSchiProcessExitTelemetry(__m128i *a1)
{
  __m128i v1; // xmm2
  __m128i v2; // xmm1
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int16 *v7; // r10
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int16 *v12; // r10
  __int64 v13; // r11
  int v14; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+78h] [rbp-88h] BYREF
  __int64 v16; // [rsp+80h] [rbp-80h] BYREF
  PVOID *v17; // [rsp+88h] [rbp-78h] BYREF
  __int64 v18; // [rsp+90h] [rbp-70h] BYREF
  __int64 v19; // [rsp+98h] [rbp-68h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-60h] BYREF
  PVOID *v21; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-48h] BYREF
  __m128i v24; // [rsp+C0h] [rbp-40h]
  __m128i v25; // [rsp+D0h] [rbp-30h]
  __m128i v26; // [rsp+E0h] [rbp-20h]
  PVOID P[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v28; // [rsp+100h] [rbp+0h] BYREF

  v1 = a1[177];
  v2 = a1[179];
  v25 = a1[178];
  *(__m128i *)P = a1[180];
  v24 = v1;
  v26 = v2;
  if ( (unsigned __int8)_mm_cvtsi128_si32(v1) )
  {
    v3 = a1[1].m128i_i64[0];
    v28 = 0LL;
    v28 = *(_OWORD *)(v3 + 140);
    if ( v25.m128i_i64[0] <= (unsigned __int64)v26.m128i_i64[0] )
    {
      if ( (unsigned int)dword_140081048 > 5 && (unsigned __int8)tlgKeywordOn(&dword_140081048, 0x400000000010LL) )
      {
        v14 = 1;
        v23 = (__int64)&v28;
        v20 = v24.m128i_i64[1];
        v19 = v25.m128i_i64[1];
        v18 = *(_QWORD *)(v11 + 2648);
        v17 = P;
        v16 = v26.m128i_i64[1];
        v22 = v13;
        v21 = (PVOID *)v12;
        v15 = 0x2000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v9,
          (__int64)&unk_140075159,
          v10,
          v11,
          (__int64)&v15,
          (__int64)&v16,
          (unsigned __int16 **)&v17,
          (void **)&v18,
          (__int64)&v19,
          (__int64)&v20,
          (__int64)&v21,
          (__int64)&v22,
          (__int64)&v14,
          &v23);
      }
    }
    else if ( (unsigned int)dword_140081048 > 5 && (unsigned __int8)tlgKeywordOn(&dword_140081048, 0x400000000010LL) )
    {
      v14 = 1;
      v15 = (__int64)&v28;
      v18 = v24.m128i_i64[1];
      v19 = v25.m128i_i64[1];
      v20 = *(_QWORD *)(v6 + 2648);
      v21 = P;
      v22 = v26.m128i_i64[1];
      v16 = v8;
      v17 = (PVOID *)v7;
      v23 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        v4,
        (__int64)&unk_140075237,
        v5,
        v6,
        (__int64)&v23,
        (__int64)&v22,
        (unsigned __int16 **)&v21,
        (void **)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v14,
        &v15);
    }
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
}
