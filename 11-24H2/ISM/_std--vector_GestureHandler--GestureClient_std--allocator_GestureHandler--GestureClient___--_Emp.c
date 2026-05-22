/*
 * XREFs of _std::vector_GestureHandler::GestureClient_std::allocator_GestureHandler::GestureClient___::_Emplace_reallocate_GestureHandler::GestureClient__::_1_::catch$0 @ 0x1801D7514
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18009DCB6 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@GestureHandler@@QEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x180141490 (--$_Destroy_range@V-$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@G.c)
 */

void __fastcall __noreturn std::vector_GestureHandler::GestureClient_std::allocator_GestureHandler::GestureClient___::_Emplace_reallocate_GestureHandler::GestureClient__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<GestureHandler::GestureClient>>(
    *(GestureHandler::GestureClient **)(a2 + 112),
    *(GestureHandler::GestureClient **)(a2 + 136));
  std::_Deallocate<16,0>(*(char **)(a2 + 32), (const struct std::nothrow_t *)(40LL * *(_QWORD *)(a2 + 120)));
  throw;
}
