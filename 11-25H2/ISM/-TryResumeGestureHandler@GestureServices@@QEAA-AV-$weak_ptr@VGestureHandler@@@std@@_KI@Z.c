/*
 * XREFs of ?TryResumeGestureHandler@GestureServices@@QEAA?AV?$weak_ptr@VGestureHandler@@@std@@_KI@Z @ 0x180141B78
 * Callers:
 *     ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x180025980 (-TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA-AV-$weak_ptr@VGestureHandler@@@std.c)
 * Callees:
 *     ?CheckGestureState@GestureHandler@@QEBA_NV?$initializer_list@$$CBW4GestureOperationState@@@std@@@Z @ 0x1800957C4 (-CheckGestureState@GestureHandler@@QEBA_NV-$initializer_list@$$CBW4GestureOperationState@@@std@@.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x180099AC8 (--$find@X@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhash_compare@_KU-$.c)
 *     ??$?0VSystemCursorService2@@$0A@@?$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV?$shared_ptr@VSystemCursorService2@@@1@@Z @ 0x1800F4210 (--$-0VSystemCursorService2@@$0A@@-$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18013F4D0 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhash_.c)
 *     ??4?$shared_ptr@VGestureHandler@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013FC54 (--4-$shared_ptr@VGestureHandler@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

_QWORD *__fastcall GestureServices::TryResumeGestureHandler(_QWORD *a1, _QWORD *a2, __int64 a3, int a4)
{
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  int v13; // [rsp+78h] [rbp+38h] BYREF

  v13 = a4;
  v12 = a3;
  std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>>,0>>::find<void>(
    a1 + 33,
    &v11,
    (__int64)&v12);
  if ( v11 != a1[34]
    && (v6 = (_QWORD *)(v11 + 24), v7 = *(_QWORD *)(v11 + 24), *(_BYTE *)(v7 + 240))
    && (LODWORD(v11) = 3, v10[0] = &v11, v10[1] = (char *)&v11 + 4, GestureHandler::CheckGestureState(v7)) )
  {
    v8 = std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GestureHandler>>>,0>>::_Try_emplace<unsigned int const &,>(
           a1 + 25,
           (__int64)v10,
           &v13);
    std::shared_ptr<GestureHandler>::operator=((_QWORD *)(*(_QWORD *)v8 + 24LL), v6);
    std::weak_ptr<SystemCursorService2>::weak_ptr<SystemCursorService2>(a2, v6);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
