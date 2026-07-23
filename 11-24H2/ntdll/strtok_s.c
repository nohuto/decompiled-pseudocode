/*
 * XREFs of strtok_s @ 0x18012BE90
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     __report_rangecheckfailure @ 0x18011EC5C (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

char *__cdecl strtok_s(char *String, const char *Delimiter, char **Context)
{
  const char *v4; // r10
  char *v5; // r9
  __int64 v6; // rax
  bool v7; // cf
  unsigned int v8; // r8d
  unsigned __int8 v9; // r8
  char v10; // r10
  char *v11; // r10
  unsigned __int8 *v12; // rbx
  _BYTE v14[32]; // [rsp+30h] [rbp-38h]

  v4 = Delimiter;
  v5 = String;
  if ( Context && Delimiter && (String || *Context) )
  {
    v6 = 0LL;
    v7 = 1;
    do
    {
      if ( !v7 )
        _report_rangecheckfailure();
      v14[v6++] = 0;
      v7 = (unsigned __int64)v6 < 0x20;
    }
    while ( v6 < 32 );
    do
    {
      v8 = *(unsigned __int8 *)v4++;
      v14[(unsigned __int64)v8 >> 3] |= 1 << (v8 & 7);
    }
    while ( (_BYTE)v8 );
    if ( !String )
      v5 = *Context;
    v9 = *v5;
    if ( ((unsigned __int8)(1 << (*v5 & 7)) & v14[(unsigned __int64)(unsigned __int8)*v5 >> 3]) != 0 )
    {
      v10 = *v5;
      do
      {
        v9 = v10;
        if ( !v10 )
          break;
        v10 = *++v5;
        v9 = *v5;
      }
      while ( ((unsigned __int8)(1 << (*v5 & 7)) & v14[(unsigned __int64)(unsigned __int8)*v5 >> 3]) != 0 );
    }
    v11 = v5;
    if ( v9 )
    {
      while ( 1 )
      {
        v12 = (unsigned __int8 *)(v5 + 1);
        if ( ((unsigned __int8)(1 << (v9 & 7)) & v14[(unsigned __int64)v9 >> 3]) != 0 )
          break;
        ++v5;
        v9 = *v12;
        if ( !*v12 )
          goto LABEL_20;
      }
      *v5++ = 0;
    }
LABEL_20:
    *Context = v5;
    if ( v11 == v5 )
      return 0LL;
    return v11;
  }
  else
  {
    invalid_parameter();
    return 0LL;
  }
}
