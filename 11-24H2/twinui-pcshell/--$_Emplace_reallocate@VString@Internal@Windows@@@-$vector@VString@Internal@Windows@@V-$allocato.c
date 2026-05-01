/*
 * XREFs of ??$_Emplace_reallocate@VString@Internal@Windows@@@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAPEAVString@Internal@Windows@@QEAV234@$$QEAV234@@Z @ 0x1803144AC
 * Callers:
 *     ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x1800A75D8 (-GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@U-$pair@KVString@Internal@W.c)
 *     ?push_back@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAX$$QEAVString@Internal@Windows@@@Z @ 0x1801CB5F8 (-push_back@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18001D4AC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXQEAVString@Internal@Windows@@_K1@Z @ 0x1802328B4 (-_Change_array@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@.c)
 *     ??$_Uninitialized_move@PEAVString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAPEAVString@Internal@Windows@@QEAV123@0PEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x18029D1C4 (--$_Uninitialized_move@PEAVString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@.c)
 */

_QWORD *__fastcall std::vector<Windows::Internal::String>::_Emplace_reallocate<Windows::Internal::String>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  Windows::Internal::String *v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // r14
  _QWORD *v15; // rdx
  Windows::Internal::String *v16; // r8
  _QWORD *v17; // rcx
  _QWORD *result; // rax
  Windows::Internal::String *v19; // [rsp+20h] [rbp-48h]
  Windows::Internal::String *v20; // [rsp+70h] [rbp+8h]

  v5 = ((__int64)a2 - *a1) >> 3;
  v6 = (__int64)(a1[1] - *a1) >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = (Windows::Internal::String *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = (__int64)v12;
  v19 = v12;
  v14 = (_QWORD *)((char *)v12 + 8 * v5);
  try
  {
    *v14 = *a3;
    *a3 = 0LL;
    v20 = (Windows::Internal::String *)v14;
    v15 = (_QWORD *)a1[1];
    v16 = v12;
    v17 = (_QWORD *)*a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<Windows::Internal::String *>(v17, a2, v12);
      v20 = (Windows::Internal::String *)v13;
      v16 = (Windows::Internal::String *)(v14 + 1);
      v15 = (_QWORD *)a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<Windows::Internal::String *>(v17, v15, v16);
    std::vector<Windows::Internal::String>::_Change_array((__int64)a1, v13, v8, v7);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Windows::Internal::String>>(v20, (Windows::Internal::String *)(v14 + 1));
    std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)(8 * v7));
    throw;
  }
  return result;
}
