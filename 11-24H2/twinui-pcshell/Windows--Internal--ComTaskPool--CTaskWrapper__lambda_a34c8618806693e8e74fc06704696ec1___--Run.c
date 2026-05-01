/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a34c8618806693e8e74fc06704696ec1___::Run @ 0x180318FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyGameBarToUpdateKGL@BroadcastDVRComponent@@AEAAJXZ @ 0x1803177B4 (-NotifyGameBarToUpdateKGL@BroadcastDVRComponent@@AEAAJXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a34c8618806693e8e74fc06704696ec1___::Run(
        int *a1,
        const unsigned __int16 *a2)
{
  int updated; // eax

  updated = BroadcastDVRComponent::NotifyGameBarToUpdateKGL((BroadcastDVRComponent *)a1, a2);
  GameDVRTraceProvider::BroadcastDVRComponent_ActivateForKGLUpdate_Done(updated, a1[6]);
}
