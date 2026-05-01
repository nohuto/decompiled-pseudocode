/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ef26dee21aeac91685b7d7242343189e___::Run @ 0x1802CB490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ef26dee21aeac91685b7d7242343189e___::Run(
        __int64 a1,
        int a2)
{
  return BroadcastDVRComponent::SendNotificationIfGameAppInFocusTask(*(_QWORD **)(a1 + 16), a2);
}
