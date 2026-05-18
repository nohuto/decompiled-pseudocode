/*
 * XREFs of sub_18002BF54 @ 0x18002BF54
 * Callers:
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_180031D5C @ 0x180031D5C (sub_180031D5C.c)
 *     sub_180033AB8 @ 0x180033AB8 (sub_180033AB8.c)
 *     sub_18003E14C @ 0x18003E14C (sub_18003E14C.c)
 *     sub_18003EA7C @ 0x18003EA7C (sub_18003EA7C.c)
 *     sub_180061660 @ 0x180061660 (sub_180061660.c)
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 *     sub_1800B9D90 @ 0x1800B9D90 (sub_1800B9D90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001D3E8 @ 0x18001D3E8 (sub_18001D3E8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002BF54(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _BYTE v5[32]; // [rsp+30h] [rbp-38h] BYREF

  v3 = sub_18001D3E8((__int64)v5, a2);
  sub_180016F54(a1, v3);
  sub_180011A5C((__int64)v5);
  return a1;
}
