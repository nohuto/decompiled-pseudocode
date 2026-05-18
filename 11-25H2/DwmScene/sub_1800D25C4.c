/*
 * XREFs of sub_1800D25C4 @ 0x1800D25C4
 * Callers:
 *     sub_180024650 @ 0x180024650 (sub_180024650.c)
 *     sub_1800246D4 @ 0x1800246D4 (sub_1800246D4.c)
 *     sub_1800246E0 @ 0x1800246E0 (sub_1800246E0.c)
 *     sub_18002FF48 @ 0x18002FF48 (sub_18002FF48.c)
 *     sub_18003D924 @ 0x18003D924 (sub_18003D924.c)
 *     sub_18005AD84 @ 0x18005AD84 (sub_18005AD84.c)
 *     sub_180095864 @ 0x180095864 (sub_180095864.c)
 *     sub_18009595C @ 0x18009595C (sub_18009595C.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800D25F4 @ 0x1800D25F4 (sub_1800D25F4.c)
 */

__int64 __fastcall sub_1800D25C4(_QWORD *a1)
{
  void *v1; // rbx
  __int64 result; // rax

  v1 = (void *)*a1;
  if ( *a1 )
  {
    sub_1800D25F4(*a1);
    return sub_18000B77C(v1);
  }
  return result;
}
