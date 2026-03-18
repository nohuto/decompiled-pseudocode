/*
 * XREFs of ??R?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@QEBAXPEAVCCachedBitmap@CD2DBitmapCache@@@Z @ 0x18018BA24
 * Callers:
 *     ??1?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@QEAA@XZ @ 0x18018BA04 (--1-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@VCCachedBitmap@CD2DBitmapCache.c)
 *     ?erase@?$vector@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18024B338 (-erase@-$vector@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@VCCachedBitmap@C.c)
 * Callees:
 *     ??1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ @ 0x18018BA54 (--1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::default_delete<CD2DBitmapCache::CCachedBitmap>::operator()(
        __int64 a1,
        CD2DBitmapCache::CCachedBitmap *a2)
{
  if ( a2 )
  {
    CD2DBitmapCache::CCachedBitmap::~CCachedBitmap(a2);
    operator delete(a2, 0x10uLL);
  }
}
