/*
 * XREFs of PnpActivatingDeviceNodeFromThread @ 0x140726DD0
 * Callers:
 *     PnpBugcheckPowerTimeout @ 0x1405A2248 (PnpBugcheckPowerTimeout.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403F7C80 (RtlLookupElementGenericTableAvl.c)
 */

__int64 __fastcall PnpActivatingDeviceNodeFromThread(__int64 a1)
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
