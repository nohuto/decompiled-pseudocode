/*
 * XREFs of strncpy_s @ 0x18012BD90
 * Callers:
 *     _splitpath_helper @ 0x180120510 (_splitpath_helper.c)
 *     _splitpath_s @ 0x18012B1B0 (_splitpath_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 */

errno_t __cdecl strncpy_s(char *Destination, rsize_t SizeInBytes, const char *Source, rsize_t MaxCount)
{
  rsize_t v4; // r10
  errno_t v6; // ebx
  char *v7; // r11
  signed __int64 v8; // r11
  char v9; // al
  signed __int64 v10; // r8
  char v11; // al
  rsize_t v12; // rbx

  v4 = SizeInBytes;
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
  if ( !MaxCount )
  {
    *Destination = 0;
    return 0;
  }
  if ( Source )
  {
    v7 = Destination;
    if ( MaxCount == -1LL )
    {
      v8 = Destination - Source;
      while ( 1 )
      {
        v9 = *Source;
        Source[v8] = *Source;
        ++Source;
        if ( !v9 )
          break;
        if ( !--SizeInBytes )
          goto LABEL_25;
      }
    }
    else
    {
      v10 = Source - Destination;
      while ( 1 )
      {
        v11 = v7[v10];
        v12 = MaxCount;
        *v7++ = v11;
        if ( !v11 )
          break;
        if ( --SizeInBytes )
        {
          if ( --MaxCount )
            continue;
        }
        MaxCount = v12 - 1;
        if ( !SizeInBytes )
          MaxCount = v12;
        if ( !MaxCount )
          *v7 = 0;
LABEL_25:
        if ( SizeInBytes )
          return 0;
        if ( MaxCount == -1LL )
        {
          Destination[v4 - 1] = 0;
          return 80;
        }
        v6 = 34;
        goto LABEL_29;
      }
    }
    return 0;
  }
  v6 = 22;
LABEL_29:
  *Destination = 0;
  invalid_parameter();
  return v6;
}
