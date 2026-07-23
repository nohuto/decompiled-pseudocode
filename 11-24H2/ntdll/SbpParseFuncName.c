/*
 * XREFs of SbpParseFuncName @ 0x18015AF28
 * Callers:
 *     SbpResolveBasedOnName @ 0x180113358 (SbpResolveBasedOnName.c)
 * Callees:
 *     StringCchCopyW @ 0x1800DEF88 (StringCchCopyW.c)
 */

__int64 __fastcall SbpParseFuncName(char *a1, _WORD *a2, __int64 a3, wchar_t *a4)
{
  __int16 v4; // ax
  _WORD *v5; // r11
  char *v7; // r8
  __int16 v9; // cx
  unsigned __int64 v10; // rcx
  __int64 v11; // r9
  signed __int64 v12; // r10
  unsigned int v13; // ebx
  __int16 v14; // ax
  _WORD *v15; // rax

  v4 = *(_WORD *)a1;
  v5 = a2;
  v7 = a1;
  if ( *(_WORD *)a1 )
  {
    v9 = *(_WORD *)a1;
    do
    {
      v4 = v9;
      if ( v9 == 33 )
        break;
      v7 += 2;
      v4 = *(_WORD *)v7;
      v9 = *(_WORD *)v7;
    }
    while ( *(_WORD *)v7 );
  }
  if ( v4 != 33 )
    goto LABEL_16;
  v10 = (v7 - a1) >> 1;
  if ( v10 > 0x7FFFFFFE )
  {
    *a2 = 0;
LABEL_16:
    v13 = 0;
    if ( v5 )
      *v5 = 0;
    if ( a4 )
      *a4 = 0;
    return v13;
  }
  v11 = 256LL;
  v12 = a1 - (char *)a2;
  v13 = 1;
  do
  {
    if ( !(v10 + v11 - 256) )
      break;
    v14 = *(_WORD *)((char *)a2 + v12);
    if ( !v14 )
      break;
    *a2++ = v14;
    --v11;
  }
  while ( v11 );
  v15 = a2 - 1;
  if ( v11 )
    v15 = a2;
  *v15 = 0;
  if ( !v11 || StringCchCopyW(a4, 0x400uLL, (STRSAFE_LPCWSTR)v7 + 1) < 0 )
    goto LABEL_16;
  return v13;
}
