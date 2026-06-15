/*
 * XREFs of ??$_Uninitialized_move@PEAUBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@YAPEAUBluetoothBroadcastSession@@QEAU1@0PEAU1@AEAV?$allocator@UBluetoothBroadcastSession@@@0@@Z @ 0x1800DE424
 * Callers:
 *     ??$_Emplace_reallocate@UDummyBroadcastSession@@@?$vector@UDummyBroadcastSession@@V?$allocator@UDummyBroadcastSession@@@std@@@std@@AEAAPEAUDummyBroadcastSession@@QEAU2@$$QEAU2@@Z @ 0x1800DDE84 (--$_Emplace_reallocate@UDummyBroadcastSession@@@-$vector@UDummyBroadcastSession@@V-$allocator@UD.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UDummyBroadcastSession@@@std@@@std@@YAXPEAUDummyBroadcastSession@@QEAU1@AEAV?$allocator@UDummyBroadcastSession@@@0@@Z @ 0x1800DDDF0 (--$_Destroy_range@V-$allocator@UDummyBroadcastSession@@@std@@@std@@YAXPEAUDummyBroadcastSession@.c)
 */

DummyBroadcastSession *__fastcall std::_Uninitialized_move<BluetoothBroadcastSession *>(
        _QWORD *a1,
        _QWORD *a2,
        DummyBroadcastSession *a3)
{
  DummyBroadcastSession *v3; // rbx
  _QWORD *v5; // r9
  char *v6; // r10
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = a1 + 4;
    v6 = (char *)(a3 - (DummyBroadcastSession *)a1);
    do
    {
      *(_OWORD *)v3 = *((_OWORD *)v5 - 2);
      v3 = (DummyBroadcastSession *)((char *)v3 + 48);
      *(_QWORD *)((char *)v5 + (_QWORD)v6 - 16) = *(v5 - 2);
      v7 = *(v5 - 1);
      v8 = v5[1];
      v9 = *v5;
      v5[1] = 0LL;
      *v5 = 0LL;
      *(v5 - 1) = 0LL;
      *(v5 - 2) = 0LL;
      *(_QWORD *)((char *)v5 + (_QWORD)v6 - 8) = v7;
      *(_QWORD *)&v6[(_QWORD)v5] = v9;
      *(_QWORD *)((char *)v5 + (_QWORD)v6 + 8) = v8;
      v5 += 6;
    }
    while ( v5 - 4 != a2 );
  }
  std::_Destroy_range<std::allocator<DummyBroadcastSession>>(v3, v3);
  return v3;
}
