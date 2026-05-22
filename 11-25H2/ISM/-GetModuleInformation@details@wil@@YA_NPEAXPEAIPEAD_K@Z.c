/*
 * XREFs of ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x1800A02B8
 * Callers:
 *     ?GetCurrentModuleName@details@wil@@YAPEBDXZ @ 0x180080890 (-GetCurrentModuleName@details@wil@@YAPEBDXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

char __fastcall wil::details::GetModuleInformation(LPCWSTR lpModuleName, _DWORD *a2, unsigned int *a3, char *a4)
{
  HMODULE v6; // rcx
  __int64 v10; // rax
  CHAR *i; // rcx
  __int64 v12; // r8
  signed __int64 v13; // rcx
  char v14; // dl
  unsigned int *v15; // rcx
  HMODULE phModule; // [rsp+20h] [rbp-148h] BYREF
  CHAR Filename[272]; // [rsp+30h] [rbp-138h] BYREF

  v6 = 0LL;
  phModule = 0LL;
  if ( lpModuleName )
  {
    if ( !GetModuleHandleExW(6u, lpModuleName, &phModule) )
    {
      if ( a2 )
        *a2 = 0;
      return 0;
    }
    v6 = phModule;
  }
  if ( a2 )
  {
    if ( lpModuleName )
      LODWORD(lpModuleName) = (_DWORD)lpModuleName - (_DWORD)v6;
    *a2 = (_DWORD)lpModuleName;
  }
  if ( a3 )
  {
    if ( !GetModuleFileNameA(v6, Filename, 0x104u) )
      return 0;
    v10 = -1LL;
    do
      ++v10;
    while ( Filename[v10] );
    for ( i = &Filename[v10]; i > Filename && *(i - 1) != 92; --i )
      ;
    if ( a4 )
    {
      if ( (unsigned __int64)a4 <= 0x7FFFFFFF )
      {
        v12 = 2147483646LL - (_QWORD)a4;
        v13 = i - (CHAR *)a3;
        do
        {
          if ( !&a4[v12] )
            break;
          v14 = *((_BYTE *)a3 + v13);
          if ( !v14 )
            break;
          *(_BYTE *)a3 = v14;
          a3 = (unsigned int *)((char *)a3 + 1);
          --a4;
        }
        while ( a4 );
        v15 = (unsigned int *)((char *)a3 - 1);
        if ( a4 )
          v15 = a3;
        *(_BYTE *)v15 = 0;
      }
      else
      {
        *(_BYTE *)a3 = 0;
      }
    }
  }
  return 1;
}
