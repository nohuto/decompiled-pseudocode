/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@PEAVCBaseExpression@@PEAX@std@@@std@@@?$_List_node@PEAVCBaseExpression@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@PEAVCBaseExpression@@PEAX@std@@@1@PEAU01@@Z @ 0x1802018FC
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x18003B1F0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ??1?$_Hash@V?$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@std@@V?$allocator@PEAVIBatchProcessingCompleteListener@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1802523CC (--1-$_Hash@V-$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V-$_Uhash_compare@PEAVIBatchPro.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18027C338 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<CBaseExpression *,void *>::_Free_non_head<std::allocator<std::_List_node<CBaseExpression *,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_Deallocate<16,0>(v2, 0x18uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
