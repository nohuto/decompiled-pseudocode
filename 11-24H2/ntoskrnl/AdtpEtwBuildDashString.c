/*
 * XREFs of AdtpEtwBuildDashString @ 0x140A90600
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x140403434 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpPackageParameters @ 0x140448568 (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x140448F8C (AdtpBuildMultiSzStringListString.c)
 * Callees:
 *     <none>
 */

char *__fastcall AdtpEtwBuildDashString(__int64 a1)
{
  char *result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  result = byte_14001DF78;
  *(_QWORD *)a1 = byte_14001DF78;
  *(_DWORD *)(a1 + 8) = 4;
  return result;
}
