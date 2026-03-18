/*
 * XREFs of ??1?$_Hash@V?$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@std@@V?$allocator@PEAVIBatchProcessingCompleteListener@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1802523CC
 * Callers:
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x18022C09C (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 *     ??1CAnimationTrigger@@UEAA@XZ @ 0x1802523A4 (--1CAnimationTrigger@@UEAA@XZ.c)
 *     ??1DataSourcePropertySet@@QEAA@XZ @ 0x18027C22C (--1DataSourcePropertySet@@QEAA@XZ.c)
 *     ??1CExpressionManager@@EEAA@XZ @ 0x180297E2C (--1CExpressionManager@@EEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@PEAVCBaseExpression@@PEAX@std@@@std@@@?$_List_node@PEAVCBaseExpression@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@PEAVCBaseExpression@@PEAX@std@@@1@PEAU01@@Z @ 0x1802018FC (--$_Free_non_head@V-$allocator@U-$_List_node@PEAVCBaseExpression@@PEAX@std@@@std@@@-$_List_node@.c)
 */

void __fastcall std::_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>::~_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>(
        __int64 a1)
{
  _QWORD *v2; // rcx

  v2 = *(_QWORD **)(a1 + 24);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  std::_List_node<CBaseExpression *,void *>::_Free_non_head<std::allocator<std::_List_node<CBaseExpression *,void *>>>(
    (__int64)v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(_QWORD **)(a1 + 8), 0x18uLL);
}
