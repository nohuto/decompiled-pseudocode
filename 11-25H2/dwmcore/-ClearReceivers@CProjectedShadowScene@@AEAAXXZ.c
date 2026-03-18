/*
 * XREFs of ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x1801B7A24
 * Callers:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x1801B704C (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ProcessClearReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_CLEARRECEIVERS@@@Z @ 0x1801B7148 (-ProcessClearReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSH.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x1801B7B6C (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x1801B7BE4 (--$_Free_non_head@V-$allocator@U-$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@st.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1801E5D04 (-clear@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     __std_find_trivial_8 @ 0x18025BDA0 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall CProjectedShadowScene::ClearReceivers(CProjectedShadowScene *this)
{
  char *v2; // rdi
  _QWORD **v3; // rsi
  _QWORD *i; // rbx
  _QWORD **v5; // rsi
  _QWORD *j; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  _QWORD **v10; // rax
  __int64 v11; // r14
  __int64 trivial_8; // rax
  __int64 v13; // r8
  char v14; // [rsp+20h] [rbp-18h] BYREF

  CProjectedShadowScene::RequestRedrawAll(this);
  v2 = (char *)this + 88;
  v3 = (_QWORD **)*((_QWORD *)this + 11);
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
    std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear(i + 3);
  v5 = *(_QWORD ***)v2;
  for ( j = **(_QWORD ***)v2; j != v5; j = (_QWORD *)*j )
  {
    v11 = j[2];
    trivial_8 = _std_find_trivial_8(*(_QWORD *)(v11 + 80), *(_QWORD *)(v11 + 88), this);
    v13 = *(_QWORD *)(v11 + 88);
    if ( trivial_8 != v13 )
    {
      memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), v13 - (trivial_8 + 8));
      *(_QWORD *)(v11 + 88) -= 8LL;
    }
  }
  v8 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x78uLL);
  *v8 = v8;
  v8[1] = v8;
  if ( v2 != &v14 )
  {
    v10 = *(_QWORD ***)v2;
    *(_QWORD *)v2 = v8;
    v8 = v10;
    *((_QWORD *)this + 12) = 0LL;
  }
  std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
    v7,
    v8);
  *v8 = v8;
  v8[1] = v8;
  std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
    v9,
    v8);
  std::_Deallocate<16,0>(v8, 0x78uLL);
}
