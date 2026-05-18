/*
 * XREFs of sub_1800C22D0 @ 0x1800C22D0
 * Callers:
 *     sub_1800C0598 @ 0x1800C0598 (sub_1800C0598.c)
 *     sub_1800C1490 @ 0x1800C1490 (sub_1800C1490.c)
 *     sub_1800C1F10 @ 0x1800C1F10 (sub_1800C1F10.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18001CF4C @ 0x18001CF4C (sub_18001CF4C.c)
 *     sub_18001F140 @ 0x18001F140 (sub_18001F140.c)
 *     sub_18001F364 @ 0x18001F364 (sub_18001F364.c)
 *     sub_18001F4BC @ 0x18001F4BC (sub_18001F4BC.c)
 *     ?str@?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEGBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18001FCD8 (-str@-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEGBA-AV-$basic_string@D.c)
 *     sub_1800BFF2C @ 0x1800BFF2C (sub_1800BFF2C.c)
 *     sub_1800C239C @ 0x1800C239C (sub_1800C239C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C22D0(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  _BYTE v11[16]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v12[240]; // [rsp+40h] [rbp-138h] BYREF
  _BYTE v13[32]; // [rsp+130h] [rbp-48h] BYREF

  sub_18001F364((__int64)v11);
  v6 = sub_18001F140((__int64)v12, (__int64)"desc=");
  v7 = sub_1800BFF2C(v6, a2);
  v8 = sub_18001F140(v7, (__int64)", subresourceData=");
  v9 = sub_1800C239C(v13, a3);
  sub_18001CF4C(v8, v9);
  sub_180011B5C((__int64)v13);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str((__int64)v11, a1);
  sub_18001F4BC((__int64)v11);
  return a1;
}
