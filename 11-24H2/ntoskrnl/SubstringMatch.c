/*
 * XREFs of SubstringMatch @ 0x140A1EB1C
 * Callers:
 *     StringListElementSubstringMatch @ 0x140824BB0 (StringListElementSubstringMatch.c)
 *     PropertyEval @ 0x1408D2920 (PropertyEval.c)
 * Callees:
 *     wcsstr @ 0x1404FDB70 (wcsstr.c)
 *     _wcsistr @ 0x140A1EB84 (_wcsistr.c)
 */

__int64 __fastcall SubstringMatch(const wchar_t *a1, const wchar_t *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  wchar_t *v8; // rax
  wchar_t *v9; // r8
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rcx

  v4 = 0;
  if ( a3 )
    v8 = (wchar_t *)wcsistr();
  else
    v8 = wcsstr(a1, a2);
  v9 = v8;
  if ( v8 )
  {
    if ( a4 == 9 )
    {
      v11 = v8 == a1;
    }
    else if ( a4 == 10 )
    {
      v12 = -1LL;
      v13 = -1LL;
      do
        ++v13;
      while ( v9[v13] );
      do
        ++v12;
      while ( a2[v12] );
      v11 = v13 == v12;
    }
    else
    {
      v11 = a4 == 11;
    }
    if ( v11 )
      return 1;
  }
  return v4;
}
