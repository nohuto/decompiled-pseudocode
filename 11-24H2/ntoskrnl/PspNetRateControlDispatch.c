/*
 * XREFs of PspNetRateControlDispatch @ 0x140777B64
 * Callers:
 *     PspJobDelete @ 0x1404E6110 (PspJobDelete.c)
 *     PspSetNetRateControl @ 0x1407783E4 (PspSetNetRateControl.c)
 *     PspQueryRateControlHistory @ 0x14085DB0C (PspQueryRateControlHistory.c)
 * Callees:
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PspNetRateControlDispatch(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspNetRateControlExtensionHost) )
  {
    v3 = guard_dispatch_icall_no_overrides(a1, v2);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspNetRateControlExtensionHost);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
