/*
 * XREFs of ?Release@?$CMILRefCountBaseT@UIInteractionContextWrapper@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18017F7E0
 * Callers:
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F774 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMILRefCountBaseT<IInteractionContextWrapper,CMilObjectDeleter>::Release(
        CInteractionContextWrapper *a1)
{
  return CMILRefCountBaseT<IInteractionContextWrapper,CMilObjectDeleter>::InternalRelease(a1);
}
