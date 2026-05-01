/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___::Run @ 0x180319020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___::Run(
        __int64 a1)
{
  BroadcastDVRComponent::OnGameBarInitCompleteTask(
    *(BroadcastDVRComponent **)(a1 + 32),
    *(HWND *)(a1 + 16),
    *(_DWORD *)(a1 + 24));
}
