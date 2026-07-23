/*
 * XREFs of RaspClearCache @ 0x140BB7C90
 * Callers:
 *     BgpTxtCacheDestroy @ 0x140BB6354 (BgpTxtCacheDestroy.c)
 * Callees:
 *     RaspDestroyCachedBitmap @ 0x140BB7CE8 (RaspDestroyCachedBitmap.c)
 */

__int64 *RaspClearCache()
{
  __int64 *result; // rax
  __int64 v1; // rcx

  while ( 1 )
  {
    result = (__int64 *)RaspBitmapCache;
    v1 = *(_QWORD *)RaspBitmapCache;
    if ( *(__int64 **)(RaspBitmapCache + 8) != &RaspBitmapCache || *(_QWORD *)(v1 + 8) != RaspBitmapCache )
      __fastfail(3u);
    RaspBitmapCache = *(_QWORD *)RaspBitmapCache;
    *(_QWORD *)(v1 + 8) = &RaspBitmapCache;
    if ( result == &RaspBitmapCache )
      break;
    RaspDestroyCachedBitmap(result);
  }
  dword_140EF0174 = 0;
  return result;
}
