/*
 * XREFs of ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180037BE0
 * Callers:
 *     ?ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTENT@@@Z @ 0x180037760 (-ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTENT@@@Z.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801F762C (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     ?SetSuperWetInkSource@?$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@QEAAJPEAVCSuperWetSource@@@Z @ 0x180279ECC (-SetSuperWetInkSource@-$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@QEAAJPEAVC.c)
 *     ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x18028E460 (-OnRootChanged@CSceneVisual@@QEAAJXZ.c)
 *     ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x1802A66D0 (-SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?Initialize@CTextVisual@@MEAAJXZ @ 0x1802A7D00 (-Initialize@CTextVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UpdateContentFlags@CVisual@@AEAAXXZ @ 0x180037E5C (-UpdateContentFlags@CVisual@@AEAAXXZ.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180037EF0 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800380C0 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800380F0 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180038200 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800C0810 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18010FF8C (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180136530 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801CA100 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z @ 0x180260728 (-RegisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::SetContent(CVisual *this, struct CContent *a2)
{
  unsigned int v2; // esi
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // r8
  int v8; // eax
  unsigned int (__fastcall *v9)(CMILRefCountImpl *__hidden); // rax
  __int64 v10; // r14
  __int64 (__fastcall *v11)(CCachedVisualImage *); // rax
  __int64 (__fastcall *v12)(struct CContent *, __int64); // rax
  char v13; // al
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  char v16; // al
  __int64 v17; // rsi
  CVisual **v18; // rcx
  CVisual **v19; // r8
  CVisual **v20; // rdx

  v2 = 0;
  if ( a2 != *((struct CContent **)this + 32) )
  {
    CVisual::ClearContentTreeDataCaches(this);
    v5 = *((_QWORD *)this + 32);
    if ( v5 )
    {
      v15 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 64LL);
      if ( v15 == CRenderData::IsOfType )
      {
        v16 = CRenderData::IsOfType(v5, 170LL);
      }
      else if ( v15 == CSurfaceBrush::IsOfType )
      {
        v16 = CSurfaceBrush::IsOfType(v5, 170LL);
      }
      else
      {
        v16 = v15 == CCompositionSurfaceBitmap::IsOfType
            ? CCompositionSurfaceBitmap::IsOfType(v5, 170LL)
            : v15(v5, 170LL);
      }
      if ( v16 )
      {
        v17 = *((_QWORD *)g_pComposition + 82);
        v18 = *(CVisual ***)(v17 + 8);
        v19 = *(CVisual ***)(v17 + 16);
        if ( v18 != v19 )
        {
          while ( 1 )
          {
            v20 = v18 + 1;
            if ( *v18 == this )
              break;
            ++v18;
            if ( v20 == v19 )
              goto LABEL_3;
          }
          memmove_0(v18, v20, (char *)v19 - (char *)v20);
          *(_QWORD *)(v17 + 16) -= 8LL;
        }
      }
    }
LABEL_3:
    if ( a2 )
    {
      v6 = *((_QWORD *)a2 + 4);
      if ( (v6 & 2) != 0 )
        v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v7 = *((_QWORD *)a2 + 4) & 1LL;
      v8 = CPtrArrayBase::InsertAt((struct CContent *)((char *)a2 + 32), (unsigned __int64)this, v7);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xD9u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x208u, 0LL);
        return v2;
      }
      v9 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)a2 + 8LL);
      if ( v9 == CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference(a2);
      else
        v9(a2);
    }
    else
    {
      v2 = 0;
    }
    v10 = *((_QWORD *)this + 32);
    if ( v10 && CPtrArrayBase::Remove((CPtrArrayBase *)(v10 + 32), (unsigned __int64)this) )
    {
      v11 = *(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v10 + 16LL);
      if ( v11 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease((CCachedVisualImage *)v10);
      else
        v11((CCachedVisualImage *)v10);
    }
    *((_QWORD *)this + 32) = a2;
    if ( a2 )
    {
      v12 = *(__int64 (__fastcall **)(struct CContent *, __int64))(*(_QWORD *)a2 + 64LL);
      if ( (char *)v12 == (char *)CColorBrush::IsOfType )
      {
        v13 = CColorBrush::IsOfType(a2, 170LL);
      }
      else if ( (char *)v12 == (char *)CMaskBrush::IsOfType )
      {
        v13 = CMaskBrush::IsOfType(a2, 170LL);
      }
      else if ( (char *)v12 == (char *)CCompositionSurfaceBitmap::IsOfType )
      {
        v13 = CCompositionSurfaceBitmap::IsOfType(a2, 170LL);
      }
      else
      {
        v13 = v12(a2, 170LL);
      }
      if ( v13 )
        CSuperWetInkManager::RegisterSuperWetInkVisual(*((CSuperWetInkManager **)g_pComposition + 82), this);
    }
    CVisual::UpdateContentFlags(this);
    CVisual::PropagateFlags(this, 21LL);
  }
  return v2;
}
