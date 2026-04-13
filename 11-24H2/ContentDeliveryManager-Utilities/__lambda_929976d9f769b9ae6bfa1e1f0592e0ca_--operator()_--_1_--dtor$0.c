/*
 * XREFs of __lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator()_::_1_::dtor$0 @ 0x1800B8849
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x18004C5D4 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 */

__int64 __fastcall _lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator()_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>(a2 + 72);
  }
  return result;
}
