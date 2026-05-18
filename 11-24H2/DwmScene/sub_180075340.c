/*
 * XREFs of sub_180075340 @ 0x180075340
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_18000CD2C @ 0x18000CD2C (sub_18000CD2C.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180011FC8 @ 0x180011FC8 (sub_180011FC8.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_1800131E0 @ 0x1800131E0 (sub_1800131E0.c)
 *     sub_18005BCE8 @ 0x18005BCE8 (sub_18005BCE8.c)
 *     sub_180073A90 @ 0x180073A90 (sub_180073A90.c)
 *     sub_180073B34 @ 0x180073B34 (sub_180073B34.c)
 *     sub_180073C48 @ 0x180073C48 (sub_180073C48.c)
 *     sub_180075A00 @ 0x180075A00 (sub_180075A00.c)
 *     sub_180075A3C @ 0x180075A3C (sub_180075A3C.c)
 *     sub_18007C454 @ 0x18007C454 (sub_18007C454.c)
 *     sub_18007C95C @ 0x18007C95C (sub_18007C95C.c)
 *     sub_18007C9B8 @ 0x18007C9B8 (sub_18007C9B8.c)
 *     sub_180099188 @ 0x180099188 (sub_180099188.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_180075340(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __m128i v5; // xmm1
  __m128i v6; // xmm1
  __int64 result; // rax
  __int128 v8; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+48h] [rbp-B8h]
  __int64 v11; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h]
  __int128 v13; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14[3]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15[3]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v16[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v17[3]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v18[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v19[3]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v20[24]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v21[24]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v22[48]; // [rsp+130h] [rbp+30h] BYREF

  v13 = 0LL;
  sub_18000CD2C((__int64)v22, 16LL, 3LL, (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  sub_180011C04(*a2 + 56LL, &v8);
  sub_18001268C(v8, &v9);
  if ( *((_QWORD *)&v8 + 1) )
    sub_18001060C(*((__int64 *)&v8 + 1));
  sub_180011FC8(v9, (__int64)v21);
  sub_180073C48(v9, (__int64)v20);
  sub_180099188((unsigned int)v21, (unsigned int)v20, a1 + 152, (unsigned int)&v13, (__int64)v22);
  unknown_libname_81(&v8, (_QWORD *)(a1 + 56));
  sub_18005BCE8(v8, &v11, 9);
  if ( *((_QWORD *)&v8 + 1) )
    sub_18001060C(*((__int64 *)&v8 + 1));
  v4 = v11;
  if ( v11 )
  {
    sub_18007C95C(v11, &unk_1801C8098);
    sub_18007C95C(v4, &unk_1801C80B8);
    sub_18007C95C(v4, &unk_1801C80D8);
    v5 = (__m128i)_mm_sub_ps(*(__m128 *)(*(_QWORD *)(a1 + 216) + 240LL), *(__m128 *)(*(_QWORD *)(a1 + 216) + 272LL));
    *(_QWORD *)&v8 = v5.m128i_i64[0];
    *((_QWORD *)&v8 + 1) = _mm_srli_si128(v5, 8).m128i_u64[0];
    sub_18007C95C(v4, &unk_1801C80F8);
    v6 = (__m128i)_mm_sub_ps(*(__m128 *)(*(_QWORD *)(a1 + 216) + 256LL), *(__m128 *)(*(_QWORD *)(a1 + 216) + 272LL));
    *(_QWORD *)&v8 = v6.m128i_i64[0];
    *((_QWORD *)&v8 + 1) = _mm_srli_si128(v6, 8).m128i_u64[0];
    sub_18007C95C(v4, &unk_1801C8118);
    sub_18007C95C(v4, &unk_1801C8138);
    sub_18007C95C(v4, &unk_1801C8158);
    sub_18007C95C(v4, &unk_1801C8178);
    sub_18007C95C(v4, &unk_1801C8198);
    v8 = *(_OWORD *)(*(_QWORD *)(a1 + 216) + 336LL);
    sub_18007C95C(v4, &unk_1801C81B8);
    sub_180073B34(v19, (const void *)(*(_QWORD *)(a1 + 216) + 496LL), *(_QWORD *)(a1 + 216) + 544LL);
    sub_18007C9B8(v4, &unk_1801C81D8, v19);
    sub_180073B34(v18, (const void *)(*(_QWORD *)(a1 + 216) + 544LL), *(_QWORD *)(a1 + 216) + 592LL);
    sub_18007C9B8(v4, &unk_1801C81F8, v18);
    sub_180073B34(v17, (const void *)(*(_QWORD *)(a1 + 216) + 448LL), *(_QWORD *)(a1 + 216) + 496LL);
    sub_18007C9B8(v4, &unk_1801C8278, v17);
    sub_180073B34(v16, (const void *)(*(_QWORD *)(a1 + 216) + 400LL), *(_QWORD *)(a1 + 216) + 448LL);
    sub_18007C9B8(v4, &unk_1801C8258, v16);
    sub_180073B34(v15, (const void *)(*(_QWORD *)(a1 + 216) + 352LL), *(_QWORD *)(a1 + 216) + 400LL);
    sub_18007C9B8(v4, &unk_1801C8238, v15);
    sub_180073A90(v14, *(const void **)(a1 + 216), *(_QWORD *)(a1 + 216) + 192LL);
    sub_18007C454(v4, &unk_1801C8218, v14);
    sub_180075A00(v14);
    sub_180075A3C(v15);
    sub_180075A3C(v16);
    sub_180075A3C(v17);
    sub_180075A3C(v18);
    sub_180075A3C(v19);
  }
  if ( v12 )
    sub_18001060C(v12);
  sub_1800131E0((__int64)v20);
  sub_1800131E0((__int64)v21);
  if ( v10 )
    sub_18001060C(v10);
  result = sub_18000B6A4(
             (__int64)v22,
             16LL,
             3LL,
             (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  if ( *((_QWORD *)&v13 + 1) )
    return sub_18001060C(*((__int64 *)&v13 + 1));
  return result;
}
