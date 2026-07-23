/*
 * XREFs of TxtpClearCache @ 0x140BB637C
 * Callers:
 *     BgpTxtCacheDestroy @ 0x140BB6354 (BgpTxtCacheDestroy.c)
 * Callees:
 *     TxtpDestroyCacheEntry @ 0x140BB63D4 (TxtpDestroyCacheEntry.c)
 */

_UNKNOWN **TxtpClearCache()
{
  _UNKNOWN **result; // rax
  __int64 v1; // rcx

  while ( 1 )
  {
    result = (_UNKNOWN **)TxtpTextCache;
    v1 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache || *(_UNKNOWN **)(v1 + 8) != TxtpTextCache )
      __fastfail(3u);
    TxtpTextCache = *(_UNKNOWN **)TxtpTextCache;
    *(_QWORD *)(v1 + 8) = &TxtpTextCache;
    if ( result == &TxtpTextCache )
      break;
    TxtpDestroyCacheEntry(result);
  }
  dword_140E0A2B0 = 0;
  return result;
}
