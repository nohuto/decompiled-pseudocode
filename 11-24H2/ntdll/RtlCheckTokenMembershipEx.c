/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x180019CF0
 * Callers:
 *     RtlCapabilityCheck @ 0x18001A270 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18001C5C8 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCheckTokenMembership @ 0x1800EB590 (RtlCheckTokenMembership.c)
 * Callees:
 *     RtlValidSid @ 0x1800194A0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1800194E0 (RtlValidAcl.c)
 *     RtlInitializeSidEx @ 0x180019A20 (RtlInitializeSidEx.c)
 *     ZwAccessCheck @ 0x180160050 (ZwAccessCheck.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenThreadTokenEx @ 0x180160630 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x180160650 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x180160890 (NtDuplicateToken.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembershipEx(HANDLE TokenHandle, PSID SidToCheck, ULONG Flags, PBOOLEAN IsMember)
{
  unsigned __int8 v8; // si
  __int16 v9; // ax
  unsigned __int8 AclRevision; // di
  _BYTE *v11; // rcx
  unsigned int i; // r8d
  unsigned __int16 v13; // r8
  unsigned __int8 v14; // bl
  char *v15; // rdx
  unsigned int j; // r8d
  char *v17; // r8
  int v18; // r9d
  unsigned __int16 v19; // cx
  int v20; // edi
  _BYTE *v22; // rdx
  unsigned int k; // r8d
  int v24; // r9d
  unsigned __int16 v25; // cx
  PPRIVILEGE_SET PrivilegeSet; // [rsp+20h] [rbp-E0h]
  ULONG PrivilegeSetLength; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS AccessStatus; // [rsp+44h] [rbp-BCh] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE ClientToken; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE TokenHandlea; // [rsp+58h] [rbp-A8h] BYREF
  __int128 SecurityDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v33; // [rsp+70h] [rbp-90h]
  ACL *p_Acl; // [rsp+80h] [rbp-80h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-48h] BYREF
  int v37; // [rsp+C0h] [rbp-40h]
  ACL Acl; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v39[232]; // [rsp+D8h] [rbp-28h] BYREF
  char Sid; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned __int8 v41; // [rsp+1C1h] [rbp+C1h]
  _PRIVILEGE_SET v42; // [rsp+210h] [rbp+110h] BYREF

  GrantedAccess = 0;
  AccessStatus = 0;
  memset_thunk_772440563353939046(&Sid, 0, 0x44uLL);
  memset_thunk_772440563353939046(&Acl, 0, 0xECuLL);
  ClientToken = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  PrivilegeSetLength = 0;
  v36 = 0LL;
  v37 = 0;
  p_Acl = 0LL;
  TokenHandlea = 0LL;
  *IsMember = 0;
  memset(&ObjectAttributes, 0, 32);
  SecurityDescriptor = 0LL;
  v33 = 0LL;
  if ( (Flags & 0xFFFFFFFC) == 0 )
  {
    v8 = 2;
    if ( TokenHandle )
    {
      ClientToken = TokenHandle;
    }
    else
    {
      v20 = NtOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 0, 0, &ClientToken);
      if ( v20 == -1073741700 )
      {
        v20 = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0, &TokenHandlea);
        if ( v20 < 0 )
          goto LABEL_54;
        ObjectAttributes.SecurityQualityOfService = &v36;
        ObjectAttributes.Length = 48;
        memset(&ObjectAttributes.RootDirectory, 0, 20);
        ObjectAttributes.SecurityDescriptor = 0LL;
        v36 = 0x20000000CLL;
        LOWORD(v37) = 1;
        v20 = NtDuplicateToken(TokenHandlea, 0xCu, &ObjectAttributes, 0, TokenImpersonation, &ClientToken);
        NtClose(TokenHandlea);
      }
      if ( v20 < 0 )
        goto LABEL_54;
    }
    LOBYTE(SecurityDescriptor) = 1;
    if ( (SWORD1(SecurityDescriptor) & 0x8000u) == 0 )
    {
      *((_QWORD *)&SecurityDescriptor + 1) = 0LL;
      if ( SidToCheck )
        *((_QWORD *)&SecurityDescriptor + 1) = SidToCheck;
      v9 = WORD1(SecurityDescriptor) & 0xFFFE;
      WORD1(SecurityDescriptor) = v9;
      if ( v9 >= 0 )
      {
        *(_QWORD *)&v33 = 0LL;
        if ( SidToCheck )
          *(_QWORD *)&v33 = SidToCheck;
        WORD1(SecurityDescriptor) = v9 & 0xFFFD;
      }
    }
    Acl = (ACL)15466498LL;
    if ( RtlValidSid(SidToCheck) && Acl.AclRevision <= 4u )
    {
      AclRevision = 2;
      if ( Acl.AclRevision > 2u )
        AclRevision = Acl.AclRevision;
      if ( RtlValidAcl(&Acl) )
      {
        v11 = v39;
        for ( i = 0; i < Acl.AceCount; ++i )
        {
          if ( v11 >= (_BYTE *)&Acl + Acl.AclSize )
            goto LABEL_25;
          v11 += *((unsigned __int16 *)v11 + 1);
        }
        if ( v11 > (_BYTE *)&Acl + Acl.AclSize )
          v11 = 0LL;
        v13 = 4 * (*((unsigned __int8 *)SidToCheck + 1) + 4);
        if ( v11 && &v11[v13] <= (_BYTE *)&Acl + Acl.AclSize )
        {
          *((_WORD *)v11 + 1) = v13;
          *(_WORD *)v11 = 0;
          *((_DWORD *)v11 + 1) = 1;
          memmove(v11 + 8, SidToCheck, 4LL * *((unsigned __int8 *)SidToCheck + 1) + 8);
          ++Acl.AceCount;
          Acl.AclRevision = AclRevision;
        }
      }
    }
LABEL_25:
    if ( (Flags & 3) != 0 )
    {
      LODWORD(PrivilegeSet) = 1;
      RtlInitializeSidEx(&Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u, 2LL, PrivilegeSet);
      if ( RtlValidSid(&Sid) )
      {
        if ( Acl.AclRevision <= 4u )
        {
          v14 = 2;
          if ( Acl.AclRevision > 2u )
            v14 = Acl.AclRevision;
          if ( RtlValidAcl(&Acl) )
          {
            v15 = v39;
            for ( j = 0; j < Acl.AceCount; ++j )
            {
              if ( v15 >= (char *)&Acl + Acl.AclSize )
                goto LABEL_40;
              v15 += *((unsigned __int16 *)v15 + 1);
            }
            v17 = (char *)&Acl + Acl.AclSize;
            v18 = v41;
            if ( v15 > v17 )
              v15 = 0LL;
            v19 = 4 * (v41 + 4);
            if ( v15 && &v15[v19] <= v17 )
            {
              *((_WORD *)v15 + 1) = v19;
              *(_WORD *)v15 = 0;
              *((_DWORD *)v15 + 1) = 1;
              memmove(v15 + 8, &Sid, (unsigned int)(4 * v18 + 8));
              ++Acl.AceCount;
              Acl.AclRevision = v14;
            }
          }
        }
      }
    }
LABEL_40:
    if ( (Flags & 2) != 0 )
    {
      LODWORD(PrivilegeSet) = 2;
      RtlInitializeSidEx(&Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u, 2LL, PrivilegeSet);
      if ( RtlValidSid(&Sid) )
      {
        if ( Acl.AclRevision <= 4u )
        {
          if ( Acl.AclRevision > 2u )
            v8 = Acl.AclRevision;
          if ( RtlValidAcl(&Acl) )
          {
            v22 = v39;
            for ( k = 0; k < Acl.AceCount; ++k )
            {
              if ( v22 >= (_BYTE *)&Acl + Acl.AclSize )
                goto LABEL_41;
              v22 += *((unsigned __int16 *)v22 + 1);
            }
            v24 = v41;
            if ( v22 > (_BYTE *)&Acl + Acl.AclSize )
              v22 = 0LL;
            v25 = 4 * (v41 + 4);
            if ( v22 && &v22[v25] <= (_BYTE *)&Acl + Acl.AclSize )
            {
              *((_WORD *)v22 + 1) = v25;
              *(_WORD *)v22 = 0;
              *((_DWORD *)v22 + 1) = 1;
              memmove(v22 + 8, &Sid, (unsigned int)(4 * v24 + 8));
              ++Acl.AceCount;
              Acl.AclRevision = v8;
            }
          }
        }
      }
    }
LABEL_41:
    if ( (_BYTE)SecurityDescriptor == 1 && (SWORD1(SecurityDescriptor) & 0x8000u) == 0 )
    {
      p_Acl = &Acl;
      WORD1(SecurityDescriptor) = WORD1(SecurityDescriptor) & 0xFFF3 | 4;
    }
    PrivilegeSetLength = 56;
    v20 = ZwAccessCheck(
            &SecurityDescriptor,
            ClientToken,
            1u,
            (PGENERIC_MAPPING)&RtlpCheckTokenMembershipGenericMapping,
            &v42,
            &PrivilegeSetLength,
            &GrantedAccess,
            &AccessStatus);
    if ( v20 >= 0 )
    {
      v20 = 0;
      if ( AccessStatus )
      {
        if ( AccessStatus == -1073741790 )
          goto LABEL_48;
        goto LABEL_47;
      }
      if ( GrantedAccess != 1 )
      {
LABEL_47:
        v20 = AccessStatus;
        goto LABEL_48;
      }
      *IsMember = 1;
    }
LABEL_48:
    if ( TokenHandle )
      return v20;
LABEL_54:
    if ( ClientToken )
      NtClose(ClientToken);
    return v20;
  }
  return -1073741811;
}
