/*
 * XREFs of sub_180038A84 @ 0x180038A84
 * Callers:
 *     sub_180037FCC @ 0x180037FCC (sub_180037FCC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180038A84(__int64 *a1, __int64 *a2)
{
  __int64 *i; // r8
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax

  for ( i = a1; i != a2; a2[1] = v4 )
  {
    a2 -= 2;
    if ( i == a2 )
      break;
    v3 = *i;
    *i = *a2;
    *a2 = v3;
    v4 = i[1];
    result = a2[1];
    i[1] = result;
    i += 2;
  }
  return result;
}
