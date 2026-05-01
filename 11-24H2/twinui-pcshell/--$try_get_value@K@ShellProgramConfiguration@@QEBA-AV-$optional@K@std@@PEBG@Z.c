/*
 * XREFs of ??$try_get_value@K@ShellProgramConfiguration@@QEBA?AV?$optional@K@std@@PEBG@Z @ 0x18045CB08
 * Callers:
 *     ?IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ @ 0x18045F370 (-IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ.c)
 * Callees:
 *     ??$get_value_nothrow@K@ShellProgramConfiguration@@QEBAJPEBGAEAK@Z @ 0x180459EA8 (--$get_value_nothrow@K@ShellProgramConfiguration@@QEBAJPEBGAEAK@Z.c)
 */

__int64 __fastcall ShellProgramConfiguration::try_get_value<unsigned long>(HKEY *a1, __int64 a2, __int64 a3)
{
  int v5; // [rsp+40h] [rbp+18h] BYREF
  int v6; // [rsp+44h] [rbp+1Ch]

  v6 = HIDWORD(a3);
  v5 = 0;
  if ( *a1 && ShellProgramConfiguration::get_value_nothrow<unsigned long>(a1, a2, &v5) >= 0 )
  {
    *(_DWORD *)a2 = v5;
    *(_BYTE *)(a2 + 4) = 1;
  }
  else
  {
    *(_BYTE *)(a2 + 4) = 0;
  }
  return a2;
}
