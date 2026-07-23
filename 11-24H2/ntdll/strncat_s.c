/*
 * XREFs of strncat_s @ 0x18012BC90
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 */

errno_t __cdecl strncat_s(char *Destination, rsize_t SizeInBytes, const char *Source, rsize_t MaxCount)
{
  rsize_t v4; // r11
  char *v5; // r10
  errno_t v7; // ebx
  signed __int64 v8; // rcx
  char v9; // al
  signed __int64 v10; // r8
  char v11; // al

  v4 = SizeInBytes;
  v5 = Destination;
  if ( MaxCount )
  {
    if ( !Destination )
      goto LABEL_4;
  }
  else if ( !Destination )
  {
    if ( SizeInBytes )
    {
LABEL_4:
      invalid_parameter();
      return 22;
    }
    return 0;
  }
  if ( !SizeInBytes )
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
    if ( !--SizeInBytes )
      goto LABEL_11;
  }
  if ( MaxCount == -1LL )
  {
    v8 = Destination - Source;
    do
    {
      v9 = *Source;
      Source[v8] = *Source;
      ++Source;
      if ( !v9 )
        break;
      --SizeInBytes;
    }
    while ( SizeInBytes );
  }
  else
  {
    if ( MaxCount )
    {
      v10 = Source - Destination;
      while ( 1 )
      {
        v11 = Destination[v10];
        *Destination++ = v11;
        if ( !v11 )
          return 0;
        if ( --SizeInBytes )
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
  if ( !SizeInBytes )
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
