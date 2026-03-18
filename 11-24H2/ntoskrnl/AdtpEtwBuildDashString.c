/*
 * XREFs of AdtpEtwBuildDashString @ 0x140A93E50
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14040AF54 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpPackageParameters @ 0x1404534B8 (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x140453EDC (AdtpBuildMultiSzStringListString.c)
 * Callees:
 *     <none>
 */

char *__fastcall AdtpEtwBuildDashString(__int64 a1)
{
  char *result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  result = byte_14001C518;
  *(_QWORD *)a1 = byte_14001C518;
  *(_DWORD *)(a1 + 8) = 4;
  return result;
}
