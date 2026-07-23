/*
 * XREFs of RtlQueryInformationAcl @ 0x1409DFFE0
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1403EAEE8 (SepAppendAceToTokenDefaultDacl.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403EB390 (SepSetProcessTrustLabelAceForToken.c)
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
  PACL v8; // rdx
  int v9; // r8d
  unsigned int i; // r9d
  ACL *v11; // rax
  int v12; // edx

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
  if ( v6 == 1 )
  {
    if ( AclInformationLength >= 0xC )
    {
      AceCount = Acl->AceCount;
      v8 = Acl + 1;
      v9 = 0;
      for ( i = 0; ; ++i )
      {
        v11 = (PACL)((char *)Acl + Acl->AclSize);
        if ( i >= AceCount )
          break;
        if ( v8 >= v11 )
          return -1073741811;
        v8 = (PACL)((char *)v8 + v8->AclSize);
      }
      *(_DWORD *)AclInformation = AceCount;
      if ( v8 > v11 )
        v8 = 0LL;
      if ( v8 )
      {
        v12 = (_DWORD)v8 - (_DWORD)Acl;
        *((_DWORD *)AclInformation + 1) = v12;
        v9 = Acl->AclSize - v12;
      }
      else
      {
        *((_DWORD *)AclInformation + 1) = Acl->AclSize;
      }
      *((_DWORD *)AclInformation + 2) = v9;
      return 0;
    }
    return -1073741789;
  }
  return -1073741821;
}
