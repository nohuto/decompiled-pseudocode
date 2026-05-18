/*
 * XREFs of sub_180028904 @ 0x180028904
 * Callers:
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_18002869C @ 0x18002869C (sub_18002869C.c)
 *     sub_180028730 @ 0x180028730 (sub_180028730.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_1800288C4 @ 0x1800288C4 (sub_1800288C4.c)
 * Callees:
 *     sub_180028478 @ 0x180028478 (sub_180028478.c)
 *     sub_180028614 @ 0x180028614 (sub_180028614.c)
 */

bool __fastcall sub_180028904(__int64 a1, char a2)
{
  __int64 *v2; // rbx
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = sub_180028478(a1, &v4, a2);
  return *v2 != sub_180028614()[1];
}
