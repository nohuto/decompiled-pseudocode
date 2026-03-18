/*
 * XREFs of PipDmgInitPhaseZero @ 0x140C14610
 * Callers:
 *     PiDmaGuardInitialize @ 0x1405A5580 (PiDmaGuardInitialize.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1402D6940 (ExInitializeResourceLite2.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 PipDmgInitPhaseZero()
{
  guard_dispatch_icall_no_overrides(48LL);
  PipHalIommuSecurityEnabled = 0;
  if ( PipDmaGuardTestMode )
  {
    PipDmaGuardPolicy = 3;
    ExInitializeResourceLite2(&PipDgqListLock, -1);
    qword_140F89288 = (__int64)&PipDgqListHead;
    PipDgqListHead = &PipDgqListHead;
  }
  else
  {
    PipDmaGuardPolicy = 0;
  }
  return 0LL;
}
