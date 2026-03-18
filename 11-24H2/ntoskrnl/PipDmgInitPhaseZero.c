/*
 * XREFs of PipDmgInitPhaseZero @ 0x140C256A0
 * Callers:
 *     PiDmaGuardInitialize @ 0x1405A8D90 (PiDmaGuardInitialize.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x140365350 (ExInitializeResourceLite2.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 PipDmgInitPhaseZero()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF
  int v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v1 = 0;
  if ( (int)guard_dispatch_icall_no_overrides(48LL, 1LL, &v1, &v2) >= 0 && v2 == 1 )
  {
    PipHalIommuSecurityEnabled = v1;
    if ( v1 )
      goto LABEL_4;
  }
  else
  {
    PipHalIommuSecurityEnabled = 0;
  }
  if ( !PipDmaGuardTestMode )
  {
    PipDmaGuardPolicy = 0;
    return 0LL;
  }
LABEL_4:
  PipDmaGuardPolicy = 3;
  ExInitializeResourceLite2(&PipDgqListLock, -1);
  qword_140F89A08 = (__int64)&PipDgqListHead;
  PipDgqListHead = &PipDgqListHead;
  return 0LL;
}
