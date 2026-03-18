/*
 * XREFs of ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400C8FDC
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z @ 0x1400EC7AC (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z.c)
 * Callees:
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1400C99B0 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  _QWORD *v2; // rbx
  bool v5; // zf
  struct VIDMM_RECYCLE_MULTIRANGE *v6; // rsi
  struct VIDMM_RECYCLE_MULTIRANGE *v7; // rsi
  __int64 v8; // rcx
  struct VIDMM_RECYCLE_MULTIRANGE *v9; // rsi

  v2 = (_QWORD *)*((_QWORD *)a2 + 8);
  while ( 1 )
  {
    WdLogSingleEntry1(4LL, v2);
    v5 = *((_DWORD *)a2 + 50) == 0;
    WdLogGlobalForLineNumber = 8162;
    if ( !v5 )
    {
      v6 = (struct VIDMM_RECYCLE_MULTIRANGE *)v2[17];
      if ( v6 )
      {
        WdLogSingleEntry1(4LL, v2[17]);
        WdLogGlobalForLineNumber = 8173;
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v6, a2);
        v2[17] = 0LL;
      }
    }
    if ( *((_DWORD *)a2 + 50) != 1 )
    {
      v7 = (struct VIDMM_RECYCLE_MULTIRANGE *)v2[18];
      if ( v7 )
      {
        WdLogSingleEntry1(4LL, v2[18]);
        WdLogGlobalForLineNumber = 8187;
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v7, a2);
        v2[18] = 0LL;
      }
    }
    if ( *((_DWORD *)a2 + 50) != 2 )
    {
      v9 = (struct VIDMM_RECYCLE_MULTIRANGE *)v2[19];
      if ( v9 )
      {
        WdLogSingleEntry1(4LL, v2[19]);
        WdLogGlobalForLineNumber = 8201;
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v9, a2);
        v2[19] = 0LL;
      }
    }
    if ( v2 == *((_QWORD **)a2 + 9) )
      break;
    v8 = v2[15];
    if ( v8 == v2[9] + 72LL )
      v2 = 0LL;
    else
      v2 = (_QWORD *)(v8 - 120);
  }
}
