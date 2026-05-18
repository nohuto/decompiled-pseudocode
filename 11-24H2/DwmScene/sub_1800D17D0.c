/*
 * XREFs of sub_1800D17D0 @ 0x1800D17D0
 * Callers:
 *     sub_1800CDFE8 @ 0x1800CDFE8 (sub_1800CDFE8.c)
 *     sub_1800CE27C @ 0x1800CE27C (sub_1800CE27C.c)
 *     sub_1800CE554 @ 0x1800CE554 (sub_1800CE554.c)
 *     sub_1800CE894 @ 0x1800CE894 (sub_1800CE894.c)
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 *     sub_1800CEC34 @ 0x1800CEC34 (sub_1800CEC34.c)
 *     sub_1800CEDDC @ 0x1800CEDDC (sub_1800CEDDC.c)
 *     sub_1800CEFB4 @ 0x1800CEFB4 (sub_1800CEFB4.c)
 *     sub_1800D0610 @ 0x1800D0610 (sub_1800D0610.c)
 *     sub_1800D07D4 @ 0x1800D07D4 (sub_1800D07D4.c)
 *     sub_1800D08C0 @ 0x1800D08C0 (sub_1800D08C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D318 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     sub_18005DD38 @ 0x18005DD38 (sub_18005DD38.c)
 */

bool __fastcall sub_1800D17D0(__int64 a1, _WORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  bool v8; // bl
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-38h] BYREF

  std::wstring::wstring((__int64)v11, a2);
  v3 = sub_1800131AC((__int64)v11);
  v6 = sub_18001E5E0(v4, v3, v5);
  v7 = sub_18005DD38((_QWORD *)(a1 + 64), &v10, (__int64)v11, v6)[1];
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 72);
  v8 = v7 != *(_QWORD *)(a1 + 72);
  sub_180013228((__int64)v11);
  return v8;
}
