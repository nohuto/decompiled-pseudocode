/*
 * XREFs of wil::details::functor_wrapper_other__lambda_a111f9909dcb1fbe287f852ebd02ec50__&_std::shared_ptr_CreativeFramework::Actions::PinWebsiteToTaskbarService___::Run @ 0x18009D420
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@$$QEAV01@@Z @ 0x18004AED8 (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@$$QEAV01.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180059B44 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _lambda_a111f9909dcb1fbe287f852ebd02ec50_::operator() @ 0x18009CB8C (_lambda_a111f9909dcb1fbe287f852ebd02ec50_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::functor_wrapper_other__lambda_a111f9909dcb1fbe287f852ebd02ec50____std::shared_ptr_CreativeFramework::Actions::PinWebsiteToTaskbarService___::Run(
        __int64 a1)
{
  __int64 *v1; // rax
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 *v4; // r9
  __int64 v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+38h] [rbp-10h]

  v1 = lambda_a111f9909dcb1fbe287f852ebd02ec50_::operator()(*(_QWORD ***)(a1 + 8), &v9);
  v2 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
         &v7,
         v1);
  v3 = v2[1];
  v2[1] = v4[1];
  v4[1] = v3;
  v5 = *v2;
  *v2 = *v4;
  *v4 = v5;
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return 0LL;
}
