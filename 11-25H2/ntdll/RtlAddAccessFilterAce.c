/*
 * XREFs of RtlAddAccessFilterAce @ 0x18013C440
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidSid @ 0x18005FCD0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x18005FD10 (RtlValidAcl.c)
 *     RtlCopySid @ 0x180060CD0 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x1800DC8E0 (RtlFirstFreeAce.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1800E88C0 (RtlIsValidProcessTrustLabelSid.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlAddAccessFilterAce(
        PACL Acl,
        unsigned int a2,
        int a3,
        __int64 a4,
        char a5,
        int a6,
        _DWORD *Src,
        unsigned __int16 a8)
{
  __int64 result; // rax
  int v13; // ecx
  unsigned __int8 AclRevision; // r15
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  _BYTE *v17; // rsi
  char *v18; // rdx
  char v19; // [rsp+20h] [rbp-20h]
  PVOID FirstFree; // [rsp+28h] [rbp-18h] BYREF
  int v21; // [rsp+30h] [rbp-10h]
  unsigned __int16 v22; // [rsp+34h] [rbp-Ch]

  v19 = a3;
  FirstFree = 0LL;
  v21 = 0;
  v22 = 256;
  if ( !Acl || !RtlValidAcl(Acl) )
    return 3221225591LL;
  if ( !Src || (unsigned __int16)(a8 - 6) > 0xFFF8u || *Src != 2020897377 || a5 != 21 )
    return 3221225485LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  if ( (a3 & 0x40) != 0 )
  {
    if ( !RtlIsValidProcessTrustLabelSid((PSID)a4) )
      return 3221225485LL;
  }
  else
  {
    v13 = *(_DWORD *)(a4 + 2) - v21;
    if ( !v13 )
      v13 = *(unsigned __int16 *)(a4 + 6) - v22;
    if ( v13 || *(_BYTE *)(a4 + 1) != 1 || *(_DWORD *)(a4 + 8) )
      return 3221225485LL;
  }
  if ( Acl->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision <= a2 )
    AclRevision = a2;
  if ( (a3 & 0xFFFFFFA0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v15 = (a8 + 3) & 0xFFFFFFFC;
  v16 = v15 + 4 * (*(unsigned __int8 *)(a4 + 1) + 4);
  if ( v16 < v15 )
    return 3221225621LL;
  if ( v16 > 0xFFFF )
    return 3221225485LL;
  v17 = FirstFree;
  if ( !FirstFree || (char *)FirstFree + v16 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  v18 = (char *)FirstFree + 8;
  *((_WORD *)FirstFree + 1) = v16;
  v17[1] = v19;
  *v17 = 21;
  *((_DWORD *)v17 + 1) = a6;
  RtlCopySid(4 * *(unsigned __int8 *)(a4 + 1) + 8, v18, (PSID)a4);
  memmove(&v17[4 * *(unsigned __int8 *)(a4 + 1) + 16], Src, a8);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
