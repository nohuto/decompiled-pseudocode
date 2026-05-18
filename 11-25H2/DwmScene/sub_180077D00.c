/*
 * XREFs of sub_180077D00 @ 0x180077D00
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
 *     sub_18007C858 @ 0x18007C858 (sub_18007C858.c)
 *     sub_180099028 @ 0x180099028 (sub_180099028.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_180077D00(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v6; // [rsp+38h] [rbp-C8h]
  __int64 v7; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+48h] [rbp-B8h]
  __int64 v9; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v10; // [rsp+58h] [rbp-A8h]
  __int128 v11; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v12[3]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v13[3]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v14[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v15[3]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v16[3]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v17[24]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v18[24]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v19[48]; // [rsp+118h] [rbp+18h] BYREF

  unknown_libname_81(&v7, (_QWORD *)(a1 + 56));
  result = sub_18005BB88(v7, &v5, 9);
  if ( v8 )
    result = sub_18001050C(v8);
  if ( v5 )
  {
    v11 = 0LL;
    sub_18000CBBC(
      (__int64)v19,
      16LL,
      3LL,
      (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
    sub_180011B04(*a2 + 56LL, &v9);
    sub_18001258C(v9, &v7);
    if ( v10 )
      sub_18001050C(v10);
    sub_180011EC8(v7, (__int64)v18);
    sub_180073AE8(v7, (__int64)v17);
    sub_180099028((unsigned int)v18, (unsigned int)v17, a1 + 112, (unsigned int)&v11, (__int64)v19);
    sub_1800739D4(v16, (const void *)(*(_QWORD *)(a1 + 176) + 496LL), *(_QWORD *)(a1 + 176) + 544LL);
    sub_18007C858(v5, &unk_1801C71C8, v16);
    sub_1800739D4(v15, (const void *)(*(_QWORD *)(a1 + 176) + 544LL), *(_QWORD *)(a1 + 176) + 592LL);
    sub_18007C858(v5, &unk_1801C71E8, v15);
    sub_1800739D4(v14, (const void *)(*(_QWORD *)(a1 + 176) + 448LL), *(_QWORD *)(a1 + 176) + 496LL);
    sub_18007C858(v5, &unk_1801C7268, v14);
    sub_1800739D4(v13, (const void *)(*(_QWORD *)(a1 + 176) + 352LL), *(_QWORD *)(a1 + 176) + 400LL);
    sub_18007C858(v5, &unk_1801C7228, v13);
    sub_180073930(v12, *(const void **)(a1 + 176), *(_QWORD *)(a1 + 176) + 192LL);
    sub_18007C2F4(v5, &unk_1801C7208, v12);
    sub_1800758A0((__int64)v12);
    sub_1800758DC((__int64)v13);
    sub_1800758DC((__int64)v14);
    sub_1800758DC((__int64)v15);
    sub_1800758DC((__int64)v16);
    sub_1800130E0((__int64)v17);
    sub_1800130E0((__int64)v18);
    if ( v8 )
      sub_18001050C(v8);
    result = sub_18000B2D4(
               (__int64)v19,
               16LL,
               3LL,
               (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
    if ( *((_QWORD *)&v11 + 1) )
      result = sub_18001050C(*((__int64 *)&v11 + 1));
  }
  if ( v6 )
    return sub_18001050C(v6);
  return result;
}
