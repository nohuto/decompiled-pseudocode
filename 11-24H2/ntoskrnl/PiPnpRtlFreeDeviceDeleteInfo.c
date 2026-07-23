/*
 * XREFs of PiPnpRtlFreeDeviceDeleteInfo @ 0x140724208
 * Callers:
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140724334 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeDeviceDeleteInfo(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x47706E50u);
}
