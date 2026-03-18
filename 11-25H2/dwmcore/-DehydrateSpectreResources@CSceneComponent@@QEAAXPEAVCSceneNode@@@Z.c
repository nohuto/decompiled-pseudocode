/*
 * XREFs of ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x1802B6898
 * Callers:
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x1802AF31C (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?SetComponents@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@@Z @ 0x1802AF6D4 (-SetComponents@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneComponent@@$0-0@gsl@@@Z.c)
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x1802B6930 (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801B72D0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_LUID@@V-$com_ptr_t@UIDisplayDevice@Cor.c)
 *     ??$_Find@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEBQEAVCSceneNode@@@Z @ 0x18021BB24 (--$_Find@PEAVCSceneNode@@@-$_Tree@V-$_Tmap_traits@PEAVCSceneNode@@PEAXU-$less@PEAVCSceneNode@@@s.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSceneComponent::DehydrateSpectreResources(__int64 **this, struct CSceneNode *a2)
{
  __int64 **v2; // rsi
  __int64 *v4; // rbp
  __int64 v5; // r11
  __int64 v6; // rdi
  void (__fastcall *v7)(__int64, __int64); // rbx
  __int64 v8; // rax
  _QWORD *v9; // rax
  struct CSceneNode *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v2 = this + 9;
  v4 = std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Find<CSceneNode *>(
         this + 9,
         &v10);
  if ( v4 != *v2 )
  {
    v6 = *((_QWORD *)a2 + 18);
    v7 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL);
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 192LL))(v5);
    v7(v6, v8);
    v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>>>::_Extract(
           v2,
           v4);
    std::_Deallocate<16,0>(v9, 0x30uLL);
  }
}
