/*
 * XREFs of ?LockShared@tagDomLock@@QEBAXXZ @ 0x1400B7820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tagDomLock::LockShared(PERESOURCE *this)
{
  ExEnterCriticalRegionAndAcquireResourceShared(*this);
}
