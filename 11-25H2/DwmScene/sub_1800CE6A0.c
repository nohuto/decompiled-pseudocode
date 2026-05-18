/*
 * XREFs of sub_1800CE6A0 @ 0x1800CE6A0
 * Callers:
 *     sub_1800CE734 @ 0x1800CE734 (sub_1800CE734.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D1B8 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_1800CFFD0 @ 0x1800CFFD0 (sub_1800CFFD0.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800CE6A0(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rbx
  _WORD *v6; // rax
  __int64 v7; // rax
  _BYTE v9[32]; // [rsp+28h] [rbp-30h] BYREF

  v5 = a1 + 64;
  v6 = (_WORD *)sub_1800130AC(a2);
  std::wstring::wstring((__int64)v9, v6);
  v7 = sub_1800CFFD0(v5, v9);
  *(_BYTE *)(v7 + 60) = a3;
  *(_DWORD *)v7 = 4;
  sub_180013128((__int64)v9);
  return sub_180013128(a2);
}
