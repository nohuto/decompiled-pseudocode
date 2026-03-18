/*
 * XREFs of PspNetRateControlDispatch @ 0x140767EC4
 * Callers:
 *     PspJobDelete @ 0x1404EB860 (PspJobDelete.c)
 *     PspSetNetRateControl @ 0x140768744 (PspSetNetRateControl.c)
 *     PspQueryRateControlHistory @ 0x1408DCF0C (PspQueryRateControlHistory.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PspNetRateControlDispatch(__int64 a1)
{
  unsigned int v2; // ebx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspNetRateControlExtensionHost) )
  {
    v2 = guard_dispatch_icall_no_overrides(a1);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspNetRateControlExtensionHost);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v2;
}
