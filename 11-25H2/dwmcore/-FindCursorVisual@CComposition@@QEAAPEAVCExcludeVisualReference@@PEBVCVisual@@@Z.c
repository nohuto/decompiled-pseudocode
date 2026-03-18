/*
 * XREFs of ?FindCursorVisual@CComposition@@QEAAPEAVCExcludeVisualReference@@PEBVCVisual@@@Z @ 0x18023C5DC
 * Callers:
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180198818 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800C529C (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18013C54C (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@details@wil@@QEAA_NXZ @ 0x180266714 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@deta.c)
 *     ?erase@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@@Z @ 0x180266908 (-erase@-$vector@UCursorVisualData@CComposition@@V-$allocator@UCursorVisualData@CComposition@@@st.c)
 */

struct CExcludeVisualReference *__fastcall CComposition::FindCursorVisual(CComposition *this, const struct CVisual *a2)
{
  CExcludeVisualReference *v4; // rbx
  const struct CVisual *VisualNoRef; // rax
  CExcludeVisualReference **v7; // rbx
  CExcludeVisualReference ***v8; // rsi
  CExcludeVisualReference *v9; // rdi
  const struct CVisual *v10; // rax
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::GetImpl'::`2'::impl) )
  {
    v4 = (CExcludeVisualReference *)*((_QWORD *)this + 768);
    while ( v4 != *((CExcludeVisualReference **)this + 767) )
    {
      v4 = (CExcludeVisualReference *)((char *)v4 - 32);
      VisualNoRef = CExcludeVisualReference::GetVisualNoRef(v4);
      if ( VisualNoRef )
      {
        if ( VisualNoRef == a2 )
          return v4;
      }
      else
      {
        std::vector<CComposition::CursorVisualData>::erase((char *)this + 6136, &v11, v4);
      }
    }
  }
  else
  {
    v7 = (CExcludeVisualReference **)*((_QWORD *)this + 771);
    v8 = (CExcludeVisualReference ***)((char *)this + 6160);
    while ( v7 != *v8 )
    {
      v9 = *--v7;
      v10 = CExcludeVisualReference::GetVisualNoRef(*v7);
      if ( v10 )
      {
        if ( v10 == a2 )
          return v9;
      }
      else
      {
        std::vector<std::unique_ptr<CExcludeVisualReference>>::erase((__int64)v8, &v11, (__int64)v7);
      }
    }
  }
  return 0LL;
}
