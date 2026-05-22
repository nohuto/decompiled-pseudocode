/*
 * XREFs of ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBKW4ContextualProcessorState@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@2@@std@@AEAAXXZ @ 0x18002EFBC
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x18002EFE8 (--0-$_Hash@V-$_Umap_traits@KW4ContextualProcessorState@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ.c)
 *     ??0?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x18019B5B4 (--0-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@@U-$.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned long const,enum ContextualProcessorState>>::_Alloc_sentinel_and_proxy(
        _QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x18uLL);
  *result = result;
  result[1] = result;
  *a1 = result;
  return result;
}
