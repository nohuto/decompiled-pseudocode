/*
 * XREFs of RtlQueryInformationAcl @ 0x1409EC240
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x14036A3B0 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x14036B568 (SepAppendAceToTokenDefaultDacl.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlQueryInformationAcl(
        PACL Acl,
        PVOID AclInformation,
        ULONG AclInformationLength,
        ACL_INFORMATION_CLASS AclInformationClass)
{
  int AclRevision; // r10d
  __int32 v6; // r9d
  unsigned int AceCount; // r10d
  PACL v9; // rdx
  int v10; // r8d
  unsigned int i; // r9d
  ACL *v12; // rax
  int v13; // edx

  AclRevision = Acl->AclRevision;
  if ( (unsigned __int8)(AclRevision - 2) > 2u )
    return -1073741811;
  v6 = AclInformationClass - 1;
  if ( !v6 )
  {
    if ( AclInformationLength >= 4 )
    {
      *(_DWORD *)AclInformation = AclRevision;
      return 0;
    }
    return -1073741789;
  }
  if ( v6 != 1 )
    return -1073741821;
  if ( AclInformationLength < 0xC )
    return -1073741789;
  AceCount = Acl->AceCount;
  v9 = Acl + 1;
  v10 = 0;
  for ( i = 0; ; ++i )
  {
    v12 = (PACL)((char *)Acl + Acl->AclSize);
    if ( i >= AceCount )
      break;
    if ( v9 >= v12 )
      return -1073741811;
    v9 = (PACL)((char *)v9 + v9->AclSize);
  }
  *(_DWORD *)AclInformation = AceCount;
  if ( v9 > v12 )
    v9 = 0LL;
  if ( v9 )
  {
    v13 = (_DWORD)v9 - (_DWORD)Acl;
    *((_DWORD *)AclInformation + 1) = v13;
    v10 = Acl->AclSize - v13;
  }
  else
  {
    *((_DWORD *)AclInformation + 1) = Acl->AclSize;
  }
  *((_DWORD *)AclInformation + 2) = v10;
  return 0;
}
