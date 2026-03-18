/*
 * XREFs of std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_tagRECT______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_c3c427167b990826593ca3f677af520c___ @ 0x180222C74
 * Callers:
 *     ?AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x180222B9C (-AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     _lambda_c3c427167b990826593ca3f677af520c_::operator() @ 0x1801C3850 (_lambda_c3c427167b990826593ca3f677af520c_--operator().c)
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x1801F6ED4 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAPEAU.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

_QWORD *std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_tagRECT______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_c3c427167b990826593ca3f677af520c___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ...)
{
  __int64 i; // rsi
  int *v8; // rax
  _BYTE *v9; // rdx
  int v11[4]; // [rsp+20h] [rbp-28h] BYREF
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, a4);
  for ( i = a2; i != a3; i += 16LL )
  {
    v8 = lambda_c3c427167b990826593ca3f677af520c_::operator()((__int64 *)va, v11, i);
    v9 = *(_BYTE **)(a4 + 8);
    if ( v9 == *(_BYTE **)(a4 + 16) )
    {
      std::vector<tagRECT>::_Emplace_reallocate<tagRECT>((const void **)a4, v9, v8);
    }
    else
    {
      *(_OWORD *)v9 = *(_OWORD *)v8;
      *(_QWORD *)(a4 + 8) += 16LL;
    }
  }
  *a1 = a4;
  return a1;
}
