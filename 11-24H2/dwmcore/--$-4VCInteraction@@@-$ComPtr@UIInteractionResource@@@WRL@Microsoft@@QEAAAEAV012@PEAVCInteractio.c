/*
 * XREFs of ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180218188
 * Callers:
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18012B890 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x180256A64 (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18012BE94 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CCachedVisualImage **__fastcall Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(
        CCachedVisualImage **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  CCachedVisualImage *v6; // rbx
  CCachedVisualImage *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2 + 72;
  v5 = -a2;
  v6 = (CCachedVisualImage *)(v3 & -(__int64)(v5 != 0));
  if ( v6 )
    (**(void (__fastcall ***)(__int64))v6)(v3 & -(__int64)(v5 != 0));
  v8 = *a1;
  *a1 = v6;
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v8, v5, a3);
  return a1;
}
