/*
 * XREFs of AslStringPatternMatchExA @ 0x140947850
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x140943014 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140947608 (SdbpFindFirstIndexedWildCardTag.c)
 *     AslStringPatternMatchExA @ 0x140947850 (AslStringPatternMatchExA.c)
 * Callees:
 *     toupper @ 0x1404FD460 (toupper.c)
 *     AslStringPatternMatchExA @ 0x140947850 (AslStringPatternMatchExA.c)
 */

__int64 __fastcall AslStringPatternMatchExA(char *a1, _BYTE *a2)
{
  int v2; // eax
  char *v4; // rdi
  int v6; // ebx
  int v7; // ebx

  LOBYTE(v2) = *a1;
  v4 = a1;
  while ( (_BYTE)v2 )
  {
    if ( (_BYTE)v2 == 63 )
      goto LABEL_4;
    if ( (_BYTE)v2 != 42 )
      goto LABEL_16;
    v2 = v4[1];
    if ( v4[1] == 42 )
    {
      ++v4;
    }
    else
    {
      if ( !(_BYTE)v2 )
        return 1LL;
      if ( (_BYTE)v2 == *a2 || (v6 = toupper(v2), v6 == toupper((char)*a2)) )
      {
        if ( (unsigned int)AslStringPatternMatchExA(v4 + 1, a2) )
          return 1LL;
      }
LABEL_5:
      if ( !*a2 )
        return 0LL;
      LOBYTE(v2) = *v4;
      ++a2;
    }
  }
  if ( !*a2 )
    return 1LL;
LABEL_16:
  if ( (_BYTE)v2 == *a2 || (v7 = toupper((char)*a2), toupper(*v4) == v7) )
  {
LABEL_4:
    ++v4;
    goto LABEL_5;
  }
  return 0LL;
}
