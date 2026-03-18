/*
 * XREFs of AdtpPermissionBitPosition @ 0x14068C1F4
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x1404037E0 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14068BD3C (AdtpBuildStagingReasonAuditStringInternal.c)
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
