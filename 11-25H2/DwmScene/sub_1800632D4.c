/*
 * XREFs of sub_1800632D4 @ 0x1800632D4
 * Callers:
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_180061FF0 @ 0x180061FF0 (sub_180061FF0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012D60 @ 0x180012D60 (sub_180012D60.c)
 *     sub_1800321B0 @ 0x1800321B0 (sub_1800321B0.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_18003B2D0 @ 0x18003B2D0 (sub_18003B2D0.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_1800588CC @ 0x1800588CC (sub_1800588CC.c)
 *     sub_18005DE48 @ 0x18005DE48 (sub_18005DE48.c)
 *     sub_18005DFD0 @ 0x18005DFD0 (sub_18005DFD0.c)
 *     sub_1800657E0 @ 0x1800657E0 (sub_1800657E0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
_UNKNOWN **__fastcall sub_1800632D4(__int64 a1, _QWORD *a2, _QWORD *a3)
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
    v7 = sub_1800323A0(a1, *(_DWORD *)(*a2 + 112LL));
    v8 = unknown_libname_81(&v37, a2);
    result = (_UNKNOWN **)sub_1800321B0(a1, &v39, v9, v8);
    v10 = v39;
    if ( (*(_DWORD *)(v39 + 440) & 0x2000000) != 0 )
    {
      sub_18005DFD0(&v37, &v39);
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0;
      v14.m128_u64[1] = 0x3F80000000000000LL;
      v35 = xmmword_18018C5D0;
      v36 = 0LL;
      sub_180011B04(v10 + 56, &v33);
      sub_180011010(&v36, (__int64 *)&v33);
      if ( v34 )
        sub_18001050C(v34);
      v15 = *(float *)(v10 + 328);
      v16 = v36;
      if ( (_QWORD)v36 )
      {
        sub_18003BCDC(v36);
        v33 = *(_QWORD *)(v16 + 144);
        v11 = (__m128)(unsigned int)v33;
        v12 = (__m128)HIDWORD(v33);
        v13 = *(_DWORD *)(v16 + 152);
        sub_18003BCDC(v16);
        v17 = (__m128)_mm_loadu_si128((const __m128i *)(v16 + 156));
        LODWORD(v35) = v17.m128_i32[0];
        v14 = _mm_shuffle_ps(v17, v17, 85);
        DWORD1(v35) = v14.m128_i32[0];
        DWORD2(v35) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
        HIDWORD(v35) = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
      }
      if ( sub_18005DE48(a3, (__int64)&unk_1801C6548) )
      {
        *(double *)v14.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C6548);
        v11 = v14;
      }
      if ( sub_18005DE48(a3, (__int64)&unk_1801C6568) )
      {
        *(double *)v14.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C6568);
        v12 = v14;
      }
      if ( sub_18005DE48(a3, (__int64)&unk_1801C6588) )
      {
        v18 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C6588);
        v13 = LODWORD(v18);
      }
      if ( sub_18005DE48(a3, (__int64)&unk_1801C65A8) )
        LODWORD(v35) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C65A8);
      if ( sub_18005DE48(a3, (__int64)&unk_1801C65C8) )
        DWORD1(v35) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C65C8);
      if ( sub_18005DE48(a3, (__int64)&unk_1801C65E8) )
        DWORD2(v35) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C65E8);
      if ( sub_18005DE48(a3, (__int64)&unk_1801C6608) )
        HIDWORD(v35) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C6608);
      if ( sub_18005DE48(a3, (__int64)&unk_1801C6528) )
      {
        v19 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C6528);
        v15 = *(float *)&v19;
      }
      v20 = _mm_mul_ps((__m128)v35, (__m128)v35);
      v21 = _mm_shuffle_ps(v20, v20, 238);
      v22 = _mm_add_ps(v20, v21);
      v23 = _mm_shuffle_ps(v22, v22, 64);
      v24 = _mm_add_ps(v23, _mm_shuffle_ps(v21, v23, 240));
      v25 = _mm_shuffle_ps(v24, v24, 170);
      v26 = _mm_sqrt_ps(v25);
      v27 = _mm_cmpneq_ps((__m128)xmmword_1800F6F80, v25);
      v28 = _mm_or_ps(
              _mm_and_ps(_mm_and_ps(_mm_div_ps((__m128)v35, v26), _mm_cmpneq_ps(v26, (__m128)0LL)), v27),
              _mm_andnot_ps(v27, (__m128)xmmword_1800F6FD0));
      result = (_UNKNOWN **)sub_1800588CC(v10, v15);
      if ( v16 )
      {
        v33 = _mm_unpacklo_ps(v11, v12).m128_u64[0];
        LODWORD(v34) = v13;
        sub_180012D60(v16, &v33);
        v35 = (__int128)v28;
        result = (_UNKNOWN **)sub_18003B2D0(v16, &v35);
      }
      v29 = v37;
      if ( v37 )
      {
        if ( sub_18005DE48(a3, (__int64)&unk_1801C68C8) )
          *(float *)(v29 + 1876) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C68C8)
                                 * 0.017453292;
        if ( sub_18005DE48(a3, (__int64)&unk_1801C68A8) )
          *(float *)(v29 + 1872) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C68A8)
                                 * 0.017453292;
        if ( sub_18005DE48(a3, (__int64)&unk_1801C68E8) )
          *(float *)(v29 + 1880) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C68E8);
        if ( sub_18005DE48(a3, (__int64)&unk_1801C66C8) )
          *(float *)(v29 + 1848) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C66C8);
        if ( sub_18005DE48(a3, (__int64)&unk_1801C66E8) )
          *(float *)(v29 + 1844) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C66E8);
        if ( sub_18005DE48(a3, (__int64)&unk_1801C6728) )
        {
          v30 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C6728);
          *(float *)(v29 + 1824) = sub_18001110C(v30 * 0.017453292, -1.5533431, 1.5533431);
        }
        if ( sub_18005DE48(a3, (__int64)&unk_1801C6748) )
        {
          v31 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C6748);
          *(float *)(v29 + 1820) = sub_18001110C(v31 * 0.017453292, -1.5533431, 1.5533431);
        }
        if ( sub_18005DE48(a3, (__int64)&unk_1801C6708) )
          *(float *)(v29 + 1840) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C6708)
                                 * 0.017453292;
        if ( sub_18005DE48(a3, (__int64)&unk_1801C6768) )
          *(float *)(v29 + 1852) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C6768)
                                 * 0.017453292;
        if ( sub_18005DE48(a3, (__int64)&unk_1801C6788) )
          *(float *)(v29 + 1856) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C6788);
        if ( sub_18005DE48(a3, (__int64)&unk_1801C67A8) )
          *(float *)(v29 + 1860) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C67A8);
        if ( sub_18005DE48(a3, (__int64)&unk_1801C67C8) )
          *(float *)(v29 + 1828) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C67C8);
        if ( sub_18005DE48(a3, (__int64)&unk_1801C67E8) )
          *(float *)(v29 + 1832) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C67E8);
        if ( sub_18005DE48(a3, (__int64)&unk_1801C66A8) )
          *(_DWORD *)(v29 + 1868) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(
                                      v7,
                                      &unk_1801C66A8,
                                      0LL);
        if ( sub_18005DE48(a3, (__int64)&unk_1801C6808) )
          *(_DWORD *)(v29 + 1816) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(
                                      v7,
                                      &unk_1801C6808,
                                      0LL);
        if ( sub_18005DE48(a3, (__int64)&unk_1801C6848) )
          *(_BYTE *)(v29 + 1864) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(
                                     v7,
                                     &unk_1801C6848,
                                     0LL);
        sub_18005DE48(a3, (__int64)&unk_1801C6948);
        LOBYTE(v32) = sub_18005DE48(a3, (__int64)&unk_1801C6828);
        result = (_UNKNOWN **)sub_1800657E0(a1, &v37, v32);
      }
      if ( *((_QWORD *)&v36 + 1) )
        result = (_UNKNOWN **)sub_18001050C(*((__int64 *)&v36 + 1));
      if ( v38 )
        result = (_UNKNOWN **)sub_18001050C(v38);
    }
    if ( v40 )
      return (_UNKNOWN **)sub_18001050C(v40);
  }
  return result;
}
