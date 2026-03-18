/*
 * XREFs of ?ResetAllBackdropVisualImagesForVisualTree@CVisual@@QEBAXPEBVCVisualTree@@@Z @ 0x180031F58
 * Callers:
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180230200 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180032D1C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@w.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800D6E60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::ResetAllBackdropVisualImagesForVisualTree(CVisual *this, const struct CVisualTree *a2)
{
  struct _LIST_ENTRY *v4; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v6; // rbx
  __int64 v7; // rbx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx

  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v4 = (struct _LIST_ENTRY *)((char *)this + 328);
LABEL_3:
    if ( v4 )
    {
      Flink = v4[9].Flink;
      v6 = ((char *)v4[9].Blink - (char *)Flink) >> 3;
      if ( v6 )
      {
        v7 = 8 * v6;
        std::_Destroy_range<std::allocator<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>>(
          Flink,
          (char *)Flink + v7);
        v4[9].Blink = (struct _LIST_ENTRY *)((char *)v4[9].Blink - v7);
      }
    }
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(this);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        v4 = i - 22;
        if ( (const struct CVisualTree *)i[2].Flink == a2 )
          goto LABEL_3;
      }
    }
  }
}
