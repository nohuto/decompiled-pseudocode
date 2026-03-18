/*
 * XREFs of ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x18025191C
 * Callers:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x1801B704C (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ProcessClearCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_CLEARCASTERS@@@Z @ 0x180251904 (-ProcessClearCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHAD.c)
 * Callees:
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x1801B7B6C (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1801E5D04 (-clear@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x1802519D0 (--$_Free_non_head@V-$allocator@U-$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@.c)
 *     __std_find_trivial_8 @ 0x18025BDA0 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall CProjectedShadowScene::ClearCasters(CProjectedShadowScene *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rsi
  _QWORD *i; // rbx
  _QWORD *v5; // rsi
  _QWORD *j; // rbx
  __int64 v7; // rbp
  __int64 trivial_8; // rax
  __int64 v9; // r8

  CProjectedShadowScene::RequestRedrawAll(this);
  v3 = (_QWORD *)*((_QWORD *)this + 11);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
    std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear(i + 3);
  v5 = (_QWORD *)*((_QWORD *)this + 9);
  for ( j = (_QWORD *)*v5; j != v5; j = (_QWORD *)*j )
  {
    v7 = j[2];
    trivial_8 = _std_find_trivial_8(*(_QWORD *)(v7 + 104), *(_QWORD *)(v7 + 112), this);
    v9 = *(_QWORD *)(v7 + 112);
    if ( trivial_8 != v9 )
    {
      memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), v9 - (trivial_8 + 8));
      *(_QWORD *)(v7 + 112) -= 8LL;
    }
  }
  std::_List_node<CProjectedShadowScene::CasterEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>(
    v2,
    *((_QWORD *)this + 9));
  **((_QWORD **)this + 9) = *((_QWORD *)this + 9);
  *(_QWORD *)(*((_QWORD *)this + 9) + 8LL) = *((_QWORD *)this + 9);
  *((_QWORD *)this + 10) = 0LL;
}
