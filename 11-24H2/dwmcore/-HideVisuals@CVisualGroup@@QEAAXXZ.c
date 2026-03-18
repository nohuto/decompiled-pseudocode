/*
 * XREFs of ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x1800989B0
 * Callers:
 *     ?HideDDAVisuals@CComposition@@QEBAXXZ @ 0x180098B40 (-HideDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?HideVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x18021F0D0 (-HideVisuals@CMagnifierRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180096AD4 (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 *     ?Hide@CExcludeVisualReference@@QEAAJXZ @ 0x1800971F0 (-Hide@CExcludeVisualReference@@QEAAJXZ.c)
 */

void __fastcall CVisualGroup::HideVisuals(CVisualGroup *this)
{
  CExcludeVisualReference **v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CExcludeVisualReference **)*((_QWORD *)this + 9);
  while ( v1 != *((CExcludeVisualReference ***)this + 10) )
  {
    if ( (int)CExcludeVisualReference::Hide(*v1) < 0 )
      v1 = (CExcludeVisualReference **)*std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(
                                          (__int64)this + 72,
                                          &v3,
                                          (__int64)v1);
    else
      ++v1;
  }
}
