/*
 * XREFs of ?FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z @ 0x14035EF6C
 * Callers:
 *     ?GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z @ 0x1401C51D8 (-GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z.c)
 * Callees:
 *     <none>
 */

struct QDC_CACHE::QDC_CACHE_ENTRY *__fastcall QDC_CACHE::FindCacheEntry(QDC_CACHE *this, char a2, int a3)
{
  struct QDC_CACHE::QDC_CACHE_ENTRY *result; // rax
  unsigned int i; // ecx
  char v5; // r9
  bool v6; // zf

  result = (QDC_CACHE *)((char *)this + 56);
  for ( i = 0; i < 0x12; ++i )
  {
    v5 = *(_BYTE *)result;
    if ( a2 )
    {
      if ( !v5 )
        goto LABEL_7;
      v6 = *((_DWORD *)result + 1) == a3;
    }
    else
    {
      v6 = v5 == 0;
    }
    if ( v6 )
      return result;
LABEL_7:
    result = (struct QDC_CACHE::QDC_CACHE_ENTRY *)((char *)result + 32);
  }
  return 0LL;
}
