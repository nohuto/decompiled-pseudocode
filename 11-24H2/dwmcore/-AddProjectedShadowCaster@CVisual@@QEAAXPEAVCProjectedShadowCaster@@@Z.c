/*
 * XREFs of ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x180222AAC
 * Callers:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x1800E7450 (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18003BA50 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800DEA80 (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$T@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@$$QEA$$T@Z @ 0x18018C1A8 (--$_Try_emplace@AEBQEAVCVisual@@$$T@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V-$_Uh.c)
 *     ?SetProjectedShadowCasters@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@@Z @ 0x180227B5C (-SetProjectedShadowCasters@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@P.c)
 */

void __fastcall CVisual::AddProjectedShadowCaster(CVisual *this, struct CProjectedShadowCaster *a2)
{
  _QWORD *v4; // rax
  __int64 ProjectedShadowCasters; // rax
  _QWORD *v6; // rbx
  _BYTE *v7; // rdx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  CVisual *v9; // [rsp+40h] [rbp+8h] BYREF
  struct CProjectedShadowCaster *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  if ( (**((_DWORD **)this + 29) & 0x80000) == 0 )
  {
    v4 = operator new(0x18uLL);
    if ( v4 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
    CVisual::SetProjectedShadowCasters(this, v4);
  }
  ProjectedShadowCasters = CVisual::GetProjectedShadowCasters((__int64)this);
  v6 = (_QWORD *)ProjectedShadowCasters;
  v7 = *(_BYTE **)(ProjectedShadowCasters + 8);
  if ( v7 == *(_BYTE **)(ProjectedShadowCasters + 16) )
  {
    std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
      (const void **)ProjectedShadowCasters,
      v7,
      &v10);
  }
  else
  {
    *(_QWORD *)v7 = a2;
    *(_QWORD *)(ProjectedShadowCasters + 8) += 8LL;
  }
  if ( v6[1] - *v6 == 8LL )
  {
    v9 = this;
    std::_Hash<std::_Umap_traits<CVisual *,CPreWalkVisual,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CPreWalkVisual>>,0>>::_Try_emplace<CVisual * const &,std::nullptr_t>(
      (float *)g_pComposition + 1550,
      (__int64)v8,
      &v9);
    *(_BYTE *)(v8[0] + 50LL) = 1;
  }
}
