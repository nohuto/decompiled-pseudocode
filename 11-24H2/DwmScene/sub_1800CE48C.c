/*
 * XREFs of sub_1800CE48C @ 0x1800CE48C
 * Callers:
 *     sub_1800CE554 @ 0x1800CE554 (sub_1800CE554.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D318 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_1800306E0 @ 0x1800306E0 (sub_1800306E0.c)
 *     sub_1800D0130 @ 0x1800D0130 (sub_1800D0130.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800CE48C(__int64 a1, __int64 a2, __int64 a3)
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
  v6 = (_WORD *)sub_1800131AC(a2);
  std::wstring::wstring((__int64)v13, v6);
  v7 = (_DWORD *)sub_1800D0130(v5, v13);
  v9 = sub_180012444((__int64)v10, a3);
  sub_1800306E0((__int64)(v7 + 2), v9);
  *v7 = 0;
  sub_180013228(v9);
  sub_180013228((__int64)v13);
  sub_180013228(a2);
  return sub_180013228(a3);
}
