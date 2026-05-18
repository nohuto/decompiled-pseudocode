/*
 * XREFs of sub_18003696C @ 0x18003696C
 * Callers:
 *     sub_18002BC74 @ 0x18002BC74 (sub_18002BC74.c)
 *     sub_18005CC84 @ 0x18005CC84 (sub_18005CC84.c)
 * Callees:
 *     sub_18002D5A4 @ 0x18002D5A4 (sub_18002D5A4.c)
 *     sub_18002DB30 @ 0x18002DB30 (sub_18002DB30.c)
 */

_BOOL8 __fastcall sub_18003696C(__int64 a1, _QWORD *a2)
{
  __int64 **v3; // rax
  __int64 v4; // rcx
  __int64 *v6; // [rsp+20h] [rbp-28h] BYREF

  v3 = sub_18002D5A4(a1, &v6, a2);
  return sub_18002DB30(v4, (__int64)v3[2], a2);
}
