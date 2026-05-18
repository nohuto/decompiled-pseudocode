/*
 * XREFs of sub_1800932F0 @ 0x1800932F0
 * Callers:
 *     sub_180094A00 @ 0x180094A00 (sub_180094A00.c)
 * Callees:
 *     sub_180093250 @ 0x180093250 (sub_180093250.c)
 */

__int64 *__fastcall sub_1800932F0(__int64 a1)
{
  unsigned int i; // ebx
  __int64 *result; // rax

  *(_BYTE *)(a1 + 4620) = 1;
  for ( i = 0; i < 6; ++i )
  {
    result = (__int64 *)*(unsigned int *)(a1 + 4616);
    if ( _bittest((const int *)&result, i) )
      result = sub_180093250((__int64 *)(((unsigned __int64)i << 8) + a1 + 8), ((unsigned __int64)i << 8) + a1 + 3080);
  }
  return result;
}
