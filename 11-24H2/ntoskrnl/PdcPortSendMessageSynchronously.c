/*
 * XREFs of PdcPortSendMessageSynchronously @ 0x14048F5DC
 * Callers:
 *     Pdcv2ActivationClientRenewActivation @ 0x14078DB14 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientActivate @ 0x1409EDF3C (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientDeactivate @ 0x1409EF760 (Pdcv2ActivationClientDeactivate.c)
 *     PdcTaskClientRequest @ 0x140A8B894 (PdcTaskClientRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PdcPortSendMessageSynchronously(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 v5; // r9
  unsigned int v6; // ebx

  v2 = a1 + 1;
  if ( ExAcquireRundownProtection(a1 + 1) )
  {
    *(_DWORD *)(a2 + 44) = 6;
    v6 = guard_dispatch_icall_no_overrides(a1[3].Count, a2, 800LL, v5);
    ExReleaseRundownProtection_0(v2);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v6;
}
