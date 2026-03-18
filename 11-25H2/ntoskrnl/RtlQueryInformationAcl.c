/*
 * XREFs of RtlQueryInformationAcl @ 0x1409EC240
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x14036A3B0 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x14036B568 (SepAppendAceToTokenDefaultDacl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlQueryInformationAcl(unsigned __int8 *a1, unsigned int *a2, unsigned int a3, int a4)
{
  unsigned int v4; // r10d
  int v6; // r9d
  unsigned int v8; // r10d
  unsigned __int8 *v9; // rdx
  int v10; // r8d
  unsigned int i; // r9d
  unsigned __int8 *v12; // rax
  int v13; // edx

  v4 = *a1;
  if ( (unsigned __int8)(v4 - 2) > 2u )
    return 3221225485LL;
  v6 = a4 - 1;
  if ( !v6 )
  {
    if ( a3 >= 4 )
    {
      *a2 = v4;
      return 0LL;
    }
    return 3221225507LL;
  }
  if ( v6 != 1 )
    return 3221225475LL;
  if ( a3 < 0xC )
    return 3221225507LL;
  v8 = *((unsigned __int16 *)a1 + 2);
  v9 = a1 + 8;
  v10 = 0;
  for ( i = 0; ; ++i )
  {
    v12 = &a1[*((unsigned __int16 *)a1 + 1)];
    if ( i >= v8 )
      break;
    if ( v9 >= v12 )
      return 3221225485LL;
    v9 += *((unsigned __int16 *)v9 + 1);
  }
  *a2 = v8;
  if ( v9 > v12 )
    v9 = 0LL;
  if ( v9 )
  {
    v13 = (_DWORD)v9 - (_DWORD)a1;
    a2[1] = v13;
    v10 = *((unsigned __int16 *)a1 + 1) - v13;
  }
  else
  {
    a2[1] = *((unsigned __int16 *)a1 + 1);
  }
  a2[2] = v10;
  return 0LL;
}
