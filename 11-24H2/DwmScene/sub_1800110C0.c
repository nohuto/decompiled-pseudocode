/*
 * XREFs of sub_1800110C0 @ 0x1800110C0
 * Callers:
 *     sub_180011698 @ 0x180011698 (sub_180011698.c)
 *     sub_18001A400 @ 0x18001A400 (sub_18001A400.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 */

__int64 *__fastcall sub_1800110C0(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    sub_1800115D0(&v5);
    v5 = *a1;
    *a1 = a2;
    sub_18000E954(&v5);
  }
  return a1;
}
