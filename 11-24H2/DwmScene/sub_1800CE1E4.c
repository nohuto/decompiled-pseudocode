/*
 * XREFs of sub_1800CE1E4 @ 0x1800CE1E4
 * Callers:
 *     sub_1800CE27C @ 0x1800CE27C (sub_1800CE27C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D318 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_1800D0130 @ 0x1800D0130 (sub_1800D0130.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800CE1E4(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rbx
  _WORD *v5; // rax
  __int64 v6; // rax
  _BYTE v8[32]; // [rsp+28h] [rbp-40h] BYREF

  v4 = a1 + 64;
  v5 = (_WORD *)sub_1800131AC(a2);
  std::wstring::wstring((__int64)v8, v5);
  v6 = sub_1800D0130(v4, v8);
  *(double *)(v6 + 48) = a3;
  *(_DWORD *)v6 = 2;
  sub_180013228((__int64)v8);
  return sub_180013228(a2);
}
