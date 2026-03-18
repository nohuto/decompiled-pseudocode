/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180096AD4
 * Callers:
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x1800989B0 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x180098E40 (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x18028DA18 (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z @ 0x18028DAEC (-RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z.c)
 * Callees:
 *     ??1?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@QEAA@XZ @ 0x1800963B4 (--1-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReference@@@std@@@std.c)
 *     ??R?$default_delete@VCExcludeVisualReference@@@std@@QEBAXPEAVCExcludeVisualReference@@@Z @ 0x1800963D4 (--R-$default_delete@VCExcludeVisualReference@@@std@@QEBAXPEAVCExcludeVisualReference@@@Z.c)
 */

_QWORD *__fastcall std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 *i; // rdi
  __int64 v8; // rax
  CExcludeVisualReference *v9; // rdx
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 8);
  for ( i = (__int64 *)(a3 + 8); i != v3; ++i )
  {
    v8 = *i;
    *i = 0LL;
    v9 = (CExcludeVisualReference *)*(i - 1);
    *(i - 1) = v8;
    if ( v9 )
      std::default_delete<CExcludeVisualReference>::operator()(a1, v9);
  }
  std::unique_ptr<CExcludeVisualReference>::~unique_ptr<CExcludeVisualReference>((_QWORD *)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
