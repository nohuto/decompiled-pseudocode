/*
 * XREFs of _wcsset_s @ 0x1801210E0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 */

errno_t __cdecl wcsset_s(wchar_t *Destination, size_t SizeInWords, wchar_t Value)
{
  wchar_t *v3; // rax

  if ( !Destination || !SizeInWords )
    goto LABEL_8;
  v3 = Destination;
  if ( *Destination )
  {
    do
    {
      if ( !--SizeInWords )
        break;
      *v3++ = Value;
    }
    while ( *v3 );
    if ( !SizeInWords )
    {
      *Destination = 0;
LABEL_8:
      invalid_parameter();
      return 22;
    }
  }
  return 0;
}
