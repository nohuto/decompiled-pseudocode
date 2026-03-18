/*
 * XREFs of PiPnpRtlFreeDeviceDeleteInfo @ 0x140726678
 * Callers:
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x1407267A4 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeDeviceDeleteInfo(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x47706E50u);
}
