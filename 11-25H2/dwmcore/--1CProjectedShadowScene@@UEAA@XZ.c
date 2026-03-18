/*
 * XREFs of ??1CProjectedShadowScene@@UEAA@XZ @ 0x1801B704C
 * Callers:
 *     ??_GCProjectedShadowScene@@UEAAPEAXI@Z @ 0x1801B7000 (--_GCProjectedShadowScene@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x1801B7A24 (-ClearReceivers@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x1801B7B6C (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x1801B7BE4 (--$_Free_non_head@V-$allocator@U-$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@st.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1801E5D04 (-clear@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x18025191C (-ClearCasters@CProjectedShadowScene@@AEAAXXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x1802519D0 (--$_Free_non_head@V-$allocator@U-$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@.c)
 */

void __fastcall CProjectedShadowScene::~CProjectedShadowScene(struct CResource **this)
{
  struct CResource *v2; // rsi
  struct CResource *i; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *this = (struct CResource *)&CProjectedShadowScene::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
  this[13] = 0LL;
  CProjectedShadowScene::RequestRedrawAll((CProjectedShadowScene *)this);
  v2 = this[11];
  for ( i = *(struct CResource **)v2; i != v2; i = *(struct CResource **)i )
    std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear((char *)i + 24);
  CProjectedShadowScene::ClearCasters((CProjectedShadowScene *)this);
  CProjectedShadowScene::ClearReceivers((CProjectedShadowScene *)this);
  std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
    v4,
    this[11]);
  std::_Deallocate<16,0>(this[11], 0x78uLL);
  std::_List_node<CProjectedShadowScene::CasterEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>(
    v5,
    this[9]);
  std::_Deallocate<16,0>(this[9], 0xB0uLL);
  CResource::~CResource((CResource *)this);
}
