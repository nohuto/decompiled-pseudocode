/*
 * XREFs of _std::vector_ImmersiveShellComponentsConfiguration::ClassIdAndInfo_std::allocator_ImmersiveShellComponentsConfiguration::ClassIdAndInfo___::_Emplace_reallocate_ImmersiveShellComponentsConfiguration::ClassIdAndInfo__::_1_::catch$0 @ 0x1806E70F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_ImmersiveShellComponentsConfiguration::ClassIdAndInfo_std::allocator_ImmersiveShellComponentsConfiguration::ClassIdAndInfo___::_Emplace_reallocate_ImmersiveShellComponentsConfiguration::ClassIdAndInfo__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), (const struct std::nothrow_t *)(24LL * *(_QWORD *)(a2 + 80)));
  throw;
}
