/*
 * XREFs of sub_1800C2170 @ 0x1800C2170
 * Callers:
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 *     sub_1800C1330 @ 0x1800C1330 (sub_1800C1330.c)
 *     sub_1800C1DB0 @ 0x1800C1DB0 (sub_1800C1DB0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18001CDEC @ 0x18001CDEC (sub_18001CDEC.c)
 *     sub_18001EFE0 @ 0x18001EFE0 (sub_18001EFE0.c)
 *     sub_18001F204 @ 0x18001F204 (sub_18001F204.c)
 *     sub_18001F35C @ 0x18001F35C (sub_18001F35C.c)
 *     ?str@?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEGBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18001FB78 (-str@-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEGBA-AV-$basic_string@D.c)
 *     sub_1800BFDCC @ 0x1800BFDCC (sub_1800BFDCC.c)
 *     sub_1800C223C @ 0x1800C223C (sub_1800C223C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C2170(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  _BYTE v11[16]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v12[240]; // [rsp+40h] [rbp-138h] BYREF
  _BYTE v13[32]; // [rsp+130h] [rbp-48h] BYREF

  sub_18001F204((__int64)v11);
  v6 = sub_18001EFE0((__int64)v12, (__int64)"desc=");
  v7 = sub_1800BFDCC(v6, a2);
  v8 = sub_18001EFE0(v7, (__int64)", subresourceData=");
  v9 = sub_1800C223C(v13, a3);
  sub_18001CDEC(v8, v9);
  sub_180011A5C((__int64)v13);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str((__int64)v11, a1);
  sub_18001F35C((__int64)v11);
  return a1;
}
