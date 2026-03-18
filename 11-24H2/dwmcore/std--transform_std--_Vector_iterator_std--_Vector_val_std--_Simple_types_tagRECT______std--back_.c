/*
 * XREFs of std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_tagRECT______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_c3c427167b990826593ca3f677af520c___ @ 0x1800A60E4
 * Callers:
 *     ?AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x1800A600C (-AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     _lambda_c3c427167b990826593ca3f677af520c_::operator() @ 0x1801B3A80 (_lambda_c3c427167b990826593ca3f677af520c_--operator().c)
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x1801E9BC4 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAPEAU.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

_QWORD *std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_tagRECT______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_c3c427167b990826593ca3f677af520c___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ...)
{
  __int64 i; // rsi
  _OWORD *v8; // rax
  _OWORD *v9; // rdx
  _BYTE v11[16]; // [rsp+20h] [rbp-28h] BYREF
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, a4);
  for ( i = a2; i != a3; i += 16LL )
  {
    v8 = (_OWORD *)lambda_c3c427167b990826593ca3f677af520c_::operator()(va, v11, i);
    v9 = *(_OWORD **)(a4 + 8);
    if ( v9 == *(_OWORD **)(a4 + 16) )
    {
      std::vector<tagRECT>::_Emplace_reallocate<tagRECT>(a4, v9, v8);
    }
    else
    {
      *v9 = *v8;
      *(_QWORD *)(a4 + 8) += 16LL;
    }
  }
  *a1 = a4;
  return a1;
}
