/*
 * XREFs of sub_1800BC294 @ 0x1800BC294
 * Callers:
 *     sub_1800BCCB0 @ 0x1800BCCB0 (sub_1800BCCB0.c)
 *     sub_1800CB460 @ 0x1800CB460 (sub_1800CB460.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 */

__int64 *__fastcall sub_1800BC294(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  v6 = v4;
  sub_18000E954(&v6);
  return a1;
}
