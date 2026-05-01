/*
 * XREFs of ?_GetLaunchArgsSubstring@SearchAppExperienceManager@@CAJPEBG0IPEAPEBGPEA_K@Z @ 0x18037F084
 * Callers:
 *     ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x18037EDE4 (-_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 *     ?_GetCortanaEntryPointAndArgs@SearchAppExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x1803AC0EC (-_GetCortanaEntryPointAndArgs@SearchAppExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchAppExperienceManager::_GetLaunchArgsSubstring(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        const unsigned __int16 **a4,
        unsigned __int64 *a5)
{
  size_t v6; // rdi
  wchar_t *v9; // rax
  size_t v10; // rax
  const unsigned __int16 *v11; // rcx
  wchar_t *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx

  v6 = a3;
  v9 = wcsstr(a1, a2);
  *a4 = v9;
  if ( v9 )
  {
    if ( a2 )
      v10 = wcsnlen(a2, v6);
    else
      v10 = 0LL;
    v11 = &(*a4)[v10];
    *a4 = v11;
    if ( v11 <= &a1[v6] )
    {
      v12 = wcsstr(v11, L"&");
      v13 = (__int64)*a4;
      if ( v12 )
      {
        *a5 = ((__int64)v12 - v13) >> 1;
      }
      else
      {
        v14 = -1LL;
        do
          ++v14;
        while ( *(_WORD *)(v13 + 2 * v14) );
        *a5 = v14;
      }
    }
  }
  else
  {
    *a5 = 0LL;
  }
  return 0LL;
}
