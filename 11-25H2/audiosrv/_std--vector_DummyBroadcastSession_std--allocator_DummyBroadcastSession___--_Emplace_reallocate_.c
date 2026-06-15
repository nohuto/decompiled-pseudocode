/*
 * XREFs of _std::vector_DummyBroadcastSession_std::allocator_DummyBroadcastSession___::_Emplace_reallocate_DummyBroadcastSession__::_1_::catch$2 @ 0x18016557E
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UDummyBroadcastSession@@@std@@@std@@YAXPEAUDummyBroadcastSession@@QEAU1@AEAV?$allocator@UDummyBroadcastSession@@@0@@Z @ 0x1800DDDF0 (--$_Destroy_range@V-$allocator@UDummyBroadcastSession@@@std@@@std@@YAXPEAUDummyBroadcastSession@.c)
 *     ?deallocate@?$allocator@UDummyBroadcastSession@@@std@@QEAAXQEAUDummyBroadcastSession@@_K@Z @ 0x1800E32A4 (-deallocate@-$allocator@UDummyBroadcastSession@@@std@@QEAAXQEAUDummyBroadcastSession@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x18015E870 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_DummyBroadcastSession_std::allocator_DummyBroadcastSession___::_Emplace_reallocate_DummyBroadcastSession__::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<DummyBroadcastSession>>(
    *(DummyBroadcastSession **)(a2 + 112),
    *(DummyBroadcastSession **)(a2 + 136));
  std::allocator<DummyBroadcastSession>::deallocate(v3, *(char **)(a2 + 32), *(_QWORD *)(a2 + 120));
  throw;
}
