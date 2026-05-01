/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@UViewEventRegistration@@@std@@@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UViewEventRegistration@@@1@QEAV21@AEBV21@@Z @ 0x1800477F8
 * Callers:
 *     ?RegisterForViewEventsWithOptions@UwpWindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1800A4930 (-RegisterForViewEventsWithOptions@UwpWindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIV.c)
 *     ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x180422290 (-RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIView.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180048650 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x180048B80 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@YAPEAV?$shared_ptr@UViewEventRegistration@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@0@@Z @ 0x180072660 (--$_Uninitialized_move@PEAV-$shared_ptr@UViewEventRegistration@@@std@@V-$allocator@V-$shared_ptr.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<ViewEventRegistration>>::_Emplace_reallocate<std::shared_ptr<ViewEventRegistration> const &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 size_of; // rax
  __int64 v12; // rax
  _QWORD *v13; // r15
  _QWORD *v14; // r13
  __int64 v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // r9
  _QWORD *v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r12
  std::_Ref_count_base *v21; // rcx
  _QWORD *result; // rax
  __int64 v23; // [rsp+20h] [rbp-48h]
  _QWORD *v24; // [rsp+70h] [rbp+8h]

  v5 = (__int64)a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 4;
  v7 = 0xFFFFFFFFFFFFFFFLL;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v8;
  }
  size_of = std::_Get_size_of_n<16>(v7);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = (_QWORD *)v12;
  v23 = v12;
  v14 = (_QWORD *)((v5 & 0xFFFFFFFFFFFFFFF0uLL) + v12);
  try
  {
    *v14 = 0LL;
    v14[1] = 0LL;
    v15 = a3[1];
    if ( v15 )
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    *v14 = *a3;
    v14[1] = a3[1];
    v24 = v14;
    v16 = (_QWORD *)a1[1];
    v17 = (_QWORD *)*a1;
    if ( a2 == v16 )
    {
      v18 = v13;
      while ( v17 != v16 )
      {
        *v18 = 0LL;
        v18[1] = 0LL;
        *v18 = *v17;
        v18[1] = v17[1];
        *v17 = 0LL;
        v17[1] = 0LL;
        v18 += 2;
        v17 += 2;
      }
      std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v18, v18);
    }
    else
    {
      std::_Uninitialized_move<std::shared_ptr<ViewEventRegistration> *,std::allocator<std::shared_ptr<ViewEventRegistration>>>(
        *a1,
        a2,
        v13);
      v24 = v13;
      std::_Uninitialized_move<std::shared_ptr<ViewEventRegistration> *,std::allocator<std::shared_ptr<ViewEventRegistration>>>(
        a2,
        a1[1],
        v14 + 2);
    }
    v19 = *a1;
    if ( *a1 )
    {
      v20 = a1[1];
      while ( v19 != v20 )
      {
        v21 = *(std::_Ref_count_base **)(v19 + 8);
        if ( v21 )
          std::_Ref_count_base::_Decref(v21);
        v19 += 16LL;
      }
      std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    *a1 = v13;
    a1[1] = &v13[2 * v8];
    a1[2] = &v13[2 * v7];
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v24, v14 + 2);
    std::_Deallocate<16,0>(v23, 16 * v7);
    throw;
  }
  return result;
}
