/*
 * XREFs of ?do_narrow@?$ctype@_W@std@@MEBAPEB_WPEB_W0DPEAD@Z @ 0x18005CC80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Donarrow@?$ctype@_W@std@@IEBAD_WD@Z @ 0x180059850 (-_Donarrow@-$ctype@_W@std@@IEBAD_WD@Z.c)
 */

wchar_t *__fastcall std::ctype<wchar_t>::do_narrow(__int64 a1, wchar_t *a2, wchar_t *a3, char a4, char *a5)
{
  wchar_t *i; // rbx

  for ( i = a2; i != a3; ++a5 )
    *a5 = std::ctype<wchar_t>::_Donarrow(a1, *i++, a4);
  return i;
}
