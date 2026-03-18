/*
 * XREFs of ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x18022FA30
 * Callers:
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x18018F084 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     TryFillRenderState @ 0x18005D724 (TryFillRenderState.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18009E420 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801C4700 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?GetSuperWetInkClip@CTreeData@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1802240DC (-GetSuperWetInkClip@CTreeData@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ?TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x18024ECD8 (-TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSourc.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z @ 0x180260680 (-RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkManager::TryRegisterSuperWetForDrawHost(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2,
        struct CDrawingContext *a3,
        unsigned __int8 a4,
        bool *a5)
{
  struct CSuperWetInkManager::VailSuperWetStroke *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r9
  struct CSuperWetInkManager::VailSuperWetStroke *v12; // rsi
  int v13; // eax
  CVisual *CurrentVisual; // rax
  __int64 **TreeData; // rax
  int v17; // eax
  unsigned int v18; // ebx
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  *a5 = 0;
  if ( a2 != *(struct CSuperWetSource **)this || !*((_QWORD *)this + 10) )
    return 0LL;
  v9 = CSuperWetInkManager::TryLookupVailDataForSource(this, a2);
  v12 = v9;
  if ( !*((_QWORD *)v9 + 1) )
  {
    *((_QWORD *)v9 + 1) = v11;
    *((_QWORD *)v9 + 3) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 80) + 24LL))(*(_QWORD *)(v10 + 80));
  }
  if ( *((_QWORD *)v12 + 1) != *((_QWORD *)this + 10) )
    return 0LL;
  *((_QWORD *)v12 + 2) = *((_QWORD *)a3 + 5);
  v13 = (*(__int64 (__fastcall **)(struct CSuperWetSource *))(*(_QWORD *)a2 + 360LL))(a2);
  if ( !TryFillRenderState(a3, a4, v13, 1, (__int64)v12 + 32) )
  {
    CSuperWetInkManager::DeactivateCurrentSource(this);
    return 0LL;
  }
  CurrentVisual = CDrawingContext::GetCurrentVisual(a3);
  TreeData = CVisual::FindTreeData(CurrentVisual, *((const struct CVisualTree **)a3 + 993));
  if ( TreeData )
    v19 = *CTreeData::GetSuperWetInkClip((__int64)TreeData, &v19);
  else
    v19 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
  *(_OWORD *)((char *)v12 + 88) = v19;
  v17 = CSuperWetInkManager::RegisterStrokeOnHost(this, v12, a5);
  v18 = v17;
  if ( v17 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36C,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
    (const char *)(unsigned int)v17);
  return v18;
}
