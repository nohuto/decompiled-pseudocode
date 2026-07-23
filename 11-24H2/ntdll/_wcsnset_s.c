/*
 * XREFs of _wcsnset_s @ 0x180121050
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 */

errno_t __cdecl wcsnset_s(wchar_t *Destination, size_t SizeInWords, wchar_t Value, size_t MaxCount)
{
  wchar_t *v5; // rax

  if ( MaxCount )
  {
    if ( !Destination )
      goto LABEL_4;
LABEL_6:
    if ( !SizeInWords )
      goto LABEL_4;
    v5 = Destination;
    if ( *Destination )
    {
      while ( MaxCount )
      {
        if ( !--SizeInWords )
          goto LABEL_16;
        *v5 = Value;
        --MaxCount;
        if ( !*++v5 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( MaxCount )
        goto LABEL_16;
    }
    while ( *v5 )
    {
      if ( !--SizeInWords )
        break;
      ++v5;
    }
LABEL_16:
    if ( !SizeInWords )
    {
      *Destination = 0;
      goto LABEL_4;
    }
    return 0;
  }
  if ( Destination )
    goto LABEL_6;
  if ( SizeInWords )
  {
LABEL_4:
    invalid_parameter();
    return 22;
  }
  return 0;
}
