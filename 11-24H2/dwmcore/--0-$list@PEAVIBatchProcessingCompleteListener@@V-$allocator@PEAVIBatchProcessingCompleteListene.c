/*
 * XREFs of ??0?$list@PEAVIBatchProcessingCompleteListener@@V?$allocator@PEAVIBatchProcessingCompleteListener@@@std@@@std@@QEAA@AEBV?$allocator@PEAVIBatchProcessingCompleteListener@@@1@@Z @ 0x1800EF864
 * Callers:
 *     ??0?$_Hash@V?$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@std@@V?$allocator@PEAVIBatchProcessingCompleteListener@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@1@AEBV?$allocator@PEAVIBatchProcessingCompleteListener@@@1@@Z @ 0x1800EF800 (--0-$_Hash@V-$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V-$_Uhash_compare@PEAVIBatchPro.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<IBatchProcessingCompleteListener *>::list<IBatchProcessingCompleteListener *>(_QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
  *v2 = v2;
  v2[1] = v2;
  *a1 = v2;
  return a1;
}
