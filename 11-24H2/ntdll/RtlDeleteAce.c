/*
 * XREFs of RtlDeleteAce @ 0x1800F1780
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidAcl @ 0x1800194E0 (RtlValidAcl.c)
 *     RtlpDeleteData @ 0x1800F1818 (RtlpDeleteData.c)
 */

NTSTATUS __cdecl RtlDeleteAce(PACL Acl, ULONG AceIndex)
{
  __int64 v2; // rdi
  unsigned int AceCount; // edx
  PACL v5; // rcx
  unsigned int v6; // r9d
  PACL i; // r8
  ACL *v8; // rax
  __int64 v9; // rdx

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
  RtlpDeleteData(v5, v5->AclSize, (unsigned int)((_DWORD)i - (_DWORD)v5));
  --Acl->AceCount;
  return 0;
}
