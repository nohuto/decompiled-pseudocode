/*
 * XREFs of ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180119DE8
 * Callers:
 *     ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18007E280 (-Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18007DABC (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x180119F78 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z @ 0x180119FA4 (-SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z.c)
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x18011A050 (--$_Try_emplace@AEBQEAVCVisual@@$$V@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CD.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18012B670 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012D970 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x180203490 (-IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z @ 0x18020F398 (-CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropShadow::UpdateShadowIntermediates(
        CComposition **this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  char v3; // bp
  CDropShadow::ShadowIntermediates *v7; // rsi
  CComposition *v8; // rcx
  CComposition *v9; // rax
  float v10; // xmm0_4
  int updated; // eax
  unsigned int v12; // edi
  struct CBrush *v14; // r14
  struct CVisual *v15; // rdi
  __int64 v16; // rcx
  int v17; // eax
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  float Radius; // xmm0_4
  char v21[16]; // [rsp+30h] [rbp-38h] BYREF
  struct CVisual *CurrentVisual; // [rsp+70h] [rbp+8h] BYREF

  v3 = 1;
  if ( *((_DWORD *)this + 31) == 1 )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
    v14 = 0LL;
    v15 = CurrentVisual;
    v16 = *((_QWORD *)CurrentVisual + 32);
    if ( v16 )
    {
      v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 64LL);
      if ( v18 == CColorBrush::IsOfType ? CColorBrush::IsOfType(v16, 17LL) : (unsigned __int8)v18(v16, 17LL) )
        v14 = (struct CBrush *)*((_QWORD *)v15 + 32);
    }
    v7 = (CDropShadow::ShadowIntermediates *)(*(_QWORD *)std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Try_emplace<CVisual * const &,>(
                                                           this + 25,
                                                           v21,
                                                           &CurrentVisual)
                                            + 24LL);
    v17 = CDropShadow::ShadowIntermediates::SetMask(v7, (struct CDropShadow *)this, v14);
    v12 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x22Bu, 0LL);
      return v12;
    }
  }
  else
  {
    v7 = (CDropShadow::ShadowIntermediates *)(this + 16);
  }
  v8 = this[3];
  if ( !*((_DWORD *)v8 + 1576)
    || !CComposition::IsOverdrawHeatMapEnabled(v8)
    || (Radius = CDropShadow::GetRadius((CDropShadow *)this),
        CDropShadow::ShadowIntermediates::CanUseFastShadow(v7, a3, Radius)) )
  {
    v3 = 0;
  }
  v9 = this[3];
  *((_BYTE *)this + 264) = v3;
  if ( *((_DWORD *)v9 + 1576) )
    return 0;
  v10 = CDropShadow::GetRadius((CDropShadow *)this);
  updated = CDropShadow::ShadowIntermediates::UpdateIntermediates(v7, a2, a3, v10);
  v12 = updated;
  if ( updated >= 0 )
    return 0;
  else
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x23Eu, 0LL);
  return v12;
}
