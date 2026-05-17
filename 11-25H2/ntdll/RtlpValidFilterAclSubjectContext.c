/*
 * XREFs of RtlpValidFilterAclSubjectContext @ 0x1800630C0
 * Callers:
 *     RtlpNewSecurityObject @ 0x180061400 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1800E6AA0 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1800E8830 (RtlSidDominatesForTrust.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpValidFilterAclSubjectContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  __int64 v8; // rdi
  unsigned int i; // edx
  unsigned int v10; // ebx
  int v11; // r8d
  _BYTE v12[4]; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+24h] [rbp-34h]
  unsigned __int16 v14; // [rsp+28h] [rbp-30h]

  result = 0LL;
  v14 = 256;
  v5 = 0;
  v13 = 0;
  if ( a1 )
  {
    do
    {
      v8 = a1 + 8;
      for ( i = 0; ; ++i )
      {
        if ( i >= *(unsigned __int16 *)(a1 + 4) )
          return result;
        if ( i >= v5 && *(_BYTE *)v8 == 21 )
          break;
        v8 += *(unsigned __int16 *)(v8 + 2);
      }
      v10 = i;
      if ( (*(_DWORD *)(v8 + 4) & 0xFF000000) != 0 )
        return 3221225485LL;
      if ( (*(_BYTE *)(v8 + 1) & 0x40) != 0 )
      {
        v12[0] = 0;
        if ( !a2 )
          return 3221225506LL;
        result = RtlSidDominatesForTrust(a2, v8 + 8, v12, a4);
        if ( !v12[0] )
          return 3221225506LL;
      }
      else
      {
        v11 = *(_DWORD *)(v8 + 10) - v13;
        if ( !v11 )
          v11 = *(unsigned __int16 *)(v8 + 14) - v14;
        if ( v11 || *(_BYTE *)(v8 + 9) != 1 || *(_DWORD *)(v8 + 16) )
          return 3221225485LL;
      }
      v5 = v10 + 1;
    }
    while ( v8 );
  }
  return result;
}
