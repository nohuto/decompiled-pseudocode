/*
 * XREFs of ?Release@?$CMILRefCountBaseT@UIInteractionResource@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180227670
 * Callers:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180133FE8 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMILRefCountBaseT<IInteractionResource,CMilObjectDeleter>::Release(__int64 a1)
{
  return CMILRefCountBaseT<IInteractionResource,CMilObjectDeleter>::InternalRelease(a1);
}
