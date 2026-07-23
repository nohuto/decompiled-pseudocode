/*
 * XREFs of ExpTranslateHexStringToULONG @ 0x1407BD804
 * Callers:
 *     ExpParseSignatureName @ 0x1407BC480 (ExpParseSignatureName.c)
 * Callees:
 *     towlower @ 0x1404FD4D0 (towlower.c)
 */

__int64 __fastcall ExpTranslateHexStringToULONG(__int64 a1, int *a2)
{
  __int64 v2; // rdi
  int v4; // ebx
  unsigned int i; // esi
  wint_t v7; // ax
  int v8; // ebx

  v2 = -1LL;
  v4 = 0;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  if ( (unsigned int)v2 > 8 )
    return 3221225485LL;
  for ( i = 0; i < (unsigned int)v2; ++i )
  {
    v7 = towlower(*(_WORD *)(a1 + 2LL * i));
    if ( (unsigned __int16)(v7 - 48) > 9u )
    {
      if ( (unsigned __int16)(v7 - 97) > 5u )
        return 3221225485LL;
      v8 = 16 * v4 - 87;
    }
    else
    {
      v8 = 16 * v4 - 48;
    }
    v4 = v7 + v8;
  }
  *a2 = v4;
  return 0LL;
}
