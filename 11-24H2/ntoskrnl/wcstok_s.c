/*
 * XREFs of wcstok_s @ 0x140502344
 * Callers:
 *     GetOperatorIndexByName @ 0x140866F48 (GetOperatorIndexByName.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14048E2E0 (xHalTimerWatchdogStop.c)
 */

wchar_t *__cdecl wcstok_s(wchar_t *Str, const wchar_t *Delim, wchar_t **Context)
{
  wchar_t i; // ax
  const wchar_t *v4; // r10
  wchar_t v5; // r9
  wchar_t *result; // rax
  const wchar_t *v7; // rbx
  wchar_t v8; // r9
  wchar_t v9; // r10
  wchar_t *v10; // r10

  if ( !Context || !Delim )
    goto LABEL_25;
  if ( !Str )
  {
    if ( *Context )
    {
      Str = *Context;
      goto LABEL_6;
    }
LABEL_25:
    xHalTimerWatchdogStop();
    return 0LL;
  }
LABEL_6:
  for ( i = *Str; *Str; i = *Str )
  {
    v4 = Delim;
    if ( !*Delim )
      break;
    v5 = *Delim;
    while ( v5 != i )
    {
      v5 = *++v4;
      if ( !*v4 )
        goto LABEL_13;
    }
    ++Str;
  }
LABEL_13:
  result = Str;
  if ( *Str )
  {
    while ( 1 )
    {
      v7 = Delim;
      v8 = *Delim;
      if ( *Delim )
      {
        v9 = *Delim;
        do
        {
          v8 = v9;
          if ( v9 == *Str )
            break;
          v8 = *++v7;
          v9 = *v7;
        }
        while ( *v7 );
      }
      v10 = Str + 1;
      if ( v8 )
        break;
      ++Str;
      if ( !*v10 )
        goto LABEL_22;
    }
    *Str++ = 0;
  }
LABEL_22:
  *Context = Str;
  if ( result == Str )
    return 0LL;
  return result;
}
