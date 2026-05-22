/*
 * XREFs of ?CreateGestureHandler@GestureServices@@QEAA?AV?$weak_ptr@VGestureHandler@@@std@@IUtagPOINT@@_KW4GestureProcessorType@@@Z @ 0x180142250
 * Callers:
 *     ?CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z @ 0x180159418 (-CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z @ 0x180080FA0 (-GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::make_shared_GestureHandler_enum_GestureProcessorType_&_unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd__&_ @ 0x18009408C (std--make_shared_GestureHandler_enum_GestureProcessorType_-_unsigned_short_const___ISystemInputR.c)
 *     ??$?0VSystemCursorService2@@$0A@@?$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV?$shared_ptr@VSystemCursorService2@@@1@@Z @ 0x1800F5EE0 (--$-0VSystemCursorService2@@$0A@@-$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??$emplace@AEAIV?$shared_ptr@VGestureHandler@@@std@@@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAV?$shared_ptr@VGestureHandler@@@1@@Z @ 0x18014198C (--$emplace@AEAIV-$shared_ptr@VGestureHandler@@@std@@@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VGes.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall GestureServices::CreateGestureHandler(_QWORD *a1, _QWORD *a2, int a3, __int64 a4, __int64 a5)
{
  _QWORD *v6; // rbx
  _QWORD *shared_GestureHandler_enum_GestureProcessorType___unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd; // rax
  int v9; // [rsp+20h] [rbp-50h]
  int v10; // [rsp+30h] [rbp-40h] BYREF
  int v11[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-20h]
  __int64 v14; // [rsp+58h] [rbp-18h] BYREF
  std::_Ref_count_base *v15; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  const wchar_t *ProcessorTypeString; // [rsp+80h] [rbp+10h] BYREF
  int v18; // [rsp+90h] [rbp+20h] BYREF

  v18 = a3;
  v10 = 2;
  *(_QWORD *)v11 = a1;
  v12 = a4;
  v13 = a5;
  v6 = a1 + 25;
  a5 = a1[11];
  ProcessorTypeString = GestureServices::GetProcessorTypeString(a1, 2);
  shared_GestureHandler_enum_GestureProcessorType___unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd = std::make_shared_GestureHandler_enum_GestureProcessorType___unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd____(&v14, (int)&v10, (int)&ProcessorTypeString, (int)&a5, (__int64)v11);
  std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GestureHandler>>>,0>>::emplace<unsigned int &,std::shared_ptr<GestureHandler>>(
    v6,
    (__int64)v11,
    &v18,
    shared_GestureHandler_enum_GestureProcessorType___unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  if ( !(_BYTE)v12 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x74,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gestureservices.cpp",
      (const char *)0x80070057LL,
      v9);
  std::weak_ptr<SystemCursorService2>::weak_ptr<SystemCursorService2>(a2, (_QWORD *)(*(_QWORD *)v11 + 24LL));
  return a2;
}
