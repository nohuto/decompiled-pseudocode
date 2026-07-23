/*
 * XREFs of AslpFileStringTokenize @ 0x14049B3A8
 * Callers:
 *     AslpFileVerQueryBlock @ 0x14094329C (AslpFileVerQueryBlock.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall AslpFileStringTokenize(_WORD *a1, __int64 a2, _WORD **a3)
{
  __int64 v3; // rdx
  const WCHAR *v5; // r10
  _WORD *v6; // r11
  const WCHAR *v7; // rdi
  WCHAR v8; // r8
  WCHAR v9; // r9
  WCHAR v11; // r9

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
    if ( !asc_14001BC40[0] )
      break;
    v11 = asc_14001BC40[0];
    while ( v11 != *a1 )
    {
      v11 = *++v5;
      if ( !*v5 )
        goto LABEL_6;
    }
    ++a1;
  }
LABEL_6:
  v6 = a1;
  while ( *a1 )
  {
    v7 = L"\\";
    v8 = asc_14001BC40[0];
    if ( asc_14001BC40[0] )
    {
      v9 = asc_14001BC40[0];
      do
      {
        v8 = v9;
        if ( v9 == *a1 )
          break;
        v8 = *++v7;
        v9 = *v7;
      }
      while ( *v7 );
    }
    if ( v8 )
    {
      *a1++ = 0;
      break;
    }
    ++a1;
  }
  *a3 = a1;
  if ( a1 != v6 )
    return v6;
  return (_WORD *)v3;
}
