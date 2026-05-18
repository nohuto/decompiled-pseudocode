/*
 * XREFs of sub_180010A74 @ 0x180010A74
 * Callers:
 *     sub_180010AE8 @ 0x180010AE8 (sub_180010AE8.c)
 *     sub_1800380FC @ 0x1800380FC (sub_1800380FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010A74(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = *a2;
  result = a2[1];
  a1[1] = result;
  *a2 = 0LL;
  a2[1] = 0LL;
  return result;
}
