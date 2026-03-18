/*
 * XREFs of ?bIsPathInSystemFontsDir@@YAHPEBG@Z @ 0x1401D07F8
 * Callers:
 *     UmfdLoadFontFileView @ 0x1400B76D4 (UmfdLoadFontFileView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIsPathInSystemFontsDir(wchar_t *Str1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  const wchar_t *v5; // rcx
  size_t v6; // rax

  v3 = 0;
  v4 = *(_QWORD *)(W32GetSessionState((_DWORD)Str1, a2) + 96);
  v5 = *(const wchar_t **)(v4 + 20112);
  if ( v5 )
  {
    v6 = wcsnlen(v5, 0x104uLL);
    return wcsncmp(Str1, *(const wchar_t **)(v4 + 20112), v6) == 0;
  }
  return v3;
}
