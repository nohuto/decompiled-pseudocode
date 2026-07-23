/*
 * XREFs of RtlEqualSid @ 0x180084E60
 * Callers:
 *     RtlpCompareKnownObjectAces @ 0x18006548C (RtlpCompareKnownObjectAces.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800668AC (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x180084840 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpCompareAces @ 0x180084C50 (RtlpCompareAces.c)
 *     RtlpSetSecurityObject @ 0x1800E6AA0 (RtlpSetSecurityObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800E8934 (RtlpValidOwnerSubjectContext.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x180133630 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     memcmp @ 0x180168C50 (memcmp.c)
 */

BOOLEAN __cdecl RtlEqualSid(PSID Sid1, PSID Sid2)
{
  unsigned __int64 v2; // rax

  v2 = *(unsigned __int16 *)Sid1;
  return (_WORD)v2 == *(_WORD *)Sid2 && memcmp(Sid1, Sid2, 4 * (v2 >> 8) + 8) == 0;
}
