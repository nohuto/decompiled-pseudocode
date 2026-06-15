/*
 * XREFs of ??$_Emplace_reallocate@UDummyBroadcastSession@@@?$vector@UDummyBroadcastSession@@V?$allocator@UDummyBroadcastSession@@@std@@@std@@AEAAPEAUDummyBroadcastSession@@QEAU2@$$QEAU2@@Z @ 0x1800DDE84
 * Callers:
 *     ?push_back@?$vector@UDummyBroadcastSession@@V?$allocator@UDummyBroadcastSession@@@std@@@std@@QEAAX$$QEAUDummyBroadcastSession@@@Z @ 0x1800E3BF0 (-push_back@-$vector@UDummyBroadcastSession@@V-$allocator@UDummyBroadcastSession@@@std@@@std@@QEA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002203C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5E90 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800C7DF0 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@YAPEAUBluetoothBroadcastSession@@QEAU1@0PEAU1@AEAV?$allocator@UBluetoothBroadcastSession@@@0@@Z @ 0x1800DE424 (--$_Uninitialized_move@PEAUBluetoothBroadcastSession@@V-$allocator@UBluetoothBroadcastSession@@@.c)
 *     ?_Change_array@?$vector@UDummyBroadcastSession@@V?$allocator@UDummyBroadcastSession@@@std@@@std@@AEAAXQEAUDummyBroadcastSession@@_K1@Z @ 0x1800E2D70 (-_Change_array@-$vector@UDummyBroadcastSession@@V-$allocator@UDummyBroadcastSession@@@std@@@std@.c)
 */

char *__fastcall std::vector<DummyBroadcastSession>::_Emplace_reallocate<DummyBroadcastSession>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  DummyBroadcastSession *v13; // rax
  DummyBroadcastSession *v14; // rdi
  char *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  DummyBroadcastSession *v20; // r8
  __int64 v21; // rcx
  char *result; // rax
  __int64 v23; // rcx
  DummyBroadcastSession *v24; // [rsp+20h] [rbp-48h]
  __int64 v25; // [rsp+20h] [rbp-48h]
  DummyBroadcastSession *v26; // [rsp+70h] [rbp+8h]

  v6 = (a2 - *a1) / 48;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 4);
  v8 = 0x555555555555555LL;
  if ( v7 == 0x555555555555555LL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v9 = v7 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 4);
  v11 = v10 >> 1;
  if ( v10 <= 0x555555555555555LL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  size_of = std::_Get_size_of_n<48>(v8);
  v13 = (DummyBroadcastSession *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v24 = v13;
  v15 = (char *)v13 + 48 * v6;
  try
  {
    *(_OWORD *)v15 = *(_OWORD *)a3;
    *((_QWORD *)v15 + 2) = *(_QWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 16) = 0LL;
    v16 = *(_QWORD *)(a3 + 40);
    *(_QWORD *)(a3 + 40) = 0LL;
    v17 = *(_QWORD *)(a3 + 32);
    *(_QWORD *)(a3 + 32) = 0LL;
    v18 = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(a3 + 24) = 0LL;
    *((_QWORD *)v15 + 3) = v18;
    *((_QWORD *)v15 + 4) = v17;
    *((_QWORD *)v15 + 5) = v16;
    v26 = (DummyBroadcastSession *)v15;
    v19 = a1[1];
    v20 = v14;
    v21 = *a1;
    if ( a2 != v19 )
    {
      std::_Uninitialized_move<BluetoothBroadcastSession *>(v21, a2, v14);
      v26 = v14;
      v20 = (DummyBroadcastSession *)(v15 + 48);
      v19 = a1[1];
      v21 = a2;
    }
    std::_Uninitialized_move<BluetoothBroadcastSession *>(v21, v19, v20);
    std::vector<DummyBroadcastSession>::_Change_array(a1, v14, v9, v8, v24);
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<DummyBroadcastSession>>(v26, (DummyBroadcastSession *)(v15 + 48));
    std::allocator<DummyBroadcastSession>::deallocate(v23, v25, v8);
    throw;
  }
  return result;
}
