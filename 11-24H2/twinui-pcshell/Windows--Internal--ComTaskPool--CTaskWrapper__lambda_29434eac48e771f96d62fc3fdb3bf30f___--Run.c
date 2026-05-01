/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_29434eac48e771f96d62fc3fdb3bf30f___::Run @ 0x180318EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_29434eac48e771f96d62fc3fdb3bf30f___::Run(
        __int64 a1)
{
  BroadcastDVRComponent::OnGameModeEnableChangeTask(
    *(BroadcastDVRComponent **)(a1 + 32),
    *(HWND *)(a1 + 16),
    *(_BYTE *)(a1 + 24) != 0);
}
