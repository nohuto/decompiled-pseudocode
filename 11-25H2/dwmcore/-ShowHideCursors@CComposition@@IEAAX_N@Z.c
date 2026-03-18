/*
 * XREFs of ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800764D0
 * Callers:
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18007609C (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?HideVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x1800764A0 (-HideVisuals@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C7228 (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Hide@CExcludeVisualReference@@QEAAJXZ @ 0x1800C5254 (-Hide@CExcludeVisualReference@@QEAAJXZ.c)
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18013C54C (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@details@wil@@QEAA_NXZ @ 0x180266714 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@deta.c)
 *     ?erase@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@@Z @ 0x180266908 (-erase@-$vector@UCursorVisualData@CComposition@@V-$allocator@UCursorVisualData@CComposition@@@st.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::ShowHideCursors(CComposition *this, char a2)
{
  CExcludeVisualReference *v4; // rbx
  int v5; // eax
  CExcludeVisualReference **v6; // rbx
  CExcludeVisualReference *v7; // rcx
  int v8; // eax
  char v9; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::GetImpl'::`2'::impl) )
  {
    v4 = (CExcludeVisualReference *)*((_QWORD *)this + 768);
    while ( v4 != *((CExcludeVisualReference **)this + 767) )
    {
      v4 = (CExcludeVisualReference *)((char *)v4 - 32);
      if ( a2 )
        v5 = (**(__int64 (__fastcall ***)(CExcludeVisualReference *))v4)(v4);
      else
        v5 = CExcludeVisualReference::Hide(v4);
      if ( v5 < 0 )
        std::vector<CComposition::CursorVisualData>::erase((char *)this + 6136, &v9, v4);
    }
  }
  else
  {
    v6 = (CExcludeVisualReference **)*((_QWORD *)this + 771);
    while ( v6 != *((CExcludeVisualReference ***)this + 770) )
    {
      v7 = *--v6;
      if ( a2 )
        v8 = (**(__int64 (__fastcall ***)(CExcludeVisualReference *))v7)(v7);
      else
        v8 = CExcludeVisualReference::Hide(v7);
      if ( v8 < 0 )
        std::vector<std::unique_ptr<CExcludeVisualReference>>::erase((char *)this + 6160, &v9, v6);
    }
  }
}
