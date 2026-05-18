/*
 * XREFs of sub_180063434 @ 0x180063434
 * Callers:
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 *     sub_180062150 @ 0x180062150 (sub_180062150.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_18001120C @ 0x18001120C (sub_18001120C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012E60 @ 0x180012E60 (sub_180012E60.c)
 *     sub_180032310 @ 0x180032310 (sub_180032310.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_18003B430 @ 0x18003B430 (sub_18003B430.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 *     sub_180058A2C @ 0x180058A2C (sub_180058A2C.c)
 *     sub_18005DFA8 @ 0x18005DFA8 (sub_18005DFA8.c)
 *     sub_18005E130 @ 0x18005E130 (sub_18005E130.c)
 *     sub_180065940 @ 0x180065940 (sub_180065940.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
_UNKNOWN **__fastcall sub_180063434(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _UNKNOWN **result; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r14
  __m128 v11; // xmm6
  __m128 v12; // xmm7
  int v13; // xmm8_4
  __m128 v14; // xmm0
  float v15; // xmm10_4
  __int64 v16; // rsi
  __m128 v17; // xmm2
  double v18; // xmm0_8
  double v19; // xmm0_8
  __m128 v20; // xmm4
  __m128 v21; // xmm1
  __m128 v22; // xmm4
  __m128 v23; // xmm4
  __m128 v24; // xmm4
  __m128 v25; // xmm4
  __m128 v26; // xmm1
  __m128 v27; // xmm3
  __m128 v28; // xmm9
  __int64 v29; // rsi
  float v30; // xmm0_4
  float v31; // xmm0_4
  __int64 v32; // r8
  unsigned __int64 v33; // [rsp+28h] [rbp-59h] BYREF
  __int64 v34; // [rsp+30h] [rbp-51h]
  __int128 v35; // [rsp+38h] [rbp-49h] BYREF
  __int128 v36; // [rsp+48h] [rbp-39h] BYREF
  __int64 v37; // [rsp+58h] [rbp-29h] BYREF
  __int64 v38; // [rsp+60h] [rbp-21h]
  __int64 v39; // [rsp+68h] [rbp-19h] BYREF
  __int64 v40; // [rsp+70h] [rbp-11h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF

  result = &retaddr;
  if ( a3[2] )
  {
    v7 = sub_180032500(a1, *(_DWORD *)(*a2 + 112LL));
    v8 = unknown_libname_81(&v37, a2);
    result = (_UNKNOWN **)sub_180032310(a1, &v39, v9, v8);
    v10 = v39;
    if ( (*(_DWORD *)(v39 + 440) & 0x2000000) != 0 )
    {
      sub_18005E130(&v37, &v39);
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0;
      v14.m128_u64[1] = 0x3F80000000000000LL;
      v35 = xmmword_18018D5C0;
      v36 = 0LL;
      sub_180011C04(v10 + 56, &v33);
      sub_180011110(&v36, (__int64 *)&v33);
      if ( v34 )
        sub_18001060C(v34);
      v15 = *(float *)(v10 + 328);
      v16 = v36;
      if ( (_QWORD)v36 )
      {
        sub_18003BE3C(v36);
        v33 = *(_QWORD *)(v16 + 144);
        v11 = (__m128)(unsigned int)v33;
        v12 = (__m128)HIDWORD(v33);
        v13 = *(_DWORD *)(v16 + 152);
        sub_18003BE3C(v16);
        v17 = (__m128)_mm_loadu_si128((const __m128i *)(v16 + 156));
        LODWORD(v35) = v17.m128_i32[0];
        v14 = _mm_shuffle_ps(v17, v17, 85);
        DWORD1(v35) = v14.m128_i32[0];
        DWORD2(v35) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
        HIDWORD(v35) = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
      }
      if ( sub_18005DFA8(a3, (__int64)&unk_1801C7558) )
      {
        *(double *)v14.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C7558);
        v11 = v14;
      }
      if ( sub_18005DFA8(a3, (__int64)&unk_1801C7578) )
      {
        *(double *)v14.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C7578);
        v12 = v14;
      }
      if ( sub_18005DFA8(a3, (__int64)&unk_1801C7598) )
      {
        v18 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C7598);
        v13 = LODWORD(v18);
      }
      if ( sub_18005DFA8(a3, (__int64)&unk_1801C75B8) )
        LODWORD(v35) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C75B8);
      if ( sub_18005DFA8(a3, (__int64)&unk_1801C75D8) )
        DWORD1(v35) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C75D8);
      if ( sub_18005DFA8(a3, (__int64)&unk_1801C75F8) )
        DWORD2(v35) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C75F8);
      if ( sub_18005DFA8(a3, (__int64)&unk_1801C7618) )
        HIDWORD(v35) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C7618);
      if ( sub_18005DFA8(a3, (__int64)&unk_1801C7538) )
      {
        v19 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C7538);
        v15 = *(float *)&v19;
      }
      v20 = _mm_mul_ps((__m128)v35, (__m128)v35);
      v21 = _mm_shuffle_ps(v20, v20, 238);
      v22 = _mm_add_ps(v20, v21);
      v23 = _mm_shuffle_ps(v22, v22, 64);
      v24 = _mm_add_ps(v23, _mm_shuffle_ps(v21, v23, 240));
      v25 = _mm_shuffle_ps(v24, v24, 170);
      v26 = _mm_sqrt_ps(v25);
      v27 = _mm_cmpneq_ps((__m128)xmmword_1800F7F80, v25);
      v28 = _mm_or_ps(
              _mm_and_ps(_mm_and_ps(_mm_div_ps((__m128)v35, v26), _mm_cmpneq_ps(v26, (__m128)0LL)), v27),
              _mm_andnot_ps(v27, (__m128)xmmword_1800F7FD0));
      result = (_UNKNOWN **)sub_180058A2C(v10, v15);
      if ( v16 )
      {
        v33 = _mm_unpacklo_ps(v11, v12).m128_u64[0];
        LODWORD(v34) = v13;
        sub_180012E60(v16, &v33);
        v35 = (__int128)v28;
        result = (_UNKNOWN **)sub_18003B430(v16, &v35);
      }
      v29 = v37;
      if ( v37 )
      {
        if ( sub_18005DFA8(a3, (__int64)&unk_1801C78D8) )
          *(float *)(v29 + 1876) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C78D8)
                                 * 0.017453292;
        if ( sub_18005DFA8(a3, (__int64)&unk_1801C78B8) )
          *(float *)(v29 + 1872) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C78B8)
                                 * 0.017453292;
        if ( sub_18005DFA8(a3, (__int64)&unk_1801C78F8) )
          *(float *)(v29 + 1880) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C78F8);
        if ( sub_18005DFA8(a3, (__int64)&unk_1801C76D8) )
          *(float *)(v29 + 1848) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C76D8);
        if ( sub_18005DFA8(a3, (__int64)&unk_1801C76F8) )
          *(float *)(v29 + 1844) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C76F8);
        if ( sub_18005DFA8(a3, (__int64)&unk_1801C7738) )
        {
          v30 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C7738);
          *(float *)(v29 + 1824) = sub_18001120C(v30 * 0.017453292, -1.5533431, 1.5533431);
        }
        if ( sub_18005DFA8(a3, (__int64)&unk_1801C7758) )
        {
          v31 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C7758);
          *(float *)(v29 + 1820) = sub_18001120C(v31 * 0.017453292, -1.5533431, 1.5533431);
        }
        if ( sub_18005DFA8(a3, (__int64)&unk_1801C7718) )
          *(float *)(v29 + 1840) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C7718)
                                 * 0.017453292;
        if ( sub_18005DFA8(a3, (__int64)&unk_1801C7778) )
          *(float *)(v29 + 1852) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C7778)
                                 * 0.017453292;
        if ( sub_18005DFA8(a3, (__int64)&unk_1801C7798) )
          *(float *)(v29 + 1856) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C7798);
        if ( sub_18005DFA8(a3, (__int64)&unk_1801C77B8) )
          *(float *)(v29 + 1860) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C77B8);
        if ( sub_18005DFA8(a3, (__int64)&unk_1801C77D8) )
          *(float *)(v29 + 1828) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C77D8);
        if ( sub_18005DFA8(a3, (__int64)&unk_1801C77F8) )
          *(float *)(v29 + 1832) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C77F8);
        if ( sub_18005DFA8(a3, (__int64)&unk_1801C76B8) )
          *(_DWORD *)(v29 + 1868) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(
                                      v7,
                                      &unk_1801C76B8,
                                      0LL);
        if ( sub_18005DFA8(a3, (__int64)&unk_1801C7818) )
          *(_DWORD *)(v29 + 1816) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(
                                      v7,
                                      &unk_1801C7818,
                                      0LL);
        if ( sub_18005DFA8(a3, (__int64)&unk_1801C7858) )
          *(_BYTE *)(v29 + 1864) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(
                                     v7,
                                     &unk_1801C7858,
                                     0LL);
        sub_18005DFA8(a3, (__int64)&unk_1801C7958);
        LOBYTE(v32) = sub_18005DFA8(a3, (__int64)&unk_1801C7838);
        result = (_UNKNOWN **)sub_180065940(a1, &v37, v32);
      }
      if ( *((_QWORD *)&v36 + 1) )
        result = (_UNKNOWN **)sub_18001060C(*((__int64 *)&v36 + 1));
      if ( v38 )
        result = (_UNKNOWN **)sub_18001060C(v38);
    }
    if ( v40 )
      return (_UNKNOWN **)sub_18001060C(v40);
  }
  return result;
}
