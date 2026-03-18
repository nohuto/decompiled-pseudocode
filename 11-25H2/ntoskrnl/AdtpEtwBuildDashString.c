/*
 * XREFs of AdtpEtwBuildDashString @ 0x140A90C78
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x1404037E0 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpPackageParameters @ 0x140451F80 (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x14045299C (AdtpBuildMultiSzStringListString.c)
 * Callees:
 *     <none>
 */

char *__fastcall AdtpEtwBuildDashString(__int64 a1)
{
  char *result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  result = byte_14001C238;
  *(_QWORD *)a1 = byte_14001C238;
  *(_DWORD *)(a1 + 8) = 4;
  return result;
}
