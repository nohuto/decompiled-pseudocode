/*
 * XREFs of ?GetCurrentTarget@CManipulationContext@@UEBA?AUTargetingInfo@@XZ @ 0x180194600
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18018ED9C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CManipulationContext::GetCurrentTarget(__int64 a1, __int64 a2)
{
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 104);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 112);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))(a2 + 8));
  return a2;
}
