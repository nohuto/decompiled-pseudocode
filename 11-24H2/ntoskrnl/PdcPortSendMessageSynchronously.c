/*
 * XREFs of PdcPortSendMessageSynchronously @ 0x1404897EC
 * Callers:
 *     Pdcv2ActivationClientRenewActivation @ 0x14078DA44 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientActivate @ 0x1409EB97C (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientDeactivate @ 0x1409ED030 (Pdcv2ActivationClientDeactivate.c)
 *     PdcTaskClientRequest @ 0x140A87D84 (PdcTaskClientRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PdcPortSendMessageSynchronously(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned int v5; // ebx

  v2 = a1 + 1;
  if ( ExAcquireRundownProtection_0(a1 + 1) )
  {
    *(_DWORD *)(a2 + 44) = 6;
    v5 = guard_dispatch_icall_no_overrides(a1[3].Count, a2);
    ExReleaseRundownProtection_0(v2);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v5;
}
