/*
 * XREFs of AslpFileStringTokenize @ 0x1800A3534
 * Callers:
 *     AslpFileVerQueryBlock @ 0x1800A3670 (AslpFileVerQueryBlock.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall AslpFileStringTokenize(_WORD *a1, __int64 a2, _WORD **a3)
{
  __int64 v3; // rdx
  const WCHAR *v5; // r10
  WCHAR v6; // r9
  _WORD *v7; // r10
  const WCHAR *v8; // rbx
  WCHAR v9; // r8
  WCHAR v10; // r9

  v3 = 0LL;
  if ( !a3 )
    return 0LL;
  if ( !a1 )
  {
    a1 = *a3;
    if ( !*a3 )
      return 0LL;
  }
  while ( *a1 )
  {
    v5 = L"\\";
    if ( !asc_1800C3A88[0] )
      break;
    v6 = asc_1800C3A88[0];
    while ( v6 != *a1 )
    {
      v6 = *++v5;
      if ( !*v5 )
        goto LABEL_12;
    }
    ++a1;
  }
LABEL_12:
  v7 = a1;
  while ( *a1 )
  {
    v8 = L"\\";
    v9 = asc_1800C3A88[0];
    if ( asc_1800C3A88[0] )
    {
      v10 = asc_1800C3A88[0];
      do
      {
        v9 = v10;
        if ( v10 == *a1 )
          break;
        v9 = *++v8;
        v10 = *v8;
      }
      while ( *v8 );
    }
    if ( v9 )
    {
      *a1++ = 0;
      break;
    }
    ++a1;
  }
  *a3 = a1;
  if ( a1 != v7 )
    return v7;
  return (_WORD *)v3;
}
