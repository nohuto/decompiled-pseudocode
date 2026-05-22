/*
 * XREFs of ??$_Emplace_reallocate@UGestureClient@GestureHandler@@@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@AEAAPEAUGestureClient@GestureHandler@@QEAU23@$$QEAU23@@Z @ 0x1801461FC
 * Callers:
 *     ?AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z @ 0x1801466F0 (-AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18006E668 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@GestureHandler@@QEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x180141490 (--$_Destroy_range@V-$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@G.c)
 *     ??$_Uninitialized_move@PEAUGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAPEAUGestureClient@GestureHandler@@QEAU12@0PEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x180146388 (--$_Uninitialized_move@PEAUGestureClient@GestureHandler@@V-$allocator@UGestureClient@GestureHand.c)
 *     ??0GestureClient@GestureHandler@@QEAA@$$QEAU01@@Z @ 0x180146470 (--0GestureClient@GestureHandler@@QEAA@$$QEAU01@@Z.c)
 */

char *__fastcall std::vector<GestureHandler::GestureClient>::_Emplace_reallocate<GestureHandler::GestureClient>(
        GestureHandler::GestureClient **a1,
        char *a2,
        __int64 a3)
{
  __int64 v5; // r15
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  char *v12; // rax
  GestureHandler::GestureClient *v13; // rsi
  char *v14; // r15
  char *v15; // rdx
  GestureHandler::GestureClient *v16; // r8
  char *v17; // rcx
  char *result; // rax
  char *v19; // [rsp+20h] [rbp-48h]
  GestureHandler::GestureClient *v20; // [rsp+70h] [rbp+8h]

  v5 = (a2 - (char *)*a1) / 40;
  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  v7 = 0x666666666666666LL;
  if ( v6 == 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3);
  v10 = v9 >> 1;
  if ( v9 <= 0x666666666666666LL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v8;
  }
  size_of = std::_Get_size_of_n<40>(v7);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = (GestureHandler::GestureClient *)v12;
  v19 = v12;
  v14 = &v12[40 * v5];
  try
  {
    GestureHandler::GestureClient::GestureClient(v14, a3);
    v20 = (GestureHandler::GestureClient *)v14;
    v15 = (char *)a1[1];
    v16 = v13;
    v17 = (char *)*a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<GestureHandler::GestureClient *>(v17, a2, v13);
      v20 = v13;
      v16 = (GestureHandler::GestureClient *)(v14 + 40);
      v15 = (char *)a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<GestureHandler::GestureClient *>(v17, v15, v16);
    if ( *a1 )
    {
      std::_Destroy_range<std::allocator<GestureHandler::GestureClient>>(*a1, a1[1]);
      std::_Deallocate<16,0>((char *)*a1, (const struct std::nothrow_t *)(8 * ((a1[2] - *a1) >> 3)));
    }
    *a1 = v13;
    a1[1] = (GestureHandler::GestureClient *)((char *)v13 + 40 * v8);
    a1[2] = (GestureHandler::GestureClient *)((char *)v13 + 40 * v7);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<GestureHandler::GestureClient>>(v20, (GestureHandler::GestureClient *)(v14 + 40));
    std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)(40 * v7));
    throw;
  }
  return result;
}
