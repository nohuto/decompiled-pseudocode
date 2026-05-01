/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28e381728a25b292addb57396d526bfd___::Run @ 0x18009BDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28e381728a25b292addb57396d526bfd___::Run(
        __int64 a1)
{
  return BroadcastDVRComponent::OnApplicationViewChangedTask(
           *(_QWORD *)(a1 + 32),
           *(_QWORD *)(a1 + 16),
           *(unsigned int *)(a1 + 24));
}
