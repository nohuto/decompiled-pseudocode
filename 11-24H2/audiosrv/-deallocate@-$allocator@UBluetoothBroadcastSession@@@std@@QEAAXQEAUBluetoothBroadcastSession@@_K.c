/*
 * XREFs of ?deallocate@?$allocator@UBluetoothBroadcastSession@@@std@@QEAAXQEAUBluetoothBroadcastSession@@_K@Z @ 0x1800E7D04
 * Callers:
 *     _std::vector_BluetoothBroadcastSession_std::allocator_BluetoothBroadcastSession___::_Emplace_reallocate_BluetoothBroadcastSession__::_1_::catch$2 @ 0x18016EC08 (_std--vector_BluetoothBroadcastSession_std--allocator_BluetoothBroadcastSession___--_Emplace_rea.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<BluetoothBroadcastSession>::deallocate(__int64 a1, char *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(48 * a3));
}
