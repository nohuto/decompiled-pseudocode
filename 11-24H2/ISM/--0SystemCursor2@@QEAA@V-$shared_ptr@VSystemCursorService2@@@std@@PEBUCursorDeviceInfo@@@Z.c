/*
 * XREFs of ??0SystemCursor2@@QEAA@V?$shared_ptr@VSystemCursorService2@@@std@@PEBUCursorDeviceInfo@@@Z @ 0x1800F8D4C
 * Callers:
 *     ??$make_shared@VSystemCursor2@@V?$shared_ptr@VSystemCursorService2@@@std@@PEAUCursorDeviceInfo@@@std@@YA?AV?$shared_ptr@VSystemCursor2@@@0@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@$$QEAPEAUCursorDeviceInfo@@@Z @ 0x1800F8AB0 (--$make_shared@VSystemCursor2@@V-$shared_ptr@VSystemCursorService2@@@std@@PEAUCursorDeviceInfo@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0VSystemCursorService2@@$0A@@?$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV?$shared_ptr@VSystemCursorService2@@@1@@Z @ 0x1800F5EE0 (--$-0VSystemCursorService2@@$0A@@-$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??0?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursorShape2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape2@@@std@@@std@@@1@@Z @ 0x1800F8CCC (--0-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursorShape2@@@std@@V-$_Uhash_compare@_KU-$has.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemCursor2::SystemCursor2(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  std::_Ref_count_base *v5; // rcx
  int v7; // [rsp+40h] [rbp+18h] BYREF
  int v8; // [rsp+44h] [rbp+1Ch]

  *(_QWORD *)a1 = *a3;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a3;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 100;
  *(_BYTE *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 40) = 32512LL;
  *(_QWORD *)(a1 + 48) = 32512LL;
  std::weak_ptr<SystemCursorService2>::weak_ptr<SystemCursorService2>((_QWORD *)(a1 + 56), a2);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v8 = (unsigned __int64)(a1 + 88) >> 32;
  v7 = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape2>>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape2>>>,0>>(
    a1 + 88,
    &v7);
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_WORD *)(a1 + 176) = 257;
  *(_BYTE *)(a1 + 178) = 0;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_DWORD *)(a1 + 192) = 1065353216;
  v5 = (std::_Ref_count_base *)a2[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
