/*
 * XREFs of PnpActivatingDeviceNodeFromThreadV1 @ 0x140732FE0
 * Callers:
 *     PnpBugcheckPowerTimeout @ 0x1405A59E4 (PnpBugcheckPowerTimeout.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403FFF00 (RtlLookupElementGenericTableAvl.c)
 */

__int64 __fastcall PnpActivatingDeviceNodeFromThreadV1(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = a1;
  v1 = 0LL;
  Buffer[0] = 0LL;
  ExAcquireFastMutex(&PnpDeviceActivationTableLock);
  v2 = (__int64 *)RtlLookupElementGenericTableAvl(&PnpDeviceActivationTable, Buffer);
  if ( v2 )
    v1 = *v2;
  KeReleaseGuardedMutex(&PnpDeviceActivationTableLock);
  return v1;
}
