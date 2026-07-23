/*
 * XREFs of wcsncat_s @ 0x18012C220
 * Callers:
 *     _AppendCumulativeOverlayFilePath @ 0x18007F95C (_AppendCumulativeOverlayFilePath.c)
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 */

errno_t __cdecl wcsncat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source, rsize_t MaxCount)
{
  rsize_t v4; // r11
  wchar_t *v5; // r10
  errno_t v7; // ebx
  signed __int64 v8; // rcx
  wchar_t v9; // ax
  signed __int64 v10; // r8
  wchar_t v11; // ax

  v4 = SizeInWords;
  v5 = Destination;
  if ( MaxCount )
  {
    if ( !Destination )
      goto LABEL_4;
  }
  else if ( !Destination )
  {
    if ( SizeInWords )
    {
LABEL_4:
      invalid_parameter();
      return 22;
    }
    return 0;
  }
  if ( !SizeInWords )
    goto LABEL_4;
  if ( MaxCount && !Source )
  {
LABEL_11:
    v7 = 22;
LABEL_28:
    *v5 = 0;
    invalid_parameter();
    return v7;
  }
  while ( *Destination )
  {
    ++Destination;
    if ( !--SizeInWords )
      goto LABEL_11;
  }
  if ( MaxCount == -1LL )
  {
    v8 = (char *)Destination - (char *)Source;
    do
    {
      v9 = *Source;
      *(const wchar_t *)((char *)Source + v8) = *Source;
      ++Source;
      if ( !v9 )
        break;
      --SizeInWords;
    }
    while ( SizeInWords );
  }
  else
  {
    if ( MaxCount )
    {
      v10 = (char *)Source - (char *)Destination;
      while ( 1 )
      {
        v11 = *(wchar_t *)((char *)Destination + v10);
        *Destination++ = v11;
        if ( !v11 )
          return 0;
        if ( --SizeInWords )
        {
          if ( --MaxCount )
            continue;
        }
        if ( MaxCount )
          goto LABEL_24;
        break;
      }
    }
    *Destination = 0;
  }
LABEL_24:
  if ( !SizeInWords )
  {
    if ( MaxCount == -1LL )
    {
      v5[v4 - 1] = 0;
      return 80;
    }
    v7 = 34;
    goto LABEL_28;
  }
  return 0;
}
