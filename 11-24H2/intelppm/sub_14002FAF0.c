/*
 * XREFs of sub_14002FAF0 @ 0x14002FAF0
 * Callers:
 *     sub_1400470A0 @ 0x1400470A0 (sub_1400470A0.c)
 * Callees:
 *     sub_14002F0C0 @ 0x14002F0C0 (sub_14002F0C0.c)
 */

__int64 __fastcall sub_14002FAF0(__int64 a1, const wchar_t *a2)
{
  __int64 result; // rax
  __int64 i; // rbx

  if ( !a1 )
    return 3221225473LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
  {
    result = sub_14002F0C0(a1 + 80 * i + 24, 0LL, a2);
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
