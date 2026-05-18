/*
 * XREFs of sub_180077E60 @ 0x180077E60
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
 *     sub_18007C9B8 @ 0x18007C9B8 (sub_18007C9B8.c)
 *     sub_180099188 @ 0x180099188 (sub_180099188.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_180077E60(__int64 a1, _QWORD *a2)
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
  result = sub_18005BCE8(v7, &v5, 9);
  if ( v8 )
    result = sub_18001060C(v8);
  if ( v5 )
  {
    v11 = 0LL;
    sub_18000CD2C(
      (__int64)v19,
      16LL,
      3LL,
      (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
    sub_180011C04(*a2 + 56LL, &v9);
    sub_18001268C(v9, &v7);
    if ( v10 )
      sub_18001060C(v10);
    sub_180011FC8(v7, (__int64)v18);
    sub_180073C48(v7, (__int64)v17);
    sub_180099188((unsigned int)v18, (unsigned int)v17, a1 + 112, (unsigned int)&v11, (__int64)v19);
    sub_180073B34(v16, (const void *)(*(_QWORD *)(a1 + 176) + 496LL), *(_QWORD *)(a1 + 176) + 544LL);
    sub_18007C9B8(v5, &unk_1801C81D8, v16);
    sub_180073B34(v15, (const void *)(*(_QWORD *)(a1 + 176) + 544LL), *(_QWORD *)(a1 + 176) + 592LL);
    sub_18007C9B8(v5, &unk_1801C81F8, v15);
    sub_180073B34(v14, (const void *)(*(_QWORD *)(a1 + 176) + 448LL), *(_QWORD *)(a1 + 176) + 496LL);
    sub_18007C9B8(v5, &unk_1801C8278, v14);
    sub_180073B34(v13, (const void *)(*(_QWORD *)(a1 + 176) + 352LL), *(_QWORD *)(a1 + 176) + 400LL);
    sub_18007C9B8(v5, &unk_1801C8238, v13);
    sub_180073A90(v12, *(const void **)(a1 + 176), *(_QWORD *)(a1 + 176) + 192LL);
    sub_18007C454(v5, &unk_1801C8218, v12);
    sub_180075A00((__int64)v12);
    sub_180075A3C((__int64)v13);
    sub_180075A3C((__int64)v14);
    sub_180075A3C((__int64)v15);
    sub_180075A3C((__int64)v16);
    sub_1800131E0((__int64)v17);
    sub_1800131E0((__int64)v18);
    if ( v8 )
      sub_18001060C(v8);
    result = sub_18000B6A4(
               (__int64)v19,
               16LL,
               3LL,
               (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
    if ( *((_QWORD *)&v11 + 1) )
      result = sub_18001060C(*((__int64 *)&v11 + 1));
  }
  if ( v6 )
    return sub_18001060C(v6);
  return result;
}
