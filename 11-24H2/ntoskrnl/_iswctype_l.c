/*
 * XREFs of _iswctype_l @ 0x140500C00
 * Callers:
 *     wcstoxlX @ 0x140500544 (wcstoxlX.c)
 *     wcstoxq @ 0x1405009A4 (wcstoxq.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype_l(wint_t C, wctype_t Type, _locale_t Locale)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & (*pwctype)[C];
}
