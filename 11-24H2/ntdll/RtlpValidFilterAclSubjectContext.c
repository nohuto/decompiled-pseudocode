/*
 * XREFs of RtlpValidFilterAclSubjectContext @ 0x1800C2B00
 * Callers:
 *     RtlpSetSecurityObject @ 0x1800BEAF0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x1800C0E40 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1800C0370 (RtlSidDominatesForTrust.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpValidFilterAclSubjectContext(__int64 a1, void *a2)
{
  NTSTATUS result; // eax
  unsigned int v3; // ebx
  __int64 v6; // rdi
  unsigned int i; // edx
  unsigned int v8; // ebx
  int v9; // r8d
  BOOLEAN DominatesTrust[4]; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+24h] [rbp-34h]
  unsigned __int16 v12; // [rsp+28h] [rbp-30h]

  result = 0;
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
        return -1073741811;
      if ( (*(_BYTE *)(v6 + 1) & 0x40) != 0 )
      {
        DominatesTrust[0] = 0;
        if ( !a2 )
          return -1073741790;
        result = RtlSidDominatesForTrust(a2, (PSID)(v6 + 8), DominatesTrust);
        if ( !DominatesTrust[0] )
          return -1073741790;
      }
      else
      {
        v9 = *(_DWORD *)(v6 + 10) - v11;
        if ( !v9 )
          v9 = *(unsigned __int16 *)(v6 + 14) - v12;
        if ( v9 || *(_BYTE *)(v6 + 9) != 1 || *(_DWORD *)(v6 + 16) )
          return -1073741811;
      }
      v3 = v8 + 1;
    }
    while ( v6 );
  }
  return result;
}
