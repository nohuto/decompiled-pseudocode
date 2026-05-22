/*
 * XREFs of _std::vector_ContextualProcessorManager::ContextualProcessorEntry_std::allocator_ContextualProcessorManager::ContextualProcessorEntry___::_Emplace_reallocate_ContextualProcessorManager::ContextualProcessorEntry__::_1_::catch$1 @ 0x1801CB718
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAXPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x1800599B8 (--$_Destroy_range@V-$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@.c)
 *     _CxxThrowException_0 @ 0x18009DAE6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_ContextualProcessorManager::ContextualProcessorEntry_std::allocator_ContextualProcessorManager::ContextualProcessorEntry___::_Emplace_reallocate_ContextualProcessorManager::ContextualProcessorEntry__::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<ContextualProcessorManager::ContextualProcessorEntry>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(char **)(a2 + 32), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 120)));
  throw;
}
