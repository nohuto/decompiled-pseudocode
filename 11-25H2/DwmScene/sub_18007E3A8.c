/*
 * XREFs of sub_18007E3A8 @ 0x18007E3A8
 * Callers:
 *     sub_18005B398 @ 0x18005B398 (sub_18005B398.c)
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18007E444 @ 0x18007E444 (sub_18007E444.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18007E3A8(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD v8[4]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v9[32]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v10; // [rsp+70h] [rbp-28h]

  v10 = a2;
  v4 = **(_QWORD **)(a1 + 24);
  v5 = std::string::string(v8, byte_1800F6C80);
  v6 = sub_180016F54((__int64)v9, a2);
  sub_18007E444(a1, v6, v4, v5);
  return sub_180011A5C(a2);
}
