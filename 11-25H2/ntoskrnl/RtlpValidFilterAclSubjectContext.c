/*
 * XREFs of RtlpValidFilterAclSubjectContext @ 0x14091B890
 * Callers:
 *     RtlpSetSecurityObject @ 0x14091A030 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlFindAceByType @ 0x1404052C0 (RtlFindAceByType.c)
 *     RtlpValidTrustSubjectContext @ 0x14045D468 (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpValidFilterAclSubjectContext(PACL Acl, void *a2)
{
  _DWORD *AceByType; // rax
  __int64 v5; // r8
  int v7; // edx
  ULONG Index; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+24h] [rbp-24h] BYREF
  int v10; // [rsp+28h] [rbp-20h]
  unsigned __int16 v11; // [rsp+2Ch] [rbp-1Ch]

  v11 = 256;
  v9 = 0;
  v10 = 0;
  for ( Index = 0; ; ++Index )
  {
    while ( 1 )
    {
      AceByType = RtlFindAceByType(Acl, 0x15u, &Index);
      if ( !AceByType )
        goto LABEL_3;
      if ( (AceByType[1] & 0xFF000000) != 0 )
        return 3221225485LL;
      if ( (*((_BYTE *)AceByType + 1) & 0x40) != 0 )
        break;
      v7 = *(_DWORD *)((char *)AceByType + 10) - v10;
      if ( !v7 )
        v7 = *((unsigned __int16 *)AceByType + 7) - v11;
      if ( v7 || *((_BYTE *)AceByType + 9) != 1 || AceByType[4] )
        return 3221225485LL;
LABEL_3:
      ++Index;
      if ( !AceByType )
        return v9;
    }
    if ( !RtlpValidTrustSubjectContext(a2, (__int64)(AceByType + 2), v5, &v9) )
      break;
  }
  return 3221225506LL;
}
