/*
 * XREFs of RtlpAddKnownObjectAce @ 0x140780194
 * Callers:
 *     RtlAddAccessAllowedObjectAce @ 0x14077F9C0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x14077FA50 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x14077FD40 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlValidSid @ 0x14086B530 (RtlValidSid.c)
 *     RtlCopySid @ 0x1408E7870 (RtlCopySid.c)
 *     RtlValidAcl @ 0x140910580 (RtlValidAcl.c)
 *     RtlFirstFreeAce @ 0x1409943D0 (RtlFirstFreeAce.c)
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
  int v13; // r9d
  ULONG v14; // r11d
  unsigned __int16 v15; // r8
  char *v16; // rdx
  _OWORD *v17; // rdx
  PVOID FirstFree; // [rsp+20h] [rbp-38h] BYREF

  FirstFree = 0LL;
  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 != 4 )
    return 3221225561LL;
  if ( (a3 & 0xFFFFFFE0) != 0 && (a8 != 7 || (a3 & 0xFFFFFF20) != 0) )
    return 3221225485LL;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v13 = a5 != 0LL;
  v14 = 4 * Sid[1] + 8;
  v15 = 4 * Sid[1] + 8 + (a5 != 0LL ? 28 : 12);
  if ( a6 )
  {
    v13 |= 2u;
    v15 += 16;
  }
  v16 = (char *)FirstFree;
  if ( !FirstFree || (char *)FirstFree + v15 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_BYTE *)FirstFree + 1) = a3;
  *v16 = a8;
  *((_WORD *)v16 + 1) = v15;
  *((_DWORD *)v16 + 1) = a4;
  *((_DWORD *)v16 + 2) = v13;
  v17 = v16 + 12;
  if ( a5 )
    *v17++ = *a5;
  if ( a6 )
    *v17++ = *a6;
  RtlCopySid(v14, v17, Sid);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = 4;
  return result;
}
