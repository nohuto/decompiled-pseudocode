/*
 * XREFs of ?UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z @ 0x18018BDE8
 * Callers:
 *     ?UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXPEAVCVisual@@@Z @ 0x18018BEE0 (-UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXPEAVCVisual@@@Z.c)
 *     ??1CCompositionSpotLight@@EEAA@XZ @ 0x18018C624 (--1CCompositionSpotLight@@EEAA@XZ.c)
 *     ??1CCompositionDistantLight@@EEAA@XZ @ 0x18029501C (--1CCompositionDistantLight@@EEAA@XZ.c)
 *     ??1CCompositionPointLight@@EEAA@XZ @ 0x180297FE0 (--1CCompositionPointLight@@EEAA@XZ.c)
 * Callees:
 *     ?RemoveIfUnused@CPreWalkVisual@@CAXV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@std@@@std@@@std@@@Z @ 0x18018BFF0 (-RemoveIfUnused@CPreWalkVisual@@CAXV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@.c)
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$T@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@$$QEA$$T@Z @ 0x18018C1A8 (--$_Try_emplace@AEBQEAVCVisual@@$$T@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V-$_Uh.c)
 *     __std_find_trivial_8 @ 0x180250770 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall CPreWalkVisual::UnregisterLightCoordspace(struct CVisual *a1, struct CCompositionLight *a2)
{
  __int64 v3; // rdi
  __int64 trivial_8; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  struct CVisual *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  std::_Hash<std::_Umap_traits<CVisual *,CPreWalkVisual,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CPreWalkVisual>>,0>>::_Try_emplace<CVisual * const &,std::nullptr_t>(
    (char *)g_pComposition + 6200,
    v5,
    &v6);
  v3 = v5[0];
  trivial_8 = _std_find_trivial_8(*(_QWORD *)(v5[0] + 24LL), *(_QWORD *)(v5[0] + 32LL), a2);
  memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), *(_QWORD *)(v3 + 32) - (trivial_8 + 8));
  *(_QWORD *)(v3 + 32) -= 8LL;
  if ( *(_QWORD *)(v3 + 24) == *(_QWORD *)(v3 + 32) )
  {
    *(_BYTE *)(v3 + 49) = 0;
    CPreWalkVisual::RemoveIfUnused(v3);
  }
}
