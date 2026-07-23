/*
 * XREFs of RtlpMuiRegGetInstalledLangInfoIndex @ 0x14082CA40
 * Callers:
 *     _RtlpMuiRegValidateLIPLanguage @ 0x14082F264 (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x14082F490 (_RtlpMuiRegValidatePartialLanguage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGetInstalledLangInfoIndex(__int64 a1, int a2, __int16 a3, __int16 *a4)
{
  __int16 i; // dx
  __int64 v6; // rdi
  __int64 v7; // rbx
  int v8; // ebx
  __int16 j; // cx
  __int64 v10; // rdx
  __int64 v11; // rax

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( a2 == 1 )
  {
    if ( a3 )
    {
      for ( i = 0; i < (int)*(unsigned __int16 *)(a1 + 6); ++i )
      {
        v6 = *(_QWORD *)(a1 + 16);
        v7 = 28LL * i;
        if ( *(unsigned __int16 *)(v7 + v6 + 4) == a3 && (*(_WORD *)(v7 + v6) & 0x1020) == 0x20 )
        {
          if ( a4 )
            *a4 = i;
          return 0LL;
        }
      }
      return 3221225473LL;
    }
    return 3221225485LL;
  }
  if ( a2 == 3 )
  {
    if ( a3 >= 0 )
    {
      v8 = *(unsigned __int16 *)(a1 + 6);
      for ( j = 0; j < v8; ++j )
      {
        v10 = *(_QWORD *)(a1 + 16);
        v11 = 28LL * j;
        if ( *(_WORD *)(v11 + v10 + 6) == a3 && (*(_WORD *)(v11 + v10) & 0x1020) == 0x20 )
        {
          if ( a4 )
            *a4 = j;
          return 0LL;
        }
      }
      return 3221225473LL;
    }
    return 3221225485LL;
  }
  if ( a2 != 2 )
    return 3221225473LL;
  if ( a3 < 0 || a3 >= (unsigned int)*(unsigned __int16 *)(a1 + 6) )
    return 3221225485LL;
  if ( (*(_WORD *)(28LL * a3 + *(_QWORD *)(a1 + 16)) & 0x1020) != 0x20 )
    return 3221225473LL;
  if ( a4 )
    *a4 = a3;
  return 0LL;
}
