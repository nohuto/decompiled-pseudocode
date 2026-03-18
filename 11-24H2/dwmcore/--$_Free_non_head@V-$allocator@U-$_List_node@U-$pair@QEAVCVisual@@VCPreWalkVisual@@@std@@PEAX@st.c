/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802598D8
 * Callers:
 *     ??1?$_Hash@V?$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180259C04 (--1-$_Hash@V-$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V-$_Uhash_compare@PEAVCVisual@@U-$hash@.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18018C08C (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@s.c)
 */

void __fastcall std::_List_node<std::pair<CVisual * const,CPreWalkVisual>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CVisual * const,CPreWalkVisual>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_List_node<std::pair<CVisual * const,CPreWalkVisual>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<CVisual * const,CPreWalkVisual>,void *>>>(
        a1,
        v2);
      v2 = v3;
    }
    while ( v3 );
  }
}
