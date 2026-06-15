/*
 * XREFs of ?_Change_array@?$vector@UDummyBroadcastSession@@V?$allocator@UDummyBroadcastSession@@@std@@@std@@AEAAXQEAUDummyBroadcastSession@@_K1@Z @ 0x1800E2D70
 * Callers:
 *     ??$_Emplace_reallocate@UDummyBroadcastSession@@@?$vector@UDummyBroadcastSession@@V?$allocator@UDummyBroadcastSession@@@std@@@std@@AEAAPEAUDummyBroadcastSession@@QEAU2@$$QEAU2@@Z @ 0x1800DDE84 (--$_Emplace_reallocate@UDummyBroadcastSession@@@-$vector@UDummyBroadcastSession@@V-$allocator@UD.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UDummyBroadcastSession@@@std@@@std@@YAXPEAUDummyBroadcastSession@@QEAU1@AEAV?$allocator@UDummyBroadcastSession@@@0@@Z @ 0x1800DDDF0 (--$_Destroy_range@V-$allocator@UDummyBroadcastSession@@@std@@@std@@YAXPEAUDummyBroadcastSession@.c)
 */

__int64 __fastcall std::vector<DummyBroadcastSession>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v6; // rcx
  __int64 result; // rax

  v6 = *(char **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<DummyBroadcastSession>>(
      (DummyBroadcastSession *)v6,
      *(DummyBroadcastSession **)(a1 + 8));
    std::_Deallocate<16,0>(
      *(char **)a1,
      (const struct std::nothrow_t *)(16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4)));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 48 * a3;
  result = a2 + 48 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
