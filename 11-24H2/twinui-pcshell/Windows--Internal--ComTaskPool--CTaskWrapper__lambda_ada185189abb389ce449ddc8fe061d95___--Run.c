/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ada185189abb389ce449ddc8fe061d95___::Run @ 0x1802A26F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ada185189abb389ce449ddc8fe061d95___::Run(
        __int64 a1,
        __int64 a2)
{
  LOBYTE(a2) = *(_BYTE *)(a1 + 16);
  BroadcastDVRComponent::GameDVRConfigChangedTask(*(BroadcastDVRComponent **)(a1 + 24), a2);
}
