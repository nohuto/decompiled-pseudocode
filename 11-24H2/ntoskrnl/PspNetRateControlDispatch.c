/*
 * XREFs of PspNetRateControlDispatch @ 0x1407779A4
 * Callers:
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 *     PspSetNetRateControl @ 0x140778224 (PspSetNetRateControl.c)
 *     PspQueryRateControlHistory @ 0x1408EC2DC (PspQueryRateControlHistory.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PspNetRateControlDispatch(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspNetRateControlExtensionHost) )
  {
    v5 = guard_dispatch_icall_no_overrides(a1, v2, v3, v4);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspNetRateControlExtensionHost);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v5;
}
