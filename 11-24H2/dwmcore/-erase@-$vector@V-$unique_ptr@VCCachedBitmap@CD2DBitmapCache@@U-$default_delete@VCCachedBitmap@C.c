/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18024B338
 * Callers:
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x180222314 (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??1?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@QEAA@XZ @ 0x18018BA04 (--1-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@VCCachedBitmap@CD2DBitmapCache.c)
 *     ??R?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@QEBAXPEAVCCachedBitmap@CD2DBitmapCache@@@Z @ 0x18018BA24 (--R-$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@QEBAXPEAVCCachedBitmap@CD2DBitmapCache.c)
 */

_QWORD *__fastcall std::vector<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 *v3; // rbp
  __int64 *i; // rdi
  __int64 v8; // rax
  CD2DBitmapCache::CCachedBitmap *v9; // rdx
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 8);
  for ( i = (__int64 *)(a3 + 8); i != v3; ++i )
  {
    v8 = *i;
    *i = 0LL;
    v9 = (CD2DBitmapCache::CCachedBitmap *)*(i - 1);
    *(i - 1) = v8;
    if ( v9 )
      std::default_delete<CD2DBitmapCache::CCachedBitmap>::operator()(a1, v9);
  }
  std::unique_ptr<CD2DBitmapCache::CCachedBitmap>::~unique_ptr<CD2DBitmapCache::CCachedBitmap>((_QWORD *)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
