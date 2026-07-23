/*
 * XREFs of SddlAddScopedPolicyIDAce @ 0x1407876A4
 * Callers:
 *     LocalGetAclForString @ 0x140917620 (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopySid @ 0x1408A5010 (RtlCopySid.c)
 *     RtlValidSid @ 0x140918DF0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x14092A320 (RtlValidAcl.c)
 *     RtlFirstFreeAce @ 0x1409A71C0 (RtlFirstFreeAce.c)
 */

__int64 __fastcall SddlAddScopedPolicyIDAce(PACL Acl, __int64 a2, int a3, int a4, char *Sid)
{
  __int64 result; // rax
  int v9; // ecx
  UCHAR AclRevision; // bp
  __int16 v11; // ax
  char *v12; // rbx
  unsigned __int16 v13; // ax
  ULONG v14; // eax
  PVOID FirstFree; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+28h] [rbp-30h]
  unsigned __int16 v17; // [rsp+2Ch] [rbp-2Ch]

  FirstFree = 0LL;
  v16 = 0;
  v17 = 4352;
  if ( !Acl )
    return 3221225591LL;
  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  v9 = *(_DWORD *)(Sid + 2) - v16;
  if ( !v9 )
    v9 = *((unsigned __int16 *)Sid + 3) - v17;
  if ( v9 )
    return 3221225485LL;
  if ( Acl->AclRevision > 4u )
    return 3221225561LL;
  AclRevision = 2;
  if ( Acl->AclRevision > 2u )
    AclRevision = Acl->AclRevision;
  if ( (a3 & 0xFFFFFFE0) != 0 || a4 )
    return 3221225485LL;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v11 = RtlLengthSid(Sid);
  v12 = (char *)FirstFree;
  v13 = v11 + 8;
  if ( !FirstFree || (char *)FirstFree + v13 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_DWORD *)FirstFree + 1) = 0;
  v12[1] = a3;
  *v12 = 19;
  *((_WORD *)v12 + 1) = v13;
  v14 = RtlLengthSid(Sid);
  RtlCopySid(v14, v12 + 8, Sid);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
