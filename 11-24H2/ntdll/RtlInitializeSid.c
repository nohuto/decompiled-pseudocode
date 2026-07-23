/*
 * XREFs of RtlInitializeSid @ 0x1800DF620
 * Callers:
 *     RtlpCompareKnownObjectAces @ 0x1800C4ECC (RtlpCompareKnownObjectAces.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DF2A0 (WerpAllocateAndInitializeSid.c)
 *     RtlpConvertAclToAutoInherit @ 0x180137D30 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlInitializeSid(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount)
{
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  *((_BYTE *)Sid + 1) = SubAuthorityCount;
  *(_BYTE *)Sid = 1;
  *(_SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  return 0;
}
