/*
 * XREFs of PspRemoveIoAttribution @ 0x14085B7D4
 * Callers:
 *     PspJobDelete @ 0x1404E6110 (PspJobDelete.c)
 *     PspSetJobIoAttribution @ 0x14085B900 (PspSetJobIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14020D960 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x1402BA89C (IoStopDiskIoAttributionForContext.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14085D4DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspRemoveIoAttribution(PRTL_BALANCED_NODE *Object)
{
  PRTL_BALANCED_NODE *v1; // rdi
  __int64 v4[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  if ( *((_DWORD *)Object + 395) )
  {
    IoStopDiskIoAttributionForContext(Object[198]);
    IoDiskIoAttributionDereference((__int64)Object[198]);
    Object[198] = 0LL;
    v1 = Object;
  }
  v5 = 0LL;
  v4[0] = 0LL;
  v4[1] = (__int64)v1;
  return PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v4, 5);
}
