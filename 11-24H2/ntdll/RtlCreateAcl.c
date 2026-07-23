/*
 * XREFs of RtlCreateAcl @ 0x1800C5940
 * Callers:
 *     RtlpCreateServerAcl @ 0x1800BE59C (RtlpCreateServerAcl.c)
 *     RtlpCombineAcls @ 0x1800C2C00 (RtlpCombineAcls.c)
 *     RtlpComputeMergedAcl2 @ 0x1800C5214 (RtlpComputeMergedAcl2.c)
 *     RtlDefaultNpAcl @ 0x1800C5540 (RtlDefaultNpAcl.c)
 *     RtlCreateAndSetSD @ 0x1800C5E10 (RtlCreateAndSetSD.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800C62C4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpConvertAclToAutoInherit @ 0x180137D30 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCreateAcl(PACL Acl, ULONG AclLength, ULONG AclRevision)
{
  NTSTATUS result; // eax

  if ( AclLength < 8 )
    return -1073741789;
  if ( AclRevision - 2 > 2 || AclLength > 0xFFFC )
    return -1073741811;
  Acl->AclRevision = AclRevision;
  result = 0;
  Acl->Sbz1 = 0;
  *(_DWORD *)&Acl->AceCount = 0;
  Acl->AclSize = AclLength & 0xFFFC;
  return result;
}
