/*
 * XREFs of ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180223F14
 * Callers:
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18017F170 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x180261CDC (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F774 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CResource **__fastcall Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(
        CResource **a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  CResource *v5; // rbx
  CResource *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2 + 72;
  v4 = -a2;
  v5 = (CResource *)(v2 & -(__int64)(v4 != 0));
  if ( v5 )
    (**(void (__fastcall ***)(__int64))v5)(v2 & -(__int64)(v4 != 0));
  v7 = *a1;
  *a1 = v5;
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v7);
  return a1;
}
