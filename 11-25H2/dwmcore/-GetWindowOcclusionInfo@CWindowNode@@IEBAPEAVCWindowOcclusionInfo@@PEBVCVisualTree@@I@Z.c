/*
 * XREFs of ?GetWindowOcclusionInfo@CWindowNode@@IEBAPEAVCWindowOcclusionInfo@@PEBVCVisualTree@@I@Z @ 0x18010C30C
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18023FEC0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?push_back@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@Z @ 0x1800CC500 (-push_back@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@st.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??1?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@QEAA@XZ @ 0x1801D6870 (--1-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@std@@QEAA@XZ.c)
 *     ?AllocateOcclusionInfo@CVisual@@MEAA?AV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@I@Z @ 0x1801D8920 (-AllocateOcclusionInfo@CVisual@@MEAA-AV-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusi.c)
 *     ?AllocateOcclusionInfo@CWindowNode@@MEAA?AV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@I@Z @ 0x1801F8D00 (-AllocateOcclusionInfo@CWindowNode@@MEAA-AV-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CWindowOcclusionInfo *__fastcall CWindowNode::GetWindowOcclusionInfo(
        CWindowNode *this,
        const struct CVisualTree *a2,
        unsigned int a3)
{
  struct _LIST_ENTRY **p_Blink; // rcx
  detail::liberal_expansion_policy *v7; // rdi
  __int64 *j; // rax
  __int64 v9; // rbx
  struct _LIST_ENTRY *v11; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rdx
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(this);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        p_Blink = &i[-22].Blink;
        if ( (const struct CVisualTree *)i[2].Flink == a2 )
          goto LABEL_3;
      }
    }
    return 0LL;
  }
  p_Blink = (struct _LIST_ENTRY **)((char *)this + 328);
LABEL_3:
  if ( !p_Blink )
    return 0LL;
  v7 = (detail::liberal_expansion_policy *)(p_Blink + 22);
  for ( j = (__int64 *)p_Blink[22]; j != (__int64 *)p_Blink[23]; ++j )
  {
    v9 = *j;
    if ( *(_DWORD *)(*j + 32) == a3 )
    {
      if ( v9 )
        return (struct CWindowOcclusionInfo *)v9;
      break;
    }
  }
  v11 = p_Blink[31];
  Blink = v11->Flink[22].Blink;
  if ( Blink == (struct _LIST_ENTRY *)CVisual::AllocateOcclusionInfo )
  {
    CVisual::AllocateOcclusionInfo(v11, &v15, a3);
  }
  else if ( Blink == (struct _LIST_ENTRY *)CWindowNode::AllocateOcclusionInfo )
  {
    CWindowNode::AllocateOcclusionInfo(v11, &v15, a3);
  }
  else
  {
    ((void (__fastcall *)(struct _LIST_ENTRY *, __int64 *, _QWORD))Blink)(v11, &v15, a3);
  }
  v9 = v15;
  detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::push_back(
    v7,
    &v15);
  std::unique_ptr<COcclusionInfo>::~unique_ptr<COcclusionInfo>(&v15);
  return (struct CWindowOcclusionInfo *)v9;
}
