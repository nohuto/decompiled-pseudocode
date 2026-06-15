/*
 * XREFs of ?deallocate@?$allocator@UDummyBroadcastSession@@@std@@QEAAXQEAUDummyBroadcastSession@@_K@Z @ 0x1800E32A4
 * Callers:
 *     _std::vector_DummyBroadcastSession_std::allocator_DummyBroadcastSession___::_Emplace_reallocate_DummyBroadcastSession__::_1_::catch$2 @ 0x18016557E (_std--vector_DummyBroadcastSession_std--allocator_DummyBroadcastSession___--_Emplace_reallocate_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<DummyBroadcastSession>::deallocate(__int64 a1, char *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(48 * a3));
}
