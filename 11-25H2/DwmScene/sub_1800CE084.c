/*
 * XREFs of sub_1800CE084 @ 0x1800CE084
 * Callers:
 *     sub_1800CE11C @ 0x1800CE11C (sub_1800CE11C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D1B8 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_1800CFFD0 @ 0x1800CFFD0 (sub_1800CFFD0.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800CE084(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rbx
  _WORD *v5; // rax
  __int64 v6; // rax
  _BYTE v8[32]; // [rsp+28h] [rbp-40h] BYREF

  v4 = a1 + 64;
  v5 = (_WORD *)sub_1800130AC(a2);
  std::wstring::wstring((__int64)v8, v5);
  v6 = sub_1800CFFD0(v4, v8);
  *(double *)(v6 + 48) = a3;
  *(_DWORD *)v6 = 2;
  sub_180013128((__int64)v8);
  return sub_180013128(a2);
}
