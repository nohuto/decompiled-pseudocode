/*
 * XREFs of wcstok_s @ 0x18012C440
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 */

wchar_t *__cdecl wcstok_s(wchar_t *String, const wchar_t *Delimiter, wchar_t **Context)
{
  wchar_t i; // ax
  const wchar_t *v4; // r10
  wchar_t v5; // r9
  wchar_t *result; // rax
  const wchar_t *v7; // rbx
  wchar_t v8; // r9
  wchar_t v9; // r10
  wchar_t *v10; // r10

  if ( !Context || !Delimiter )
    goto LABEL_25;
  if ( !String )
  {
    if ( *Context )
    {
      String = *Context;
      goto LABEL_6;
    }
LABEL_25:
    invalid_parameter();
    return 0LL;
  }
LABEL_6:
  for ( i = *String; *String; i = *String )
  {
    v4 = Delimiter;
    if ( !*Delimiter )
      break;
    v5 = *Delimiter;
    while ( v5 != i )
    {
      v5 = *++v4;
      if ( !*v4 )
        goto LABEL_13;
    }
    ++String;
  }
LABEL_13:
  result = String;
  if ( *String )
  {
    while ( 1 )
    {
      v7 = Delimiter;
      v8 = *Delimiter;
      if ( *Delimiter )
      {
        v9 = *Delimiter;
        do
        {
          v8 = v9;
          if ( v9 == *String )
            break;
          v8 = *++v7;
          v9 = *v7;
        }
        while ( *v7 );
      }
      v10 = String + 1;
      if ( v8 )
        break;
      ++String;
      if ( !*v10 )
        goto LABEL_22;
    }
    *String++ = 0;
  }
LABEL_22:
  *Context = String;
  if ( result == String )
    return 0LL;
  return result;
}
