/*
 * XREFs of RtlQueryInformationAcl @ 0x1800DC770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlQueryInformationAcl(
        PACL Acl,
        PVOID AclInformation,
        ULONG AclInformationLength,
        ACL_INFORMATION_CLASS AclInformationClass)
{
  int AclRevision; // ecx
  __int32 v7; // r9d
  unsigned int AceCount; // r8d
  PACL v9; // rdx
  unsigned int i; // ecx
  ACL *v11; // rax
  int v12; // edx
  NTSTATUS result; // eax

  AclRevision = Acl->AclRevision;
  if ( (unsigned __int8)(AclRevision - 2) > 2u )
    return -1073741811;
  v7 = AclInformationClass - 1;
  if ( !v7 )
  {
    if ( AclInformationLength >= 4 )
    {
      *(_DWORD *)AclInformation = AclRevision;
      return 0;
    }
    return -1073741789;
  }
  if ( v7 != 1 )
    return -1073741821;
  if ( AclInformationLength < 0xC )
    return -1073741789;
  AceCount = Acl->AceCount;
  v9 = Acl + 1;
  for ( i = 0; ; ++i )
  {
    v11 = (PACL)((char *)Acl + Acl->AclSize);
    if ( i >= AceCount )
      break;
    if ( v9 >= v11 )
      return -1073741811;
    v9 = (PACL)((char *)v9 + v9->AclSize);
  }
  *(_DWORD *)AclInformation = AceCount;
  if ( v9 > v11 )
    v9 = 0LL;
  if ( v9 )
  {
    v12 = (_DWORD)v9 - (_DWORD)Acl;
    *((_DWORD *)AclInformation + 1) = v12;
    *((_DWORD *)AclInformation + 2) = Acl->AclSize - v12;
    return 0;
  }
  *((_DWORD *)AclInformation + 1) = Acl->AclSize;
  result = 0;
  *((_DWORD *)AclInformation + 2) = 0;
  return result;
}
