/*
 * XREFs of sub_1800D1670 @ 0x1800D1670
 * Callers:
 *     sub_1800CDE88 @ 0x1800CDE88 (sub_1800CDE88.c)
 *     sub_1800CE11C @ 0x1800CE11C (sub_1800CE11C.c)
 *     sub_1800CE3F4 @ 0x1800CE3F4 (sub_1800CE3F4.c)
 *     sub_1800CE734 @ 0x1800CE734 (sub_1800CE734.c)
 *     sub_1800CE930 @ 0x1800CE930 (sub_1800CE930.c)
 *     sub_1800CEAD4 @ 0x1800CEAD4 (sub_1800CEAD4.c)
 *     sub_1800CEC7C @ 0x1800CEC7C (sub_1800CEC7C.c)
 *     sub_1800CEE54 @ 0x1800CEE54 (sub_1800CEE54.c)
 *     sub_1800D04B0 @ 0x1800D04B0 (sub_1800D04B0.c)
 *     sub_1800D0674 @ 0x1800D0674 (sub_1800D0674.c)
 *     sub_1800D0760 @ 0x1800D0760 (sub_1800D0760.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D1B8 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_18001E480 @ 0x18001E480 (sub_18001E480.c)
 *     sub_18005DBD8 @ 0x18005DBD8 (sub_18005DBD8.c)
 */

bool __fastcall sub_1800D1670(__int64 a1, _WORD *a2)
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
  v3 = sub_1800130AC((__int64)v11);
  v6 = sub_18001E480(v4, v3, v5);
  v7 = sub_18005DBD8((_QWORD *)(a1 + 64), &v10, (__int64)v11, v6)[1];
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 72);
  v8 = v7 != *(_QWORD *)(a1 + 72);
  sub_180013128((__int64)v11);
  return v8;
}
