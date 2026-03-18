/*
 * XREFs of ?ForceFullDirty@CHolographicInteropTarget@@WEI@EAAXXZ @ 0x180280EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void CHolographicInteropTarget::ForceFullDirty()
{
  CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
}
