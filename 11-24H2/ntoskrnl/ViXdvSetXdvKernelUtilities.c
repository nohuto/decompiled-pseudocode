/*
 * XREFs of ViXdvSetXdvKernelUtilities @ 0x1406111A4
 * Callers:
 *     ViXdvDriverLoadImage @ 0x140B8A9B0 (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall ViXdvSetXdvKernelUtilities(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  result = a1;
  if ( a1 )
  {
    LOBYTE(a3) = CmStateSeparationEnabled;
    guard_dispatch_icall_no_overrides(ViUtilsForXDV, &VfRuleClasses, a3, (unsigned int)VfOptionFlags);
    return 1;
  }
  return result;
}
