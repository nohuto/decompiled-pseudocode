/*
 * XREFs of PiPnpRtlFreeDeviceDeleteInfo @ 0x14071A6F8
 * Callers:
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14071A824 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeDeviceDeleteInfo(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x47706E50u);
}
