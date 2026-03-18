/*
 * XREFs of AdtpPermissionBitPosition @ 0x140697544
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14040AF54 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14069708C (AdtpBuildStagingReasonAuditStringInternal.c)
 * Callees:
 *     <none>
 */

char __fastcall AdtpPermissionBitPosition(unsigned int a1)
{
  char result; // al

  for ( result = 0; ; ++result )
  {
    a1 >>= 1;
    if ( !a1 )
      break;
  }
  return result;
}
