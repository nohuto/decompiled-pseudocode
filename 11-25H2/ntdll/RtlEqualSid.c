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

bool __fastcall RtlEqualSid(unsigned __int16 *a1, _WORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = *a1;
  return (_WORD)v2 == *a2 && memcmp(a1, a2, 4 * (v2 >> 8) + 8) == 0;
}
