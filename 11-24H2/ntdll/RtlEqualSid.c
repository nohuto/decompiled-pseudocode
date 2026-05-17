/*
 * XREFs of RtlEqualSid @ 0x1800CE210
 * Callers:
 *     RtlpValidOwnerSubjectContext @ 0x1800C6760 (RtlpValidOwnerSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x1800C6F30 (RtlpSetSecurityObject.c)
 *     RtlpCompareKnownObjectAces @ 0x1800CD30C (RtlpCompareKnownObjectAces.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x1800CDDC0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpCompareAces @ 0x1800CE000 (RtlpCompareAces.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800CEBBC (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x180131B50 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     memcmp @ 0x1801676D0 (memcmp.c)
 */

bool __fastcall RtlEqualSid(unsigned __int16 *a1, _WORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = *a1;
  return (_WORD)v2 == *a2 && memcmp(a1, a2, 4 * (v2 >> 8) + 8) == 0;
}
