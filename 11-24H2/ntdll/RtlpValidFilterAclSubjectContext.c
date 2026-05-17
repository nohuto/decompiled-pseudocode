/*
 * XREFs of RtlpValidFilterAclSubjectContext @ 0x1800CAF40
 * Callers:
 *     RtlpSetSecurityObject @ 0x1800C6F30 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x1800C9280 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1800C87B0 (RtlSidDominatesForTrust.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpValidFilterAclSubjectContext(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  __int64 v6; // rdi
  unsigned int i; // edx
  unsigned int v8; // ebx
  int v9; // r8d
  bool v10; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+24h] [rbp-34h]
  unsigned __int16 v12; // [rsp+28h] [rbp-30h]

  result = 0LL;
  v12 = 256;
  v3 = 0;
  v11 = 0;
  if ( a1 )
  {
    do
    {
      v6 = a1 + 8;
      for ( i = 0; ; ++i )
      {
        if ( i >= *(unsigned __int16 *)(a1 + 4) )
          return result;
        if ( i >= v3 && *(_BYTE *)v6 == 21 )
          break;
        v6 += *(unsigned __int16 *)(v6 + 2);
      }
      v8 = i;
      if ( (*(_DWORD *)(v6 + 4) & 0xFF000000) != 0 )
        return 3221225485LL;
      if ( (*(_BYTE *)(v6 + 1) & 0x40) != 0 )
      {
        v10 = 0;
        if ( !a2 )
          return 3221225506LL;
        result = RtlSidDominatesForTrust(a2, v6 + 8, &v10);
        if ( !v10 )
          return 3221225506LL;
      }
      else
      {
        v9 = *(_DWORD *)(v6 + 10) - v11;
        if ( !v9 )
          v9 = *(unsigned __int16 *)(v6 + 14) - v12;
        if ( v9 || *(_BYTE *)(v6 + 9) != 1 || *(_DWORD *)(v6 + 16) )
          return 3221225485LL;
      }
      v3 = v8 + 1;
    }
    while ( v6 );
  }
  return result;
}
