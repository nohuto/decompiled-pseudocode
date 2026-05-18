/*
 * XREFs of sub_180065264 @ 0x180065264
 * Callers:
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_180061FF0 @ 0x180061FF0 (sub_180061FF0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800236C4 @ 0x1800236C4 (sub_1800236C4.c)
 *     sub_1800321B0 @ 0x1800321B0 (sub_1800321B0.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_1800391E4 @ 0x1800391E4 (sub_1800391E4.c)
 *     sub_1800576C8 @ 0x1800576C8 (sub_1800576C8.c)
 *     sub_18005D728 @ 0x18005D728 (sub_18005D728.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180065264(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // r12
  _UNKNOWN **v6; // r13
  __int64 *v7; // r15
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rsi
  char v13; // al
  double v14; // xmm0_8
  int v15; // xmm12_4
  double v16; // xmm0_8
  int v17; // xmm13_4
  double v18; // xmm0_8
  int v19; // xmm14_4
  double v20; // xmm0_8
  int v21; // xmm15_4
  double v22; // xmm0_8
  double v23; // xmm0_8
  double v24; // xmm0_8
  int v25; // xmm8_4
  double v26; // xmm0_8
  int v27; // xmm9_4
  double v28; // xmm0_8
  int v29; // xmm10_4
  int v30; // eax
  double v31; // xmm0_8
  _QWORD *v32; // rax
  __int64 v33; // r8
  __m128i v34; // xmm6
  int v35; // xmm0_4
  __int64 v36; // [rsp+28h] [rbp-E0h]
  char v37; // [rsp+30h] [rbp-D8h]
  int v38; // [rsp+34h] [rbp-D4h]
  __int64 v39; // [rsp+38h] [rbp-D0h]
  int v40; // [rsp+40h] [rbp-C8h]
  int v41; // [rsp+44h] [rbp-C4h]
  float v42; // [rsp+48h] [rbp-C0h]
  int v43; // [rsp+4Ch] [rbp-BCh]
  int v44; // [rsp+50h] [rbp-B8h]
  int v45; // [rsp+54h] [rbp-B4h]
  float v46; // [rsp+58h] [rbp-B0h]
  _QWORD v47[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+78h] [rbp-90h] BYREF
  __int64 v49; // [rsp+80h] [rbp-88h]
  __m128i v50; // [rsp+88h] [rbp-80h] BYREF
  __int64 v51; // [rsp+98h] [rbp-70h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-68h]
  __int64 v53; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-58h]
  __int64 v55; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-48h]
  __int64 v57; // [rsp+C8h] [rbp-40h]
  __int64 v58; // [rsp+D0h] [rbp-38h]
  _QWORD v59[23]; // [rsp+D8h] [rbp-30h] BYREF
  char v62; // [rsp+1E8h] [rbp+E0h]
  char v63; // [rsp+1F0h] [rbp+E8h]

  v2 = a2;
  v36 = sub_1800323A0(a1, *(_DWORD *)(*a2 + 112));
  v4 = sub_18005D728(*v2, v3);
  v5 = (_QWORD *)(v4 + 8);
  v6 = &off_1801B89D0;
  v7 = (__int64 *)(v4 + 64);
  v39 = 3LL;
  do
  {
    unknown_libname_81(&v48, v5);
    result = *v7;
    if ( *v7 )
      _InterlockedIncrement((volatile signed __int32 *)(result + 8));
    v10 = *(v7 - 1);
    v57 = v10;
    v11 = *v7;
    v58 = *v7;
    v12 = v48;
    if ( v48 && v10 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v36 + 64LL))(v36, *(v6 - 2), 0LL);
      v63 = v13;
      v14 = (*(double (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v36 + 88LL))(v36, *(v6 - 1));
      v15 = LODWORD(v14);
      v16 = (*(double (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v36 + 88LL))(v36, *v6);
      v17 = LODWORD(v16);
      v18 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v36 + 88LL))(v36, v6[1]);
      v19 = LODWORD(v18);
      v20 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v36 + 88LL))(v36, v6[2]);
      v21 = LODWORD(v20);
      v22 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v36 + 88LL))(v36, v6[3]);
      v40 = LODWORD(v22);
      v23 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v36 + 88LL))(v36, v6[4]);
      v41 = LODWORD(v23);
      v24 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v36 + 88LL))(v36, v6[5]);
      v25 = LODWORD(v24);
      v26 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v36 + 88LL))(v36, v6[6]);
      v27 = LODWORD(v26);
      v28 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v36 + 88LL))(v36, v6[7]);
      v29 = LODWORD(v28);
      v42 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v36 + 88LL))(v36, v6[8]);
      v43 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v36 + 72LL))(v36, v6[9], 0LL);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v36 + 72LL))(v36, v6[10], 0LL);
      v44 = v30;
      v31 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v36 + 88LL))(v36, v6[11]);
      v45 = LODWORD(v31);
      v46 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v36 + 88LL))(v36, v6[12]);
      v62 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v36 + 64LL))(v36, v6[13], 0LL);
      v37 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v36 + 64LL))(v36, v6[14], 0LL);
      v38 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v36 + 72LL))(v36, v6[15], 0LL);
      v32 = unknown_libname_81(v59, v2);
      sub_1800321B0(a1, &v55, v33, v32);
      sub_180011B04(v55 + 56, &v50);
      v34 = _mm_load_si128(&v50);
      *(__m128i *)&v47[1] = v34;
      v50 = 0LL;
      sub_1800391E4((_QWORD *)(v10 + 96), &v47[1]);
      if ( _mm_srli_si128(v34, 8).m128i_u64[0] )
        sub_18001050C(_mm_srli_si128(v34, 8).m128i_i64[0]);
      if ( v62 )
      {
        v35 = -1077342245;
        v38 = 1;
      }
      else
      {
        v35 = 0;
      }
      *(_DWORD *)(v10 + 88) = v38;
      *(_DWORD *)(v10 + 136) = v35;
      *(_DWORD *)(v10 + 112) = v15;
      *(_DWORD *)(v10 + 116) = v17;
      *(_DWORD *)(v10 + 120) = v19;
      *(_DWORD *)(v10 + 124) = v21;
      *(_DWORD *)(v10 + 128) = v40;
      *(_DWORD *)(v10 + 132) = v41;
      *(_BYTE *)(v10 + 72) = v63;
      *(_DWORD *)(v10 + 152) = v25;
      *(_DWORD *)(v10 + 156) = v27;
      *(_DWORD *)(v10 + 160) = v29;
      *(_DWORD *)(v10 + 164) = 1065353216;
      *(_BYTE *)(v12 + 72) = v63;
      *(_DWORD *)(v12 + 88) = v25;
      *(_DWORD *)(v12 + 92) = v27;
      *(_DWORD *)(v12 + 96) = v29;
      *(_DWORD *)(v12 + 100) = 1065353216;
      *(float *)(v12 + 104) = v42;
      *(_DWORD *)(v12 + 108) = v43;
      *(_DWORD *)(v12 + 120) = v44;
      *(_DWORD *)(v12 + 116) = v45;
      *(float *)(v12 + 112) = v46;
      *(_BYTE *)(v12 + 124) = v37;
      sub_180011B04(v12 + 56, &v51);
      result = (__int64)sub_1800236C4(v51, &v53);
      if ( v52 )
        result = sub_18001050C(v52);
      if ( v53 )
        result = sub_1800576C8(v53);
      if ( v54 )
        result = sub_18001050C(v54);
      if ( v56 )
        result = sub_18001050C(v56);
      if ( v11 )
        result = sub_18001050C(v11);
      if ( v49 )
        result = sub_18001050C(v49);
      v2 = a2;
      goto LABEL_24;
    }
    if ( v11 )
    {
      result = sub_18001050C(v11);
      v8 = v39;
    }
    if ( v49 )
    {
      result = sub_18001050C(v49);
LABEL_24:
      v8 = v39;
    }
    v5 += 2;
    v7 += 2;
    v6 += 18;
    v39 = v8 - 1;
  }
  while ( v8 != 1 );
  return result;
}
