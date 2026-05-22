/*
 * XREFs of _std::vector_InputSpacePayload_std::allocator_InputSpacePayload___::_Emplace_reallocate_INPUT_SPACE_PAYLOAD_&__::_1_::catch$0 @ 0x1801D8ABA
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18009DCB6 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@QEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x1801921A4 (--$_Destroy_range@V-$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@QEAU1@A.c)
 */

void __fastcall __noreturn std::vector_InputSpacePayload_std::allocator_InputSpacePayload___::_Emplace_reallocate_INPUT_SPACE_PAYLOAD____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<InputSpacePayload>>(*(_QWORD **)(a2 + 112), *(_QWORD **)(a2 + 136));
  std::_Deallocate<16,0>(*(char **)(a2 + 32), (const struct std::nothrow_t *)(40LL * *(_QWORD *)(a2 + 120)));
  throw;
}
