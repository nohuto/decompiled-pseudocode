/*
 * XREFs of ?erase@?$vector@UDummyBroadcastSession@@V?$allocator@UDummyBroadcastSession@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UDummyBroadcastSession@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UDummyBroadcastSession@@@std@@@std@@@2@0@Z @ 0x1800E32D4
 * Callers:
 *     ?OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800E19B8 (-OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UDummyBroadcastSession@@@std@@@std@@YAXPEAUDummyBroadcastSession@@QEAU1@AEAV?$allocator@UDummyBroadcastSession@@@0@@Z @ 0x1800DDDF0 (--$_Destroy_range@V-$allocator@UDummyBroadcastSession@@@std@@@std@@YAXPEAUDummyBroadcastSession@.c)
 *     ??4BluetoothBroadcastSession@@QEAAAEAU0@$$QEAU0@@Z @ 0x1800DF8A8 (--4BluetoothBroadcastSession@@QEAAAEAU0@$$QEAU0@@Z.c)
 */

DummyBroadcastSession **__fastcall std::vector<DummyBroadcastSession>::erase(
        __int64 a1,
        DummyBroadcastSession **a2,
        DummyBroadcastSession *a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v8; // r15
  DummyBroadcastSession *v9; // rdi
  DummyBroadcastSession **result; // rax

  v4 = a4;
  if ( a3 != (DummyBroadcastSession *)a4 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = a3;
    if ( a4 != v8 )
    {
      do
      {
        BluetoothBroadcastSession::operator=((__int64)v9, v4);
        v9 = (DummyBroadcastSession *)((char *)v9 + 48);
        v4 += 48LL;
      }
      while ( v4 != v8 );
    }
    std::_Destroy_range<std::allocator<DummyBroadcastSession>>(v9, *(DummyBroadcastSession **)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}
