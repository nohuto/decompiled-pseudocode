/*
 * XREFs of ?ForEachCursorVisual@CComposition@@QEAAJV?$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@@Z @ 0x18028D618
 * Callers:
 *     ?AddCursorInvalidRects_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAXXZ @ 0x18028D2AC (-AddCursorInvalidRects_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?AddCursorInvalidRects_Feature_FixCaptureMagnifierCursors_On@CCaptureRenderTarget@@IEAAXXZ @ 0x18028D3B4 (-AddCursorInvalidRects_Feature_FixCaptureMagnifierCursors_On@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028DA5C (-RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingCon.c)
 *     ?RenderCursors_Feature_FixCaptureMagnifierCursors_On@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028DE74 (-RenderCursors_Feature_FixCaptureMagnifierCursors_On@CCaptureRenderTarget@@IEAAJPEAVCDrawingCont.c)
 * Callees:
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800C529C (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18013C54C (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@details@wil@@QEAA_NXZ @ 0x180266714 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@deta.c)
 *     ?erase@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@@Z @ 0x180266908 (-erase@-$vector@UCursorVisualData@CComposition@@V-$allocator@UCursorVisualData@CComposition@@@st.c)
 *     ??R?$_Func_class@JPEAVCVisual@@PEAVCVisualTree@@@std@@QEBAJPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x18028D264 (--R-$_Func_class@JPEAVCVisual@@PEAVCVisualTree@@@std@@QEBAJPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::ForEachCursorVisual(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 *v6; // rbx
  struct CVisual *VisualNoRef; // rax
  int v8; // eax
  CExcludeVisualReference **v9; // rbx
  struct CVisual *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::GetImpl'::`2'::impl) )
  {
    v6 = (__int64 *)a1[768];
    while ( v6 != (__int64 *)a1[767] )
    {
      v6 -= 4;
      VisualNoRef = CExcludeVisualReference::GetVisualNoRef((CExcludeVisualReference *)v6);
      if ( VisualNoRef )
      {
        v8 = std::_Func_class<long,CVisual *,CVisualTree *>::operator()(a2, (__int64)VisualNoRef, v6[3]);
        v4 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x377u, 0LL);
          break;
        }
      }
      else
      {
        std::vector<CComposition::CursorVisualData>::erase((__int64)(a1 + 767), &v14, (__int64)v6);
      }
    }
  }
  else
  {
    v9 = (CExcludeVisualReference **)a1[771];
    while ( v9 != (CExcludeVisualReference **)a1[770] )
    {
      v10 = CExcludeVisualReference::GetVisualNoRef(*--v9);
      if ( v10 )
      {
        v11 = std::_Func_class<long,CVisual *,CVisualTree *>::operator()(a2, (__int64)v10, 0LL);
        v4 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x388u, 0LL);
          break;
        }
      }
      else
      {
        std::vector<std::unique_ptr<CExcludeVisualReference>>::erase((__int64)(a1 + 770), &v14, (__int64)v9);
      }
    }
  }
  v12 = *(_QWORD *)(a2 + 56);
  if ( v12 )
  {
    LOBYTE(v5) = v12 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v5);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return v4;
}
