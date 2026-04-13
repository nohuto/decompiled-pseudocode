/*
 * XREFs of _lambda_83dc6366a20d9229952004eea2bdcbca_::operator() @ 0x18006045C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_83dc6366a20d9229952004eea2bdcbca___::Run @ 0x1800630F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_83dc6366a20d9229952004eea2bdcbca___--Run.c)
 * Callees:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x1800622FC (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_83dc6366a20d9229952004eea2bdcbca_::operator()(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl **a1)
{
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *v1; // rcx
  const char *v2; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  try
  {
    ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x32,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
                           v2);
  }
  return result;
}
