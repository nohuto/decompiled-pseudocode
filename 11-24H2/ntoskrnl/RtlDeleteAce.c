/*
 * XREFs of RtlDeleteAce @ 0x140A564C0
 * Callers:
 *     SepRemoveAceFromTokenDefaultDacl @ 0x1403E9B40 (SepRemoveAceFromTokenDefaultDacl.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlValidAcl @ 0x140910580 (RtlValidAcl.c)
 */

NTSTATUS __stdcall RtlDeleteAce(PACL Acl, ULONG AceIndex)
{
  __int64 v2; // rdi
  unsigned int AceCount; // ecx
  PACL v5; // r9
  unsigned int v6; // r8d
  PACL i; // rdx
  ACL *v8; // rax
  __int64 v9; // rcx
  size_t AclSize; // r8
  unsigned int v11; // edx
  unsigned int v12; // r10d
  UCHAR *v14; // r11
  UCHAR v15; // al
  __int64 v16; // rcx

  v2 = AceIndex;
  if ( !RtlValidAcl(Acl) )
    return -1073741811;
  AceCount = Acl->AceCount;
  if ( (unsigned int)v2 >= AceCount )
    return -1073741811;
  v5 = Acl + 1;
  v6 = 0;
  for ( i = Acl + 1; ; i = (PACL)((char *)i + i->AclSize) )
  {
    v8 = (PACL)((char *)Acl + Acl->AclSize);
    if ( v6 >= AceCount )
      break;
    if ( i >= v8 )
      return -1073741811;
    ++v6;
  }
  if ( i > v8 )
    LODWORD(i) = 0;
  if ( (_DWORD)v2 )
  {
    v9 = v2;
    do
    {
      v5 = (PACL)((char *)v5 + v5->AclSize);
      --v9;
    }
    while ( v9 );
  }
  AclSize = v5->AclSize;
  v11 = (_DWORD)i - (_DWORD)v5;
  v12 = v5->AclSize;
  if ( (unsigned int)AclSize < v11 )
  {
    v14 = (UCHAR *)v5 + AclSize;
    do
    {
      v15 = *v14;
      v16 = v12 - (unsigned int)AclSize;
      ++v12;
      ++v14;
      *(&v5->AclRevision + v16) = v15;
    }
    while ( v12 < v11 );
  }
  if ( v11 >= (unsigned int)AclSize )
    memset_0((char *)v5 + v11 - (unsigned int)AclSize, 0, AclSize);
  --Acl->AceCount;
  return 0;
}
