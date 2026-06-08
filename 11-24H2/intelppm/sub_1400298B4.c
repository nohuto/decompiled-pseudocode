/*
 * XREFs of sub_1400298B4 @ 0x1400298B4
 * Callers:
 *     sub_1400385B0 @ 0x1400385B0 (sub_1400385B0.c)
 *     sub_1400457E0 @ 0x1400457E0 (sub_1400457E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400298B4(int a1)
{
  int v1; // ecx
  int v2; // ecx
  __int64 result; // rax

  v1 = a1 - 1;
  if ( !v1 )
    return 4LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 8LL;
  result = 2LL;
  if ( v2 == 2 )
    return 16LL;
  return result;
}
