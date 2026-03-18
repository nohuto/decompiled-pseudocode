/*
 * XREFs of PdcPortSendMessageSynchronously @ 0x140491674
 * Callers:
 *     Pdcv2ActivationClientRenewActivation @ 0x14077E860 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientActivate @ 0x14096C430 (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientDeactivate @ 0x14096DDD8 (Pdcv2ActivationClientDeactivate.c)
 *     PdcTaskClientRequest @ 0x140A86C44 (PdcTaskClientRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
