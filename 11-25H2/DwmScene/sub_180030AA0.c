/*
 * XREFs of sub_180030AA0 @ 0x180030AA0
 * Callers:
 *     sub_18002C478 @ 0x18002C478 (sub_18002C478.c)
 *     sub_180037D2C @ 0x180037D2C (sub_180037D2C.c)
 *     sub_180037E6C @ 0x180037E6C (sub_180037E6C.c)
 *     sub_18003824C @ 0x18003824C (sub_18003824C.c)
 *     sub_180038360 @ 0x180038360 (sub_180038360.c)
 *     sub_180038EC4 @ 0x180038EC4 (sub_180038EC4.c)
 *     sub_18003AC70 @ 0x18003AC70 (sub_18003AC70.c)
 *     sub_1800533FC @ 0x1800533FC (sub_1800533FC.c)
 *     sub_18005A42C @ 0x18005A42C (sub_18005A42C.c)
 *     sub_18005ABAC @ 0x18005ABAC (sub_18005ABAC.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_180030AA0(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18001050C(v2);
  return a1;
}
