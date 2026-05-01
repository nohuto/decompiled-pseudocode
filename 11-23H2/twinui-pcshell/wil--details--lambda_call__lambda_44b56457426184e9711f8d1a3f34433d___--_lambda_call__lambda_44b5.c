/*
 * XREFs of wil::details::lambda_call__lambda_44b56457426184e9711f8d1a3f34433d___::_lambda_call__lambda_44b56457426184e9711f8d1a3f34433d___ @ 0x180669EF8
 * Callers:
 *     _CSnapAssistControllerBase::TriggerSnapAssistWithRegions_::_1_::dtor$3 @ 0x18066D20F (_CSnapAssistControllerBase--TriggerSnapAssistWithRegions_--_1_--dtor$3.c)
 * Callees:
 *     ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x18066AB0C (-EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V-$vector@_KV-$a.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_44b56457426184e9711f8d1a3f34433d___::_lambda_call__lambda_44b56457426184e9711f8d1a3f34433d___(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  result = 0LL;
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v2 = 0LL;
    v3 = 0LL;
    return CSnapAssistControllerBase::EndGuidedSnapAssist(*(_QWORD *)a1, 0LL, &v2);
  }
  return result;
}
