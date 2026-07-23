/*
 * XREFs of RtlpAddKnownObjectAce @ 0x18013CDD0
 * Callers:
 *     RtlAddAccessAllowedObjectAce @ 0x18013C380 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x18013C3E0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x18013C680 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlValidSid @ 0x18005FCD0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x18005FD10 (RtlValidAcl.c)
 *     RtlCopySid @ 0x180060CD0 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x1800DC8E0 (RtlFirstFreeAce.c)
 */

__int64 __fastcall RtlpAddKnownObjectAce(
        PACL Acl,
        int a2,
        int a3,
        int a4,
        _OWORD *a5,
        _OWORD *a6,
        unsigned __int8 *Sid,
        char a8)
{
  __int64 result; // rax
  unsigned __int8 AclRevision; // di
  int v14; // r9d
  ULONG v15; // r11d
  unsigned __int16 v16; // r8
  char *v17; // rdx
  _OWORD *v18; // rdx
  PVOID FirstFree; // [rsp+20h] [rbp-38h] BYREF

  FirstFree = 0LL;
  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 != 4 )
    return 3221225561LL;
  AclRevision = 4;
  if ( Acl->AclRevision > 4u )
    AclRevision = Acl->AclRevision;
  if ( (a3 & 0xFFFFFFE0) != 0 && (a8 != 7 || (a3 & 0xFFFFFF20) != 0) )
    return 3221225485LL;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v14 = a5 != 0LL;
  v15 = 4 * Sid[1] + 8;
  v16 = 4 * Sid[1] + 8 + (a5 != 0LL ? 28 : 12);
  if ( a6 )
  {
    v14 |= 2u;
    v16 += 16;
  }
  v17 = (char *)FirstFree;
  if ( !FirstFree || (char *)FirstFree + v16 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_BYTE *)FirstFree + 1) = a3;
  *v17 = a8;
  *((_WORD *)v17 + 1) = v16;
  *((_DWORD *)v17 + 1) = a4;
  *((_DWORD *)v17 + 2) = v14;
  v18 = v17 + 12;
  if ( a5 )
    *v18++ = *a5;
  if ( a6 )
    *v18++ = *a6;
  RtlCopySid(v15, v18, Sid);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
