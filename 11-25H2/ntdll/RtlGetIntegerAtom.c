/*
 * XREFs of RtlGetIntegerAtom @ 0x1800E1B60
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x18005BFF0 (RtlUnicodeStringToInteger.c)
 */

char __fastcall RtlGetIntegerAtom(unsigned __int64 a1, _WORD *a2)
{
  _WORD *v4; // rcx
  _WORD *i; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( (a1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( *(_WORD *)a1 == 35 )
    {
      v4 = (_WORD *)(a1 + 2);
      for ( i = v4; *i; ++i )
      {
        if ( (unsigned __int16)(*i - 48) > 9u )
          return 0;
      }
      *((_QWORD *)&v6 + 1) = v4;
      LOWORD(v6) = (_WORD)i - (_WORD)v4;
      WORD1(v6) = (_WORD)i - (_WORD)v4;
      v7 = 0;
      if ( (int)RtlUnicodeStringToInteger((unsigned __int16 *)&v6, 0xAu, &v7) >= 0 )
      {
        if ( a2 )
        {
          if ( (unsigned int)(v7 - 1) > 0xBFFF )
            *a2 = -16384;
          else
            *a2 = v7;
        }
        return 1;
      }
    }
    return 0;
  }
  if ( (unsigned __int16)a1 >= 0xC000u )
    return 0;
  if ( !(_WORD)a1 )
    LOWORD(a1) = -16384;
  if ( !a2 )
    return 1;
  *a2 = a1;
  return 1;
}
