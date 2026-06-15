/*
 * XREFs of ??$_Destroy_range@V?$allocator@UDummyBroadcastSession@@@std@@@std@@YAXPEAUDummyBroadcastSession@@QEAU1@AEAV?$allocator@UDummyBroadcastSession@@@0@@Z @ 0x1800DDDF0
 * Callers:
 *     ??$_Uninitialized_move@PEAUBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@YAPEAUBluetoothBroadcastSession@@QEAU1@0PEAU1@AEAV?$allocator@UBluetoothBroadcastSession@@@0@@Z @ 0x1800DE424 (--$_Uninitialized_move@PEAUBluetoothBroadcastSession@@V-$allocator@UBluetoothBroadcastSession@@@.c)
 *     ??1BluetoothBroadcastProvider@@UEAA@XZ @ 0x1800DF684 (--1BluetoothBroadcastProvider@@UEAA@XZ.c)
 *     ?_Change_array@?$vector@UDummyBroadcastSession@@V?$allocator@UDummyBroadcastSession@@@std@@@std@@AEAAXQEAUDummyBroadcastSession@@_K1@Z @ 0x1800E2D70 (-_Change_array@-$vector@UDummyBroadcastSession@@V-$allocator@UDummyBroadcastSession@@@std@@@std@.c)
 *     ?erase@?$vector@UDummyBroadcastSession@@V?$allocator@UDummyBroadcastSession@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UDummyBroadcastSession@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UDummyBroadcastSession@@@std@@@std@@@2@0@Z @ 0x1800E32D4 (-erase@-$vector@UDummyBroadcastSession@@V-$allocator@UDummyBroadcastSession@@@std@@@std@@QEAA-AV.c)
 *     ??1DummyBroadcastProvider@@UEAA@XZ @ 0x1800F682C (--1DummyBroadcastProvider@@UEAA@XZ.c)
 *     _std::vector_DummyBroadcastSession_std::allocator_DummyBroadcastSession___::_Emplace_reallocate_DummyBroadcastSession__::_1_::catch$2 @ 0x18016557E (_std--vector_DummyBroadcastSession_std--allocator_DummyBroadcastSession___--_Emplace_reallocate_.c)
 * Callees:
 *     ??1DummyBroadcastSession@@QEAA@XZ @ 0x1800DF714 (--1DummyBroadcastSession@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<DummyBroadcastSession>>(
        DummyBroadcastSession *this,
        DummyBroadcastSession *a2)
{
  DummyBroadcastSession *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      DummyBroadcastSession::~DummyBroadcastSession(v3);
      v3 = (DummyBroadcastSession *)((char *)v3 + 48);
    }
    while ( v3 != a2 );
  }
}
