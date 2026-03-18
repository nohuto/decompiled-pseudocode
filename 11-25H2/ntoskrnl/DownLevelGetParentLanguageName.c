/*
 * XREFs of DownLevelGetParentLanguageName @ 0x1406539C4
 * Callers:
 *     LdrpGetParentLangId @ 0x1404B40F0 (LdrpGetParentLangId.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1404C68C0 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     bsearch @ 0x1404FBFE0 (bsearch.c)
 */

__int64 __fastcall DownLevelGetParentLanguageName(const void *a1, char *a2)
{
  _BYTE *v3; // rax
  __int64 v4; // r11
  char *v5; // r8
  int v6; // r11d

  if ( !a1 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v3 = bsearch(a1, &off_140005610, 0x1B3uLL, 8uLL, (int (__cdecl *)(const void *, const void *))CompareLangName);
  if ( !v3 )
    return 0LL;
  v4 = -1LL;
  v5 = (char *)(&off_140003A90)[2 * dword_140003A9C[4 * word_140038CB0[(v3 - (_BYTE *)&off_140005610) >> 3]]];
  do
    ++v4;
  while ( *(_WORD *)&v5[2 * v4] );
  if ( (int)StringCchCopyNW(a2, 85LL, v5, v4 + 1) >= 0 )
    return (unsigned int)(v6 + 1);
  else
    return 0LL;
}
