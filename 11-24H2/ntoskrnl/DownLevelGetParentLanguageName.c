/*
 * XREFs of DownLevelGetParentLanguageName @ 0x14065E124
 * Callers:
 *     LdrpGetParentLangId @ 0x1404AE270 (LdrpGetParentLangId.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1404C04E0 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     bsearch @ 0x1404FC020 (bsearch.c)
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
  v3 = bsearch(a1, &off_140005620, 0x1B3uLL, 8uLL, (int (__cdecl *)(const void *, const void *))CompareLangName);
  if ( !v3 )
    return 0LL;
  v4 = -1LL;
  v5 = (char *)(&off_140003AA0)[2 * dword_140003AAC[4 * word_140039620[(v3 - (_BYTE *)&off_140005620) >> 3]]];
  do
    ++v4;
  while ( *(_WORD *)&v5[2 * v4] );
  if ( (int)StringCchCopyNW(a2, 85LL, v5, v4 + 1) >= 0 )
    return (unsigned int)(v6 + 1);
  else
    return 0LL;
}
