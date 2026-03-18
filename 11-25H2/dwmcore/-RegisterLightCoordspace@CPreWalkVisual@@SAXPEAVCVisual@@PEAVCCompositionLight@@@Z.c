/*
 * XREFs of ?RegisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z @ 0x1800C10C8
 * Callers:
 *     ?UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXPEAVCVisual@@@Z @ 0x1800C1028 (-UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$T@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@$$QEA$$T@Z @ 0x1800C12F0 (--$_Try_emplace@AEBQEAVCVisual@@$$T@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V-$_Uh.c)
 *     ??$_Emplace_reallocate@AEBQEAVCCompositionLight@@@?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@AEAAPEAPEAVCCompositionLight@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800C179C (--$_Emplace_reallocate@AEBQEAVCCompositionLight@@@-$vector@PEAVCCompositionLight@@V-$allocator@P.c)
 */

void __fastcall CPreWalkVisual::RegisterLightCoordspace(struct CVisual *a1, struct CCompositionLight *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  struct CVisual *v7; // [rsp+40h] [rbp+8h] BYREF
  struct CCompositionLight *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  std::_Hash<std::_Umap_traits<CVisual *,CPreWalkVisual,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CPreWalkVisual>>,0>>::_Try_emplace<CVisual * const &,std::nullptr_t>(
    (char *)g_pComposition + 6224,
    v6,
    &v7);
  v3 = v6[0];
  v4 = v6[0] + 24LL;
  v5 = *(_QWORD **)(v6[0] + 32LL);
  if ( v5 == *(_QWORD **)(v6[0] + 40LL) )
  {
    std::vector<CCompositionLight *>::_Emplace_reallocate<CCompositionLight * const &>(v4, v5, &v8);
  }
  else
  {
    *v5 = a2;
    *(_QWORD *)(v4 + 8) += 8LL;
  }
  *(_BYTE *)(v3 + 49) = 1;
}
