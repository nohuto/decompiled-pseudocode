/*
 * XREFs of ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1802001D8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x180033C70 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800BEE54 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?RemoveIfUnused@CPreWalkVisual@@CAXV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@std@@@std@@@std@@@Z @ 0x18018BFF0 (-RemoveIfUnused@CPreWalkVisual@@CAXV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@.c)
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$T@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@$$QEA$$T@Z @ 0x18018C1A8 (--$_Try_emplace@AEBQEAVCVisual@@$$T@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V-$_Uh.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x1802003EC (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ??$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z @ 0x180216D1C (--$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ProcessSetTransformParent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETTRANSFORMPARENT *a3)
{
  unsigned int v5; // ebp
  struct TransformParentData *TransformParentDataInternal; // rax
  __int64 v7; // r10
  unsigned int v8; // edx
  struct CResource *v9; // rsi
  __int64 v10; // r12
  struct CResource **v11; // rbx
  __int64 Resource; // rax
  struct CResource *v13; // r14
  __int64 v14; // r15
  int v15; // eax
  struct CResource **v16; // rax
  _BYTE *v18; // rcx
  _BYTE *v19; // [rsp+30h] [rbp-38h] BYREF
  CVisual *v20; // [rsp+80h] [rbp+18h] BYREF

  v5 = 0;
  TransformParentDataInternal = CVisual::GetTransformParentDataInternal(this);
  v8 = *((_DWORD *)a3 + 2);
  v9 = 0LL;
  v10 = 0LL;
  v20 = TransformParentDataInternal;
  v11 = (struct CResource **)TransformParentDataInternal;
  if ( v8 )
  {
    Resource = CResourceTable::GetResource(v7, v8, 0xBCu);
    v9 = (struct CResource *)Resource;
    if ( !Resource )
    {
      v5 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x9C0u, 0LL);
      return v5;
    }
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Resource + 184LL))(Resource);
  }
  v13 = 0LL;
  v14 = 0LL;
  if ( v11 )
  {
    v13 = *v11;
    v14 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)*v11 + 184LL))(*v11);
  }
  if ( v9 != v13 )
  {
    CResource::UnRegisterNotifierInternal(this, v13);
    if ( v9 )
    {
      v15 = CResource::RegisterNotifier(this, v9);
      v5 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x9D2u, 0LL);
        return v5;
      }
      if ( !v11 )
      {
        v16 = (struct CResource **)operator new(0x10uLL);
        v11 = v16;
        if ( v16 )
          *(_OWORD *)v16 = 0LL;
        else
          v11 = 0LL;
        CVisual::SetTransformParentDataInternal(this, (struct TransformParentData *)v11);
      }
      *v11 = v9;
      *((_BYTE *)v11 + 8) = *((_BYTE *)a3 + 12) != 0;
    }
    else if ( v11 )
    {
      SAFE_DELETE<TransformParentData>(&v20);
      CVisual::SetTransformParentDataInternal(this, 0LL);
    }
  }
  if ( ((*((_BYTE *)this + 106) & 0x10) != 0) != (v9 != 0LL) )
  {
    v20 = this;
    std::_Hash<std::_Umap_traits<CVisual *,CPreWalkVisual,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CPreWalkVisual>>,0>>::_Try_emplace<CVisual * const &,std::nullptr_t>(
      (float *)g_pComposition + 1550,
      (__int64)&v19,
      &v20);
    if ( v9 )
    {
      v19[48] = 1;
      *((_BYTE *)this + 106) |= 0x10u;
    }
    else
    {
      v18 = v19;
      v19[48] = 0;
      CPreWalkVisual::RemoveIfUnused(v18);
      *((_BYTE *)this + 106) &= ~0x10u;
    }
  }
  if ( v10 != v14 )
  {
    CVisual::PropagateFlags((__int64)this, 5u);
    CVisual::OnOuterTransformChanged(this);
  }
  return v5;
}
