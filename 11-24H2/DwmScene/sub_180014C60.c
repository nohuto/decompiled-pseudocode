/*
 * XREFs of sub_180014C60 @ 0x180014C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800144FC @ 0x1800144FC (sub_1800144FC.c)
 */

__int64 __fastcall sub_180014C60(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = *a2 - 0x4BD1CD637052B94FLL;
  if ( *a2 == 0x4BD1CD637052B94FLL )
    result = a2[1] + 0x2492ED948E7B4D49LL;
  if ( !result )
    return sub_1800144FC(a1 + 16);
  return result;
}
