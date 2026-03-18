/*
 * XREFs of ??1QDC_CACHE@@QEAA@XZ @ 0x1401BF300
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1401CD6B4 (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005DA48 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?FreeAllocationsForEntry@QDC_CACHE@@AEAAXPEAUQDC_CACHE_ENTRY@1@@Z @ 0x1403F4AAC (-FreeAllocationsForEntry@QDC_CACHE@@AEAAXPEAUQDC_CACHE_ENTRY@1@@Z.c)
 */

void __fastcall QDC_CACHE::~QDC_CACHE(QDC_CACHE *this)
{
  struct QDC_CACHE::QDC_CACHE_ENTRY *v2; // rbx
  __int64 v3; // rsi

  v2 = (QDC_CACHE *)((char *)this + 56);
  v3 = 18LL;
  do
  {
    QDC_CACHE::FreeAllocationsForEntry(this, v2);
    v2 = (struct QDC_CACHE::QDC_CACHE_ENTRY *)((char *)v2 + 32);
    --v3;
  }
  while ( v3 );
  DXGFASTMUTEX::~DXGFASTMUTEX((QDC_CACHE *)((char *)this + 8));
}
