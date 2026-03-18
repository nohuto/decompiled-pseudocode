/*
 * XREFs of SddlAddMandatoryAce @ 0x1409193A8
 * Callers:
 *     LocalGetAclForString @ 0x140917620 (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopySid @ 0x1408A5010 (RtlCopySid.c)
 *     RtlValidSid @ 0x140918DF0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x14092A320 (RtlValidAcl.c)
 */

__int64 __fastcall SddlAddMandatoryAce(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  int v9; // ecx
  char v10; // bp
  unsigned __int64 v11; // rbx
  unsigned int i; // ecx
  unsigned __int64 v13; // r15
  unsigned __int16 v14; // ax
  ULONG v15; // eax

  if ( !a1 )
    return 3221225591LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  v9 = *(_DWORD *)(a4 + 2);
  if ( !v9 )
    v9 = *(unsigned __int16 *)(a4 + 6) - 4096;
  if ( v9 )
    return 3221225485LL;
  if ( *(_BYTE *)a1 > 4u )
    return 3221225561LL;
  v10 = 2;
  if ( *(_BYTE *)a1 > 2u )
    v10 = *(_BYTE *)a1;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFFFFFFF8) != 0 )
    return 3221225485LL;
  if ( !(unsigned __int8)RtlValidAcl(a1) )
    return 3221225591LL;
  v11 = a1 + 8;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 4); ++i )
  {
    if ( v11 >= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
      return 3221225591LL;
    v11 += *(unsigned __int16 *)(v11 + 2);
  }
  v13 = a1 + *(unsigned __int16 *)(a1 + 2);
  if ( v11 > v13 )
    v11 = 0LL;
  v14 = RtlLengthSid((PSID)a4) + 8;
  if ( !v11 || v11 + v14 > v13 )
    return 3221225625LL;
  *(_BYTE *)(v11 + 1) = a3;
  *(_BYTE *)v11 = 17;
  *(_WORD *)(v11 + 2) = v14;
  *(_DWORD *)(v11 + 4) = a6;
  v15 = RtlLengthSid((PSID)a4);
  RtlCopySid(v15, (PSID)(v11 + 8), (PSID)a4);
  *(_BYTE *)a1 = v10;
  ++*(_WORD *)(a1 + 4);
  return 0LL;
}
