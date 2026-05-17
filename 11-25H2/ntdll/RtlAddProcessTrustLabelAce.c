/*
 * XREFs of RtlAddProcessTrustLabelAce @ 0x1800E68E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidSid @ 0x18005FCD0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x18005FD10 (RtlValidAcl.c)
 *     RtlCopySid @ 0x180060CD0 (RtlCopySid.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1800E88C0 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall RtlAddProcessTrustLabelAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        char a5,
        int a6)
{
  unsigned __int8 v10; // bp
  unsigned __int8 *v11; // rdx
  unsigned int i; // ecx
  unsigned __int8 *v13; // r9
  unsigned __int16 v14; // cx
  __int64 result; // rax

  if ( !a1 || !RtlValidAcl((__int64)a1) )
    return 3221225591LL;
  if ( a5 != 20 )
    return 3221225485LL;
  if ( !RtlValidSid(a4) )
    return 3221225592LL;
  if ( !(unsigned __int8)RtlIsValidProcessTrustLabelSid(a4) )
    return 3221225485LL;
  if ( *a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = *a1;
  if ( *a1 <= a2 )
    v10 = a2;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  v11 = a1 + 8;
  for ( i = 0; i < *((unsigned __int16 *)a1 + 2); ++i )
  {
    if ( v11 >= &a1[*((unsigned __int16 *)a1 + 1)] )
      return 3221225591LL;
    v11 += *((unsigned __int16 *)v11 + 1);
  }
  v13 = &a1[*((unsigned __int16 *)a1 + 1)];
  if ( v11 > v13 )
    v11 = 0LL;
  v14 = 4 * (a4[1] + 4);
  if ( !v11 || &v11[v14] > v13 )
    return 3221225625LL;
  *((_WORD *)v11 + 1) = v14;
  *((_DWORD *)v11 + 1) = a6;
  v11[1] = a3;
  *v11 = 20;
  RtlCopySid(4 * a4[1] + 8, v11 + 8, a4);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v10;
  return result;
}
