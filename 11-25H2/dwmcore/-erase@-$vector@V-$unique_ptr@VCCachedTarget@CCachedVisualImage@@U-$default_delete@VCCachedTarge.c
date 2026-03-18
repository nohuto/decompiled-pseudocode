/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801F8274
 * Callers:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18009C400 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1801BD88C (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 * Callees:
 *     ??1?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@QEAA@XZ @ 0x180147A38 (--1-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarget@CCachedVisua.c)
 *     ??R?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@QEBAXPEAVCCachedTarget@CCachedVisualImage@@@Z @ 0x1802077BC (--R-$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@QEBAXPEAVCCachedTarget@CCachedVisua.c)
 */

_QWORD *__fastcall std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 *v3; // rbp
  __int64 *i; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 8);
  for ( i = (__int64 *)(a3 + 8); i != v3; ++i )
  {
    v8 = *i;
    *i = 0LL;
    v9 = *(i - 1);
    *(i - 1) = v8;
    if ( v9 )
      std::default_delete<CCachedVisualImage::CCachedTarget>::operator()(a1);
  }
  std::unique_ptr<CCachedVisualImage::CCachedTarget>::~unique_ptr<CCachedVisualImage::CCachedTarget>((CCachedVisualImage::CCachedTarget **)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
