/*
 * XREFs of RtlAddMandatoryAce @ 0x1800C89E0
 * Callers:
 *     RtlpNewSecurityObject @ 0x1800C9280 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x180039220 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180039260 (RtlValidAcl.c)
 *     RtlCopySid @ 0x1800C8B90 (RtlCopySid.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlAddMandatoryAce(__int64 a1, unsigned int a2, int a3, __int64 a4, char a5, int a6)
{
  int v10; // ecx
  __int64 result; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int16 v14; // cx
  char v15; // al
  bool v16; // cc
  char v17; // si
  unsigned int i; // ecx

  if ( !a1 )
    return 3221225591LL;
  if ( a5 != 17 )
    return 3221225485LL;
  if ( !RtlValidSid((_BYTE *)a4) )
    return 3221225592LL;
  v10 = *(_DWORD *)(a4 + 2);
  if ( !v10 )
    v10 = *(unsigned __int16 *)(a4 + 6) - 4096;
  if ( v10 )
    return 3221225485LL;
  if ( *(_BYTE *)a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v15 = a2;
  v16 = *(_BYTE *)a1 <= (unsigned __int8)a2;
  v17 = *(_BYTE *)a1;
  if ( v16 )
    v17 = v15;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFFFFFFF8) != 0 )
    return 3221225485LL;
  if ( !RtlValidAcl(a1) )
    return 3221225591LL;
  v13 = a1 + 8;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 4); ++i )
  {
    if ( v13 >= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
      return 3221225591LL;
    v13 += *(unsigned __int16 *)(v13 + 2);
  }
  v12 = a1 + *(unsigned __int16 *)(a1 + 2);
  if ( v13 > v12 )
    v13 = 0LL;
  v14 = 4 * (*(unsigned __int8 *)(a4 + 1) + 4);
  if ( !v13 || v13 + v14 > v12 )
    return 3221225625LL;
  *(_WORD *)(v13 + 2) = v14;
  *(_BYTE *)(v13 + 1) = a3;
  *(_BYTE *)v13 = 17;
  *(_DWORD *)(v13 + 4) = a6;
  RtlCopySid(4 * (unsigned int)*(unsigned __int8 *)(a4 + 1) + 8, v13 + 8, a4);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v17;
  return result;
}
