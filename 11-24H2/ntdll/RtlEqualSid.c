/*
 * XREFs of RtlEqualSid @ 0x1800C5DD0
 * Callers:
 *     RtlpValidOwnerSubjectContext @ 0x1800BE320 (RtlpValidOwnerSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x1800BEAF0 (RtlpSetSecurityObject.c)
 *     RtlpCompareKnownObjectAces @ 0x1800C4ECC (RtlpCompareKnownObjectAces.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x1800C5980 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpCompareAces @ 0x1800C5BC0 (RtlpCompareAces.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800C677C (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x18012FD80 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     memcmp @ 0x180165A90 (memcmp.c)
 */

BOOLEAN __cdecl RtlEqualSid(PSID Sid1, PSID Sid2)
{
  unsigned __int64 v2; // rax

  v2 = *(unsigned __int16 *)Sid1;
  return (_WORD)v2 == *(_WORD *)Sid2 && memcmp(Sid1, Sid2, 4 * (v2 >> 8) + 8) == 0;
}
