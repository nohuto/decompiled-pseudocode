/*
 * XREFs of _lambda_5053f9d2b5f05b91476ca909f4f2555a_::operator() @ 0x1804EA988
 * Callers:
 *     wil::ResultFromException__lambda_5053f9d2b5f05b91476ca909f4f2555a___ @ 0x1804EA714 (wil--ResultFromException__lambda_5053f9d2b5f05b91476ca909f4f2555a___.c)
 * Callees:
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18006B778 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_5053f9d2b5f05b91476ca909f4f2555a_::operator()(unsigned int **a1)
{
  __int64 v2; // rdi
  void (__fastcall *v3)(__int64, _QWORD); // rbx
  __int64 v4; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)std::map<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>>::_Try_emplace<unsigned long const &,>(
                                (_QWORD *)*a1 + 17,
                                (__int64)v6,
                                a1[1])
                 + 40LL) )
  {
    v2 = *((_QWORD *)*a1 + 16);
    v3 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 40LL);
    v4 = std::map<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>>::_Try_emplace<unsigned long const &,>(
           (_QWORD *)*a1 + 17,
           (__int64)v6,
           a1[1]);
    v3(v2, *(_QWORD *)(*(_QWORD *)v4 + 40LL));
  }
  return std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::erase(
           *a1 + 34,
           a1[1]);
}
