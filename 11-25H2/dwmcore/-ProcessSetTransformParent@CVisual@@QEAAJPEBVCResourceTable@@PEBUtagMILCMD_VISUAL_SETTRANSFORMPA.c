/*
 * XREFs of ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800BFE44
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x1800221B0 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B80C0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x1800C0058 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?RemoveIfUnused@CPreWalkVisual@@CAXV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@std@@@std@@@std@@@Z @ 0x1800C1138 (-RemoveIfUnused@CPreWalkVisual@@CAXV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@.c)
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$T@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@$$QEA$$T@Z @ 0x1800C12F0 (--$_Try_emplace@AEBQEAVCVisual@@$$T@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V-$_Uh.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800E53C4 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ??$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z @ 0x180222D18 (--$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  CVisual *v19; // [rsp+80h] [rbp+18h] BYREF

  v5 = 0;
  TransformParentDataInternal = CVisual::GetTransformParentDataInternal(this);
  v8 = *((_DWORD *)a3 + 2);
  v9 = 0LL;
  v10 = 0LL;
  v19 = TransformParentDataInternal;
  v11 = (struct CResource **)TransformParentDataInternal;
  if ( v8 )
  {
    Resource = CResourceTable::GetResource(v7, v8, 0xBAu);
    v9 = (struct CResource *)Resource;
    if ( !Resource )
    {
      v5 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x9A6u, 0LL);
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
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x9B8u, 0LL);
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
      SAFE_DELETE<TransformParentData>(&v19);
      CVisual::SetTransformParentDataInternal(this, 0LL);
    }
  }
  if ( ((*((_BYTE *)this + 106) & 0x10) != 0) != (v9 != 0LL) )
  {
    v19 = this;
    std::_Hash<std::_Umap_traits<CVisual *,CPreWalkVisual,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CPreWalkVisual>>,0>>::_Try_emplace<CVisual * const &,std::nullptr_t>(
      (char *)g_pComposition + 6224,
      &v18,
      &v19);
    if ( v9 )
    {
      *(_BYTE *)(v18 + 48) = 1;
      *((_BYTE *)this + 106) |= 0x10u;
    }
    else
    {
      *(_BYTE *)(v18 + 48) = 0;
      CPreWalkVisual::RemoveIfUnused();
      *((_BYTE *)this + 106) &= ~0x10u;
    }
  }
  if ( v10 != v14 )
  {
    CVisual::PropagateFlags(this, 5LL);
    CVisual::OnOuterTransformChanged(this);
  }
  return v5;
}
