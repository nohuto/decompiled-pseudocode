/*
 * XREFs of ?UnregisterTransformParentChild@CPreWalkVisual@@SAXPEAVCVisual@@@Z @ 0x1800C126C
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180108F2C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$T@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@$$QEA$$T@Z @ 0x1800C12F0 (--$_Try_emplace@AEBQEAVCVisual@@$$T@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V-$_Uh.c)
 */

void __fastcall CPreWalkVisual::UnregisterTransformParentChild(struct CVisual *a1)
{
  _BYTE *v1; // rcx
  _BYTE *v2; // [rsp+20h] [rbp-18h] BYREF
  struct CVisual *v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  std::_Hash<std::_Umap_traits<CVisual *,CPreWalkVisual,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CPreWalkVisual>>,0>>::_Try_emplace<CVisual * const &,std::nullptr_t>(
    (char *)g_pComposition + 6224,
    &v2,
    &v3);
  v1 = v2;
  v2[48] = 0;
  CPreWalkVisual::RemoveIfUnused(v1);
}
