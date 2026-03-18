/*
 * XREFs of ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x18020B9B0
 * Callers:
 *     ?CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z @ 0x18012C534 (-CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18012BE94 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CCachedVisualImage **__fastcall Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
        CCachedVisualImage **a1,
        CCachedVisualImage *a2,
        __int64 a3)
{
  CCachedVisualImage *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      (**(void (__fastcall ***)(CCachedVisualImage *))a2)(a2);
    v6 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v6, (__int64)a2, a3);
  }
  return a1;
}
