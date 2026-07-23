/*
 * XREFs of ViXdvSetXdvKernelUtilities @ 0x14060F764
 * Callers:
 *     ViXdvDriverLoadImage @ 0x140B8C9B0 (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall ViXdvSetXdvKernelUtilities(__int64 a1)
{
  char result; // al

  result = a1;
  if ( a1 )
  {
    guard_dispatch_icall_no_overrides(ViUtilsForXDV, &VfRuleClasses);
    return 1;
  }
  return result;
}
