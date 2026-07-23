/*
 * XREFs of PipDmgInitPhaseZero @ 0x140C276F0
 * Callers:
 *     PiDmaGuardInitialize @ 0x1405A5E7C (PiDmaGuardInitialize.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1403EAA00 (ExInitializeResourceLite2.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 PipDmgInitPhaseZero()
{
  guard_dispatch_icall_no_overrides(48LL, 1LL);
  PipHalIommuSecurityEnabled = 0;
  if ( PipDmaGuardTestMode )
  {
    PipDmaGuardPolicy = 3;
    ExInitializeResourceLite2(&PipDgqListLock, -1);
    qword_140F89CA8 = (__int64)&PipDgqListHead;
    PipDgqListHead = &PipDgqListHead;
  }
  else
  {
    PipDmaGuardPolicy = 0;
  }
  return 0LL;
}
