/*
 * XREFs of PspRemoveIoAttribution @ 0x1408E9FA4
 * Callers:
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 *     PspSetJobIoAttribution @ 0x1408EA0D0 (PspSetJobIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x140245180 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x1402C81A4 (IoStopDiskIoAttributionForContext.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408EBCAC (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspRemoveIoAttribution(struct _EX_RUNDOWN_REF **Object)
{
  struct _EX_RUNDOWN_REF **v1; // rdi
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
