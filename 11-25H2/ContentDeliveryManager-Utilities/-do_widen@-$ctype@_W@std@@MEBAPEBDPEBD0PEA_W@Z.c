/*
 * XREFs of ?do_widen@?$ctype@_W@std@@MEBAPEBDPEBD0PEA_W@Z @ 0x18005CF00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Dowiden@?$ctype@G@std@@IEBAGD@Z @ 0x1800598A8 (-_Dowiden@-$ctype@G@std@@IEBAGD@Z.c)
 */

char *__fastcall std::ctype<wchar_t>::do_widen(__int64 a1, char *a2, char *a3, _WORD *a4)
{
  char *i; // rbx
  __int16 v8; // ax

  for ( i = a2; i != a3; ++a4 )
  {
    v8 = std::ctype<unsigned short>::_Dowiden(a1, *i++);
    *a4 = v8;
  }
  return i;
}
