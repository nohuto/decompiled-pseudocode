/*
 * XREFs of RtlpValidFilterAclSubjectContext @ 0x14085A8C0
 * Callers:
 *     RtlpSetSecurityObject @ 0x140858F70 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlFindAceByType @ 0x14040C700 (RtlFindAceByType.c)
 *     RtlpValidTrustSubjectContext @ 0x14045B91C (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpValidFilterAclSubjectContext(__int64 a1, __int64 a2)
{
  unsigned __int8 *AceByType; // rax
  __int64 v5; // r8
  int v7; // edx
  unsigned int i; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+24h] [rbp-24h] BYREF
  int v10; // [rsp+28h] [rbp-20h]
  unsigned __int16 v11; // [rsp+2Ch] [rbp-1Ch]

  v11 = 256;
  v9 = 0;
  v10 = 0;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      AceByType = RtlFindAceByType(a1, 21, &i);
      if ( !AceByType )
        goto LABEL_3;
      if ( (*((_DWORD *)AceByType + 1) & 0xFF000000) != 0 )
        return 3221225485LL;
      if ( (AceByType[1] & 0x40) != 0 )
        break;
      v7 = *(_DWORD *)(AceByType + 10) - v10;
      if ( !v7 )
        v7 = *((unsigned __int16 *)AceByType + 7) - v11;
      if ( v7 || AceByType[9] != 1 || *((_DWORD *)AceByType + 4) )
        return 3221225485LL;
LABEL_3:
      ++i;
      if ( !AceByType )
        return v9;
    }
    if ( !RtlpValidTrustSubjectContext(a2, (__int64)(AceByType + 8), v5, &v9) )
      break;
  }
  return 3221225506LL;
}
