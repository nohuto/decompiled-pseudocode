/*
 * XREFs of _std::vector_KeyboardProcessor::TargetingInfo_std::allocator_KeyboardProcessor::TargetingInfo___::_Emplace_reallocate_KeyboardProcessor::TargetingInfo_&__::_1_::catch$0 @ 0x1801D1256
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInfo@KeyboardProcessor@@QEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x18002C300 (--$_Destroy_range@V-$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInf.c)
 *     _CxxThrowException_0 @ 0x18009DCB6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_KeyboardProcessor::TargetingInfo_std::allocator_KeyboardProcessor::TargetingInfo___::_Emplace_reallocate_KeyboardProcessor::TargetingInfo____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<KeyboardProcessor::TargetingInfo>>(
    *(KeyboardProcessor::TargetingInfo **)(a2 + 112),
    *(KeyboardProcessor::TargetingInfo **)(a2 + 136));
  std::_Deallocate<16,0>(*(char **)(a2 + 32), (const struct std::nothrow_t *)(384LL * *(_QWORD *)(a2 + 120)));
  throw;
}
