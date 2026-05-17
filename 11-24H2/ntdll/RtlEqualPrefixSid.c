/*
 * XREFs of RtlEqualPrefixSid @ 0x1800CD560
 * Callers:
 *     RtlpCopyEffectiveAce @ 0x1800CC4B0 (RtlpCopyEffectiveAce.c)
 *     RtlpCompareKnownObjectAces @ 0x1800CD30C (RtlpCompareKnownObjectAces.c)
 * Callees:
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

char __fastcall RtlEqualPrefixSid(_BYTE *a1, _BYTE *a2)
{
  int v3; // r8d
  int v4; // eax
  int v5; // r10d
  int v6; // r9d
  _DWORD *v7; // r8
  __int64 v8; // rdx
  int v9; // r9d

  if ( *a1 != *a2 )
    return 0;
  if ( a1[2] != a2[2] )
    return 0;
  if ( a1[3] != a2[3] )
    return 0;
  if ( a1[4] != a2[4] )
    return 0;
  if ( a1[5] != a2[5] )
    return 0;
  if ( a1[6] != a2[6] )
    return 0;
  if ( a1[7] != a2[7] )
    return 0;
  v3 = (unsigned __int8)a1[1];
  if ( (_BYTE)v3 != a2[1] )
    return 0;
  if ( (_BYTE)v3 )
  {
    if ( (_BYTE)v3 != 11 )
      goto LABEL_12;
    v9 = *(_DWORD *)(a1 + 2);
    if ( !v9 )
      v9 = *((unsigned __int16 *)a1 + 3) - 2816;
    v4 = 5;
    if ( v9 )
LABEL_12:
      v4 = 1;
    v5 = 0;
    v6 = v3 - v4;
    v7 = a1 + 8;
    v8 = a2 - a1;
    while ( v5 < v6 )
    {
      if ( *v7 != *(_DWORD *)((char *)v7 + v8) )
        return 0;
      ++v5;
      ++v7;
    }
  }
  return 1;
}
