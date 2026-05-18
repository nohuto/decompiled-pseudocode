/*
 * XREFs of sub_180089010 @ 0x180089010
 * Callers:
 *     <none>
 * Callees:
 *     sub_180087A3C @ 0x180087A3C (sub_180087A3C.c)
 */

__int64 *__fastcall sub_180089010(__int64 a1, __int64 a2)
{
  __int64 *v2; // rcx
  __int64 *result; // rax

  v2 = *(__int64 **)(a1 + 16);
  if ( v2 )
    return sub_180087A3C(v2, a2);
  return result;
}
