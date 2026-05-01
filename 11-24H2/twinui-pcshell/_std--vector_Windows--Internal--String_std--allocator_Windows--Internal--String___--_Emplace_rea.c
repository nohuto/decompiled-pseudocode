/*
 * XREFs of _std::vector_Windows::Internal::String_std::allocator_Windows::Internal::String___::_Emplace_reallocate_Windows::Internal::String__::_1_::catch$0 @ 0x1806DF82A
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Windows@@QEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x18001BDA8 (--$_Destroy_range@V-$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Windows::Internal::String_std::allocator_Windows::Internal::String___::_Emplace_reallocate_Windows::Internal::String__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Windows::Internal::String>>(
    *(Windows::Internal::String **)(a2 + 112),
    *(Windows::Internal::String **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 120)));
  throw;
}
