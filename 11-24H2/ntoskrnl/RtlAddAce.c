/*
 * XREFs of RtlAddAce @ 0x140910700
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1403EAEE8 (SepAppendAceToTokenDefaultDacl.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403EB390 (SepSetProcessTrustLabelAceForToken.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403974 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1409CEE40 (PiDevCfgGetKeySecurityDescriptor.c)
 * Callees:
 *     RtlValidAcl @ 0x140910580 (RtlValidAcl.c)
 */

NTSTATUS __stdcall RtlAddAce(PACL Acl, ULONG AceRevision, ULONG StartingAceIndex, PVOID AceList, ULONG AceListLength)
{
  ULONG AceCount; // edi
  PACL v10; // rax
  ULONG v11; // r11d
  PACL v12; // r9
  ULONG i; // r10d
  char *v14; // rdx
  __int64 v15; // r8
  ACL *v16; // r14
  UCHAR AclRevision; // r13
  char *v18; // r10
  int v19; // r9d
  __int64 v20; // r10
  char *v21; // rbx
  NTSTATUS result; // eax
  unsigned __int8 v23; // cl
  __int64 v24; // r11
  UCHAR v25; // cl
  __int16 v26; // [rsp+20h] [rbp-38h]

  if ( !RtlValidAcl(Acl) )
    return -1073741811;
  AceCount = Acl->AceCount;
  v10 = Acl + 1;
  v11 = 0;
  v12 = Acl + 1;
  for ( i = 0; i < AceCount; ++i )
  {
    if ( v12 >= (PACL)((char *)Acl + Acl->AclSize) )
      return -1073741811;
    v12 = (PACL)((char *)v12 + v12->AclSize);
  }
  v14 = (char *)AceList;
  v15 = AceListLength;
  v16 = (PACL)((char *)Acl + Acl->AclSize);
  AclRevision = AceRevision;
  v26 = 0;
  v18 = (char *)AceList + AceListLength;
  if ( v12 > v16 )
    v12 = 0LL;
  if ( (unsigned __int8)AceRevision <= Acl->AclRevision )
    AclRevision = Acl->AclRevision;
  while ( v14 < v18 )
  {
    v23 = *v14;
    if ( (unsigned __int8)*v14 > 3u )
    {
      if ( v23 <= 4u )
      {
        if ( AceRevision < 3 )
          return -1073741811;
      }
      else if ( v23 <= 8u )
      {
        if ( AceRevision < 4 )
          return -1073741811;
      }
      else if ( !*((_WORD *)v14 + 1) )
      {
        return -1073741811;
      }
    }
    v14 += *((unsigned __int16 *)v14 + 1);
    ++v26;
  }
  if ( v14 > v18 )
    return -1073741811;
  if ( !v12 || (PACL)((char *)v12 + AceListLength) > v16 )
    return -1073741789;
  if ( StartingAceIndex )
  {
    do
    {
      if ( v11 >= AceCount )
        break;
      ++v11;
      v10 = (PACL)((char *)v10 + v10->AclSize);
    }
    while ( v11 < StartingAceIndex );
  }
  v19 = (_DWORD)v12 - (_DWORD)v10 - 1;
  v20 = v19;
  if ( v19 >= 0 )
  {
    v24 = v19 + AceListLength;
    do
    {
      v25 = *(&v10->AclRevision + v20--);
      *(&v10->AclRevision + v24) = v25;
      v24 = (unsigned int)(v24 - 1);
    }
    while ( v20 >= 0 );
  }
  if ( AceListLength )
  {
    v21 = (char *)((_BYTE *)AceList - (_BYTE *)v10);
    do
    {
      v10->AclRevision = *(&v10->AclRevision + (_QWORD)v21);
      v10 = (PACL)((char *)v10 + 1);
      --v15;
    }
    while ( v15 );
  }
  Acl->AceCount += v26;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
