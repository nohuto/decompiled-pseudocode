/*
 * XREFs of ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18012DD40
 * Callers:
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x180078530 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     ?ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTENT@@@Z @ 0x18012E1C8 (-ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTENT@@@Z.c)
 *     ?SetSuperWetInkSource@?$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@QEAAJPEAVCSuperWetSource@@@Z @ 0x180284AEC (-SetSuperWetInkSource@-$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@QEAAJPEAVC.c)
 *     ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x180299890 (-OnRootChanged@CSceneVisual@@QEAAJXZ.c)
 *     ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x1802B0210 (-SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?Initialize@CTextVisual@@MEAAJXZ @ 0x1802B17C0 (-Initialize@CTextVisual@@MEAAJXZ.c)
 * Callees:
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007D700 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B4B40 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012D970 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UpdateContentFlags@CVisual@@AEAAXXZ @ 0x18012DFBC (-UpdateContentFlags@CVisual@@AEAAXXZ.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x18012E050 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E300 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012EA10 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F8D0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18014BBCC (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?RegisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z @ 0x18026BF94 (-RegisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::SetContent(CVisual *this, struct CContent *a2)
{
  unsigned int v2; // esi
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // r8
  int v8; // eax
  __int64 (__fastcall *v9)(CMILRefCountImpl *); // rax
  __int64 v10; // r14
  __int64 (__fastcall *v11)(CResource *); // rax
  bool (__fastcall *v12)(__int64, unsigned __int64); // rax
  char v13; // al
  bool (__fastcall *v15)(__int64, int); // rax
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
      v15 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v5 + 64LL);
      if ( (char *)v15 == (char *)CRenderData::IsOfType )
      {
        v16 = CRenderData::IsOfType(v5, 168LL);
      }
      else if ( v15 == CSurfaceBrush::IsOfType )
      {
        v16 = CSurfaceBrush::IsOfType(v5, 168);
      }
      else
      {
        v16 = (char *)v15 == (char *)CCompositionSurfaceBitmap::IsOfType
            ? CCompositionSurfaceBitmap::IsOfType(v5, 168LL)
            : v15(v5, 168);
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
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xD9u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x208u, 0LL);
        return v2;
      }
      v9 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)a2 + 8LL);
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
      v11 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v10 + 16LL);
      if ( v11 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease((CResource *)v10);
      else
        v11((CResource *)v10);
    }
    *((_QWORD *)this + 32) = a2;
    if ( a2 )
    {
      v12 = *(bool (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a2 + 64LL);
      if ( v12 == CColorBrush::IsOfType )
      {
        v13 = CColorBrush::IsOfType((__int64)a2, 0xA8uLL);
      }
      else if ( (char *)v12 == (char *)CMaskBrush::IsOfType )
      {
        v13 = CMaskBrush::IsOfType(a2, 168LL);
      }
      else if ( (char *)v12 == (char *)CCompositionSurfaceBitmap::IsOfType )
      {
        v13 = CCompositionSurfaceBitmap::IsOfType(a2, 168LL);
      }
      else
      {
        v13 = v12((__int64)a2, 168uLL);
      }
      if ( v13 )
        CSuperWetInkManager::RegisterSuperWetInkVisual(*((CSuperWetInkManager **)g_pComposition + 82), this);
    }
    CVisual::UpdateContentFlags(this);
    CVisual::PropagateFlags((__int64)this, 0x15u);
  }
  return v2;
}
