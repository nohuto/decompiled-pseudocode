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

__int64 RtlpAddKnownObjectAce(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        _OWORD *a5,
        _OWORD *a6,
        unsigned __int8 *a7,
        char a8,
        ...)
{
  __int64 result; // rax
  char v13; // di
  int v14; // r9d
  unsigned int v15; // r11d
  unsigned __int16 v16; // r8
  __int64 v17; // rdx
  _OWORD *v18; // rdx
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v19[0] = 0LL;
  if ( !RtlValidSid(a7) )
    return 3221225592LL;
  if ( *(_BYTE *)a1 > 4u || a2 != 4 )
    return 3221225561LL;
  v13 = 4;
  if ( *(_BYTE *)a1 > 4u )
    v13 = *(_BYTE *)a1;
  if ( (a3 & 0xFFFFFFE0) != 0 && (a8 != 7 || (a3 & 0xFFFFFF20) != 0) )
    return 3221225485LL;
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, v19) )
    return 3221225591LL;
  v14 = a5 != 0LL;
  v15 = 4 * a7[1] + 8;
  v16 = 4 * a7[1] + 8 + (a5 != 0LL ? 28 : 12);
  if ( a6 )
  {
    v14 |= 2u;
    v16 += 16;
  }
  v17 = v19[0];
  if ( !v19[0] || v19[0] + (unsigned __int64)v16 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_BYTE *)(v19[0] + 1LL) = a3;
  *(_BYTE *)v17 = a8;
  *(_WORD *)(v17 + 2) = v16;
  *(_DWORD *)(v17 + 4) = a4;
  *(_DWORD *)(v17 + 8) = v14;
  v18 = (_OWORD *)(v17 + 12);
  if ( a5 )
    *v18++ = *a5;
  if ( a6 )
    *v18++ = *a6;
  RtlCopySid(v15, v18, a7);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v13;
  return result;
}
