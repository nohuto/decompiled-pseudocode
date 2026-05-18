/*
 * XREFs of sub_1800CDF58 @ 0x1800CDF58
 * Callers:
 *     sub_1800CDFE8 @ 0x1800CDFE8 (sub_1800CDFE8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D318 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_1800D0130 @ 0x1800D0130 (sub_1800D0130.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800CDF58(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rbx
  _WORD *v6; // rax
  _DWORD *v7; // rax
  _BYTE v9[32]; // [rsp+28h] [rbp-30h] BYREF

  v5 = a1 + 64;
  v6 = (_WORD *)sub_1800131AC(a2);
  std::wstring::wstring((__int64)v9, v6);
  v7 = (_DWORD *)sub_1800D0130(v5, v9);
  v7[10] = a3;
  *v7 = 1;
  sub_180013228((__int64)v9);
  return sub_180013228(a2);
}
