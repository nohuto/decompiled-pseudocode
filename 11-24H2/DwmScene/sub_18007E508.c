/*
 * XREFs of sub_18007E508 @ 0x18007E508
 * Callers:
 *     sub_18005B4F8 @ 0x18005B4F8 (sub_18005B4F8.c)
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18007E5A4 @ 0x18007E5A4 (sub_18007E5A4.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18007E508(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD v8[4]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v9[32]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v10; // [rsp+70h] [rbp-28h]

  v10 = a2;
  v4 = **(_QWORD **)(a1 + 24);
  v5 = std::string::string(v8, byte_1800F7C80);
  v6 = sub_180017054((__int64)v9, a2);
  sub_18007E5A4(a1, v6, v4, v5);
  return sub_180011B5C(a2);
}
