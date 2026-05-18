/*
 * XREFs of sub_1800751E0 @ 0x1800751E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18000CBBC @ 0x18000CBBC (sub_18000CBBC.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180011EC8 @ 0x180011EC8 (sub_180011EC8.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 *     sub_18005BB88 @ 0x18005BB88 (sub_18005BB88.c)
 *     sub_180073930 @ 0x180073930 (sub_180073930.c)
 *     sub_1800739D4 @ 0x1800739D4 (sub_1800739D4.c)
 *     sub_180073AE8 @ 0x180073AE8 (sub_180073AE8.c)
 *     sub_1800758A0 @ 0x1800758A0 (sub_1800758A0.c)
 *     sub_1800758DC @ 0x1800758DC (sub_1800758DC.c)
 *     sub_18007C2F4 @ 0x18007C2F4 (sub_18007C2F4.c)
 *     sub_18007C7FC @ 0x18007C7FC (sub_18007C7FC.c)
 *     sub_18007C858 @ 0x18007C858 (sub_18007C858.c)
 *     sub_180099028 @ 0x180099028 (sub_180099028.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_1800751E0(__int64 a1, _QWORD *a2)
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
  sub_18000CBBC((__int64)v22, 16LL, 3LL, (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  sub_180011B04(*a2 + 56LL, &v8);
  sub_18001258C(v8, &v9);
  if ( *((_QWORD *)&v8 + 1) )
    sub_18001050C(*((__int64 *)&v8 + 1));
  sub_180011EC8(v9, (__int64)v21);
  sub_180073AE8(v9, (__int64)v20);
  sub_180099028((unsigned int)v21, (unsigned int)v20, a1 + 152, (unsigned int)&v13, (__int64)v22);
  unknown_libname_81(&v8, (_QWORD *)(a1 + 56));
  sub_18005BB88(v8, &v11, 9);
  if ( *((_QWORD *)&v8 + 1) )
    sub_18001050C(*((__int64 *)&v8 + 1));
  v4 = v11;
  if ( v11 )
  {
    sub_18007C7FC(v11, &unk_1801C7088);
    sub_18007C7FC(v4, &unk_1801C70A8);
    sub_18007C7FC(v4, &unk_1801C70C8);
    v5 = (__m128i)_mm_sub_ps(*(__m128 *)(*(_QWORD *)(a1 + 216) + 240LL), *(__m128 *)(*(_QWORD *)(a1 + 216) + 272LL));
    *(_QWORD *)&v8 = v5.m128i_i64[0];
    *((_QWORD *)&v8 + 1) = _mm_srli_si128(v5, 8).m128i_u64[0];
    sub_18007C7FC(v4, &unk_1801C70E8);
    v6 = (__m128i)_mm_sub_ps(*(__m128 *)(*(_QWORD *)(a1 + 216) + 256LL), *(__m128 *)(*(_QWORD *)(a1 + 216) + 272LL));
    *(_QWORD *)&v8 = v6.m128i_i64[0];
    *((_QWORD *)&v8 + 1) = _mm_srli_si128(v6, 8).m128i_u64[0];
    sub_18007C7FC(v4, &unk_1801C7108);
    sub_18007C7FC(v4, &unk_1801C7128);
    sub_18007C7FC(v4, &unk_1801C7148);
    sub_18007C7FC(v4, &unk_1801C7168);
    sub_18007C7FC(v4, &unk_1801C7188);
    v8 = *(_OWORD *)(*(_QWORD *)(a1 + 216) + 336LL);
    sub_18007C7FC(v4, &unk_1801C71A8);
    sub_1800739D4(v19, (const void *)(*(_QWORD *)(a1 + 216) + 496LL), *(_QWORD *)(a1 + 216) + 544LL);
    sub_18007C858(v4, &unk_1801C71C8, v19);
    sub_1800739D4(v18, (const void *)(*(_QWORD *)(a1 + 216) + 544LL), *(_QWORD *)(a1 + 216) + 592LL);
    sub_18007C858(v4, &unk_1801C71E8, v18);
    sub_1800739D4(v17, (const void *)(*(_QWORD *)(a1 + 216) + 448LL), *(_QWORD *)(a1 + 216) + 496LL);
    sub_18007C858(v4, &unk_1801C7268, v17);
    sub_1800739D4(v16, (const void *)(*(_QWORD *)(a1 + 216) + 400LL), *(_QWORD *)(a1 + 216) + 448LL);
    sub_18007C858(v4, &unk_1801C7248, v16);
    sub_1800739D4(v15, (const void *)(*(_QWORD *)(a1 + 216) + 352LL), *(_QWORD *)(a1 + 216) + 400LL);
    sub_18007C858(v4, &unk_1801C7228, v15);
    sub_180073930(v14, *(const void **)(a1 + 216), *(_QWORD *)(a1 + 216) + 192LL);
    sub_18007C2F4(v4, &unk_1801C7208, v14);
    sub_1800758A0(v14);
    sub_1800758DC(v15);
    sub_1800758DC(v16);
    sub_1800758DC(v17);
    sub_1800758DC(v18);
    sub_1800758DC(v19);
  }
  if ( v12 )
    sub_18001050C(v12);
  sub_1800130E0((__int64)v20);
  sub_1800130E0((__int64)v21);
  if ( v10 )
    sub_18001050C(v10);
  result = sub_18000B2D4(
             (__int64)v22,
             16LL,
             3LL,
             (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  if ( *((_QWORD *)&v13 + 1) )
    return sub_18001050C(*((__int64 *)&v13 + 1));
  return result;
}
