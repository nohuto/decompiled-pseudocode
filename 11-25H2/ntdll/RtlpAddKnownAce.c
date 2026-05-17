/*
 * XREFs of RtlpAddKnownAce @ 0x18005F780
 * Callers:
 *     RtlDefaultNpAcl @ 0x180065B00 (RtlDefaultNpAcl.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800663F4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlAddAccessDeniedAceEx @ 0x18010EEC0 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAuditAccessAceEx @ 0x1801110A0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAccessDeniedAce @ 0x1801169A0 (RtlAddAccessDeniedAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x18013C380 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x18013C3E0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x18013C640 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x18013C680 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlValidSid @ 0x18005FCD0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x18005FD10 (RtlValidAcl.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpAddKnownAce(char *a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, char a6)
{
  unsigned __int8 v10; // al
  unsigned __int8 v11; // di
  unsigned __int64 v12; // rcx
  unsigned int i; // edx
  unsigned __int64 v14; // rdx
  unsigned __int16 v15; // r8
  __int64 result; // rax
  unsigned int v17; // eax

  if ( !(unsigned __int8)RtlValidSid(Src) )
    return 3221225592LL;
  if ( (unsigned __int8)*a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = a2;
  v11 = *a1;
  if ( (unsigned __int8)*a1 <= v10 )
    v11 = v10;
  if ( (a3 & 0xFFFFFFE0) == 0 )
    goto LABEL_7;
  if ( a6 == 2 )
  {
    v17 = a3 & 0xFFFFFF20;
  }
  else
  {
    if ( a6 )
      return 3221225485LL;
    v17 = a3 & 0xFFFFFFC0;
  }
  if ( v17 )
    return 3221225485LL;
LABEL_7:
  if ( !(unsigned __int8)RtlValidAcl(a1) )
    return 3221225591LL;
  v12 = (unsigned __int64)(a1 + 8);
  for ( i = 0; i < *((unsigned __int16 *)a1 + 2); ++i )
  {
    if ( v12 >= (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
      return 3221225591LL;
    v12 += *(unsigned __int16 *)(v12 + 2);
  }
  v14 = (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)];
  if ( v12 > v14 )
    v12 = 0LL;
  v15 = 4 * (Src[1] + 4);
  if ( !v12 || v12 + v15 > v14 )
    return 3221225625LL;
  *(_WORD *)(v12 + 2) = v15;
  *(_BYTE *)(v12 + 1) = a3;
  *(_BYTE *)v12 = a6;
  *(_DWORD *)(v12 + 4) = a4;
  memmove((void *)(v12 + 8), Src, 4LL * Src[1] + 8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v11;
  return result;
}
