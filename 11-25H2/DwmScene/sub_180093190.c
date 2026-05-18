/*
 * XREFs of sub_180093190 @ 0x180093190
 * Callers:
 *     sub_1800948A0 @ 0x1800948A0 (sub_1800948A0.c)
 * Callees:
 *     sub_1800930F0 @ 0x1800930F0 (sub_1800930F0.c)
 */

__int64 *__fastcall sub_180093190(__int64 a1)
{
  unsigned int i; // ebx
  __int64 *result; // rax

  *(_BYTE *)(a1 + 4620) = 1;
  for ( i = 0; i < 6; ++i )
  {
    result = (__int64 *)*(unsigned int *)(a1 + 4616);
    if ( _bittest((const int *)&result, i) )
      result = sub_1800930F0((__int64 *)(((unsigned __int64)i << 8) + a1 + 8), ((unsigned __int64)i << 8) + a1 + 3080);
  }
  return result;
}
