/*
 * XREFs of ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x180113838
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x180021770 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B4B40 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSurfaceManager@@YAPEAVCSurfaceManager@@XZ @ 0x180103EA0 (-GetSurfaceManager@@YAPEAVCSurfaceManager@@XZ.c)
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x180108A80 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ.c)
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x180113A00 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x180130500 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K0@Z @ 0x1801C3E20 (-RemoveAt@CPtrArrayBase@@IEAAX_K0@Z.c)
 *     ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ @ 0x180204598 (-DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ.c)
 *     ?DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z @ 0x1802104B8 (-DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::SetFlipExSurface(struct CComposition **this, void *a2)
{
  unsigned int v4; // esi
  bool v5; // bp
  char HasNonEmptyContent; // r15
  struct CSurfaceManager *SurfaceManager; // rax
  struct CComposition *v8; // rdx
  int v9; // eax
  struct CResource *v10; // rbx
  __int64 *v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  CCompositionSurfaceBitmap *v14; // rcx
  unsigned __int64 Count; // rax
  CPtrArrayBase *v17; // rcx
  int v18; // eax
  unsigned __int64 *v19; // rax
  char v20; // al
  unsigned int v21; // edx
  CCompositionSurfaceBitmap *v22; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  v5 = 0;
  HasNonEmptyContent = CWindowNode::HasNonEmptyContent((CWindowNode *)this);
  if ( !a2 )
  {
    if ( CPtrArray<CVisual>::GetCount(this + 104) )
    {
      CWindowNode::DiscardFlipExSurfaces((CWindowNode *)this);
      v5 = ((_BYTE)this[111] & 0x10) != 0;
      *((_BYTE *)this + 888) &= ~0x10u;
    }
    goto LABEL_22;
  }
  SurfaceManager = GetSurfaceManager();
  v8 = this[3];
  v22 = 0LL;
  v9 = CCompositionSurfaceManager::CreateCompositionSurfaceBitmap(
         (struct CSurfaceManager *)((char *)SurfaceManager + 16),
         v8,
         a2,
         &v22);
  v4 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x153u, 0LL);
    v14 = v22;
    if ( !v22 )
      return v4;
    v13 = *(_QWORD *)v22;
    goto LABEL_9;
  }
  v10 = v22;
  if ( CCompositionSurfaceBitmap::GetRenderingRealization(v22) )
  {
    CWindowNode::DiscardFlipExSurfaces((CWindowNode *)this);
    *((_BYTE *)this + 888) |= 0x10u;
    v5 = 1;
  }
  else if ( CPtrArray<CVisual>::GetCount(this + 104) == 16 )
  {
    if ( ((_BYTE)this[111] & 0x10) != 0 )
    {
      v19 = __A__CPtrArray___CBX__QEBAPEBX_K_Z(v11, 1uLL);
      CResource::UnRegisterNotifierInternal((CResource *)this, (struct CResource *)v19);
      CPtrArrayBase::RemoveAt((CPtrArrayBase *)(this + 104), 1uLL, 1uLL);
    }
    else
    {
      CWindowNode::DiscardOldestFlipExSurfaces((CWindowNode *)this, 1uLL);
    }
  }
  v12 = CResource::RegisterNotifier((CResource *)this, v10);
  v4 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x178u, 0LL);
    goto LABEL_7;
  }
  Count = CPtrArray<CVisual>::GetCount(this + 104);
  v18 = CPtrArrayBase::InsertAt(v17, (unsigned __int64)v10, Count);
  v4 = v18;
  if ( v18 >= 0 )
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
LABEL_22:
    v20 = CWindowNode::HasNonEmptyContent((CWindowNode *)this);
    v21 = (4 * v5) | 1;
    if ( HasNonEmptyContent == v20 )
      v21 = 4 * v5;
    if ( v21 )
      CVisual::PropagateFlags((__int64)this, v21);
    return v4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x179u, 0LL);
LABEL_7:
  if ( v10 )
  {
    v13 = *(_QWORD *)v10;
    v14 = v10;
LABEL_9:
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(v13 + 16))(v14);
  }
  return v4;
}
