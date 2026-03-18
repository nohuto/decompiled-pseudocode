/*
 * XREFs of ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C00B77D0
 * Callers:
 *     UnInitializeInputComponents @ 0x1C00B6FA4 (UnInitializeInputComponents.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C00B743C (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C00B76E0 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x1C00BC1F4 (-CleanupDomainLocks@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuard::Uninitialize(PVOID *this)
{
  struct _ERESOURCE *v2; // rcx

  v2 = (struct _ERESOURCE *)*this;
  if ( v2 )
  {
    ExDeleteResourceLite(v2);
    ExFreePoolWithTag(*this, 0);
    *this = 0LL;
  }
}
