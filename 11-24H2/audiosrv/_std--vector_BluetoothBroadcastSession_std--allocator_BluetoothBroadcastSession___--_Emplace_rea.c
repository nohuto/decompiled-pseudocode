/*
 * XREFs of _std::vector_BluetoothBroadcastSession_std::allocator_BluetoothBroadcastSession___::_Emplace_reallocate_BluetoothBroadcastSession__::_1_::catch$2 @ 0x18016EC08
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@YAXPEAUBluetoothBroadcastSession@@QEAU1@AEAV?$allocator@UBluetoothBroadcastSession@@@0@@Z @ 0x1800E27E0 (--$_Destroy_range@V-$allocator@UBluetoothBroadcastSession@@@std@@@std@@YAXPEAUBluetoothBroadcast.c)
 *     ?deallocate@?$allocator@UBluetoothBroadcastSession@@@std@@QEAAXQEAUBluetoothBroadcastSession@@_K@Z @ 0x1800E7D04 (-deallocate@-$allocator@UBluetoothBroadcastSession@@@std@@QEAAXQEAUBluetoothBroadcastSession@@_K.c)
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_BluetoothBroadcastSession_std::allocator_BluetoothBroadcastSession___::_Emplace_reallocate_BluetoothBroadcastSession__::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<BluetoothBroadcastSession>>(
    *(BluetoothBroadcastSession **)(a2 + 112),
    *(BluetoothBroadcastSession **)(a2 + 136));
  std::allocator<BluetoothBroadcastSession>::deallocate(v3, *(char **)(a2 + 32), *(_QWORD *)(a2 + 120));
  throw;
}
