/*
 * XREFs of sub_14000E7B0 @ 0x14000E7B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000E750 @ 0x14000E750 (sub_14000E750.c)
 */

__int64 __fastcall sub_14000E7B0(__int64 *a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  __int64 result; // rax

  if ( a3 != -1 )
    return sub_14000E750(a1, a2, a3, a4, a5);
  result = 0LL;
  if ( !BYTE1(a1[11 * a2 + 16]) )
    return sub_14000E750(a1, a2, a3, a4, a5);
  return result;
}
