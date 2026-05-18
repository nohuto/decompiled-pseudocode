/*
 * XREFs of sub_1800CE32C @ 0x1800CE32C
 * Callers:
 *     sub_1800CE3F4 @ 0x1800CE3F4 (sub_1800CE3F4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D1B8 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_180030580 @ 0x180030580 (sub_180030580.c)
 *     sub_1800CFFD0 @ 0x1800CFFD0 (sub_1800CFFD0.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800CE32C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  _WORD *v6; // rax
  _DWORD *v7; // rdi
  __int64 v9; // [rsp+20h] [rbp-78h]
  _BYTE v10[32]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v11; // [rsp+48h] [rbp-50h]
  __int64 v12; // [rsp+50h] [rbp-48h]
  _BYTE v13[32]; // [rsp+58h] [rbp-40h] BYREF

  v11 = a2;
  v12 = a3;
  v5 = a1 + 64;
  v6 = (_WORD *)sub_1800130AC(a2);
  std::wstring::wstring((__int64)v13, v6);
  v7 = (_DWORD *)sub_1800CFFD0(v5, v13);
  v9 = sub_180012344((__int64)v10, a3);
  sub_180030580((__int64)(v7 + 2), v9);
  *v7 = 0;
  sub_180013128(v9);
  sub_180013128((__int64)v13);
  sub_180013128(a2);
  return sub_180013128(a3);
}
