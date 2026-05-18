/*
 * XREFs of sub_1800355DC @ 0x1800355DC
 * Callers:
 *     sub_180031F90 @ 0x180031F90 (sub_180031F90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D1B8 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_18002378C @ 0x18002378C (sub_18002378C.c)
 *     sub_180030580 @ 0x180030580 (sub_180030580.c)
 *     sub_180030CCC @ 0x180030CCC (sub_180030CCC.c)
 *     sub_1800323E8 @ 0x1800323E8 (sub_1800323E8.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800355DC(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 *v4; // rax
  float v5; // xmm0_4
  __int64 v6; // rax
  float v7; // xmm1_4
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+28h] [rbp-50h]
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-40h] BYREF

  sub_1800323E8(a1, &v8);
  v2 = v8;
  v3 = *(_QWORD *)(v8 + 24);
  v4 = sub_180011B8C(&v10);
  v5 = sub_18002378C(*v4 - v3);
  v6 = *(_QWORD *)(v2 + 280);
  if ( *(_QWORD *)(v2 + 272) == v6 )
    v7 = -3.4028235e38;
  else
    v7 = *(float *)(v6 - 4);
  std::wstring::wstring((__int64)v11, L"CPU");
  sub_180030580(a1 + 1344, (__int64)v11);
  sub_180013128((__int64)v11);
  sub_180030CCC(a1 + 1320, v5 - v7);
  if ( v9 )
    sub_18001050C(v9);
}
