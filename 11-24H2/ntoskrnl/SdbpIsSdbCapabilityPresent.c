/*
 * XREFs of SdbpIsSdbCapabilityPresent @ 0x140805790
 * Callers:
 *     SdbpCheckSdbCapability @ 0x1408049B0 (SdbpCheckSdbCapability.c)
 *     SdbpMatchList @ 0x140AEB320 (SdbpMatchList.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall SdbpIsSdbCapabilityPresent(_DWORD *a1, __int64 a2, __int64 a3)
{
  wchar_t **i; // r9
  wchar_t *result; // rax
  __int64 v8; // r8
  int v9; // edx
  int v10; // ecx
  unsigned __int64 v11; // rdx
  wchar_t ***j; // r8
  wchar_t **v13; // rcx
  __int64 v14; // r11
  int v15; // r10d
  int v16; // r9d

  *a1 = 0;
  for ( i = off_14000BFA0; ; ++i )
  {
    result = *i;
    if ( !*i )
      break;
    v8 = a3 - (_QWORD)result;
    do
    {
      v9 = *(wchar_t *)((char *)result + v8);
      v10 = *result - v9;
      if ( v10 )
        break;
      ++result;
    }
    while ( v9 );
    if ( !v10 )
    {
LABEL_18:
      *a1 = 1;
      return result;
    }
  }
  v11 = 0LL;
  for ( j = (wchar_t ***)(a2 + 1616); v11 < 0x10; ++j )
  {
    v13 = *j;
    if ( !*j )
      break;
    while ( 1 )
    {
      result = *v13;
      if ( !*v13 )
        break;
      v14 = a3 - (_QWORD)result;
      do
      {
        v15 = *(wchar_t *)((char *)result + v14);
        v16 = *result - v15;
        if ( v16 )
          break;
        ++result;
      }
      while ( v15 );
      if ( !v16 )
        goto LABEL_18;
      ++v13;
    }
    ++v11;
  }
  return result;
}
