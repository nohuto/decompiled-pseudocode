/*
 * XREFs of RtlAddProcessTrustLabelAce @ 0x140918E20
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x14036A3B0 (SepSetProcessTrustLabelAceForToken.c)
 *     RtlpNewSecurityObject @ 0x140927AA0 (RtlpNewSecurityObject.c)
 *     SeMakeSystemToken @ 0x140C29020 (SeMakeSystemToken.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1403616D0 (RtlIsValidProcessTrustLabelSid.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlValidSid @ 0x140918DF0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x14092A320 (RtlValidAcl.c)
 */

__int64 __fastcall RtlAddProcessTrustLabelAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        char a5,
        int a6)
{
  unsigned int v10; // eax
  unsigned __int8 v11; // bp
  unsigned __int8 *v12; // rcx
  unsigned int i; // edx
  unsigned __int8 *v14; // r9
  unsigned __int16 v15; // dx
  __int64 result; // rax

  if ( !a1 || !(unsigned __int8)RtlValidAcl(a1) )
    return 3221225591LL;
  if ( a5 != 20 )
    return 3221225485LL;
  if ( !RtlValidSid(a4) )
    return 3221225592LL;
  if ( !RtlIsValidProcessTrustLabelSid((__int64)a4) )
    return 3221225485LL;
  v10 = *a1;
  if ( (unsigned __int8)v10 > 4u || a2 > 4 )
    return 3221225561LL;
  v11 = *a1;
  if ( v10 <= a2 )
    v11 = a2;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  v12 = a1 + 8;
  for ( i = 0; i < *((unsigned __int16 *)a1 + 2); ++i )
  {
    if ( v12 >= &a1[*((unsigned __int16 *)a1 + 1)] )
      return 3221225591LL;
    v12 += *((unsigned __int16 *)v12 + 1);
  }
  v14 = &a1[*((unsigned __int16 *)a1 + 1)];
  if ( v12 > v14 )
    v12 = 0LL;
  v15 = 4 * (a4[1] + 4);
  if ( !v12 || &v12[v15] > v14 )
    return 3221225625LL;
  *((_WORD *)v12 + 1) = v15;
  *((_DWORD *)v12 + 1) = a6;
  v12[1] = a3;
  *v12 = 20;
  memmove(v12 + 8, a4, 4LL * a4[1] + 8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v11;
  return result;
}
