/*
 * XREFs of sub_18003573C @ 0x18003573C
 * Callers:
 *     sub_1800320F0 @ 0x1800320F0 (sub_1800320F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C8C @ 0x180011C8C (sub_180011C8C.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D318 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_1800238EC @ 0x1800238EC (sub_1800238EC.c)
 *     sub_1800306E0 @ 0x1800306E0 (sub_1800306E0.c)
 *     sub_180030E2C @ 0x180030E2C (sub_180030E2C.c)
 *     sub_180032548 @ 0x180032548 (sub_180032548.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18003573C(__int64 a1)
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

  sub_180032548(a1, &v8);
  v2 = v8;
  v3 = *(_QWORD *)(v8 + 24);
  v4 = sub_180011C8C(&v10);
  v5 = sub_1800238EC(*v4 - v3);
  v6 = *(_QWORD *)(v2 + 280);
  if ( *(_QWORD *)(v2 + 272) == v6 )
    v7 = -3.4028235e38;
  else
    v7 = *(float *)(v6 - 4);
  std::wstring::wstring((__int64)v11, L"CPU");
  sub_1800306E0(a1 + 1344, (__int64)v11);
  sub_180013228((__int64)v11);
  sub_180030E2C(a1 + 1320, v5 - v7);
  if ( v9 )
    sub_18001060C(v9);
}
