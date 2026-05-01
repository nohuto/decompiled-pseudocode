/*
 * XREFs of _std::vector_JointResize::SecondaryViewInfo_std::allocator_JointResize::SecondaryViewInfo___::_Emplace_reallocate_JointResize::SecondaryViewInfo__::_1_::catch$0 @ 0x1806F21E2
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewInfo@JointResize@@QEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x18029F17C (--$_Destroy_range@V-$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewI.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_JointResize::SecondaryViewInfo_std::allocator_JointResize::SecondaryViewInfo___::_Emplace_reallocate_JointResize::SecondaryViewInfo__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(
    *(JointResize::SecondaryViewInfo **)(a2 + 112),
    *(JointResize::SecondaryViewInfo **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(96LL * *(_QWORD *)(a2 + 120)));
  throw;
}
