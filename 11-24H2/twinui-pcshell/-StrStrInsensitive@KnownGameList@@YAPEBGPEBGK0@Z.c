/*
 * XREFs of ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x1801E0248
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180108380 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180109510 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall KnownGameList::StrStrInsensitive(
        KnownGameList *this,
        const unsigned __int16 *a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  unsigned int v7; // r13d
  struct localeinfo_struct *v8; // rdx
  unsigned int v9; // esi
  unsigned int i; // r14d
  wint_t v11; // bx
  wint_t v12; // ax
  struct localeinfo_struct *Locale; // [rsp+70h] [rbp+18h]

  v4 = -1LL;
  v6 = 0LL;
  v7 = (unsigned int)a2;
  do
    ++v4;
  while ( *(_WORD *)(a3 + 2 * v4) );
  v8 = _create_locale(0, "C");
  Locale = v8;
  v9 = 0;
LABEL_4:
  if ( *(_WORD *)(a3 + 2LL * v9) && (unsigned int)v4 - v9 >= v7 )
  {
    for ( i = 0; i < v7; ++i )
    {
      v11 = _towlower_l(*(_WORD *)(a3 + 2LL * (i + v9)), v8);
      v12 = _towlower_l(*((_WORD *)this + i), Locale);
      v8 = Locale;
      if ( v11 != v12 )
      {
        ++v9;
        goto LABEL_4;
      }
    }
    v6 = a3 + 2LL * v9;
  }
  _free_locale(v8);
  return (const unsigned __int16 *)v6;
}
