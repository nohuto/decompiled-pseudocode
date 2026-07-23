/*
 * XREFs of RtlpCompareAces @ 0x1800C5BC0
 * Callers:
 *     RtlpConvertAclToAutoInherit @ 0x180137D30 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     RtlpCompareKnownObjectAces @ 0x1800C4ECC (RtlpCompareKnownObjectAces.c)
 *     RtlEqualSid @ 0x1800C5DD0 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memcmp @ 0x180165A90 (memcmp.c)
 */

char __fastcall RtlpCompareAces(unsigned __int8 *a1, unsigned __int8 *a2, void *a3, void *a4)
{
  __int64 v4; // r11
  char result; // al
  int v10; // edx
  unsigned __int64 v11; // rax
  __int16 v12; // bp
  int v13; // ecx

  v4 = *a1;
  result = 0;
  if ( (unsigned __int8)(v4 - 5) <= 3u )
  {
    if ( (unsigned __int8)(*a2 - 5) <= 3u )
      return RtlpCompareKnownObjectAces(a1, a2, a3, a4);
  }
  else
  {
    v10 = *a2;
    if ( (unsigned __int8)(v10 - 5) > 3u )
    {
      if ( RtlBaseAceType[v10] != RtlBaseAceType[v4] || RtlIsSystemAceType[v10] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
        return 0;
      v11 = *((unsigned __int16 *)a2 + 4);
      v12 = *((_WORD *)a1 + 4);
      if ( (_WORD)v11 == v12 && !memcmp(a2 + 8, a1 + 8, 4 * (v11 >> 8) + 8) )
        return 1;
      if ( (a2[1] & 3 | ~a2[1] & 8) == 8
        && (a3 || a4)
        && (_BYTE)v12 == 1
        && !a1[10]
        && !a1[11]
        && !a1[12]
        && !a1[13]
        && !a1[14]
        && a1[15] == 3
        && a1[9] == 1 )
      {
        v13 = *((_DWORD *)a1 + 4);
        if ( v13 )
        {
          if ( v13 == 1 && a4 && RtlEqualSid(a2 + 8, a4) )
            return 1;
        }
        else if ( a3 && RtlEqualSid(a2 + 8, a3) )
        {
          return 1;
        }
      }
      return 0;
    }
  }
  return result;
}
