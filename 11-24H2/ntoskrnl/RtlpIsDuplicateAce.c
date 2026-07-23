/*
 * XREFs of RtlpIsDuplicateAce @ 0x14090C5D0
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x14090C760 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     RtlpCompareKnownObjectAces @ 0x1406F8DA4 (RtlpCompareKnownObjectAces.c)
 */

char __fastcall RtlpIsDuplicateAce(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v4; // cl
  int v5; // ebx
  unsigned __int8 *v6; // rdi
  int v7; // r12d
  int v8; // r14d
  int v9; // r15d
  __int64 v10; // rcx
  unsigned __int8 v11; // r9
  __int64 v12; // rdx
  unsigned __int8 v14; // cl
  int v15; // eax

  if ( *a2 == 4 )
    return 0;
  if ( *a2 > 8u )
    return 0;
  v4 = a2[1];
  if ( (v4 & 0x10) == 0 )
    return 0;
  v5 = 0;
  v6 = (unsigned __int8 *)(a1 + 8);
  v7 = *((_DWORD *)a2 + 1);
  v8 = 0;
  v9 = v7;
  if ( (v4 & 2) == 0 )
    v9 = 0;
  if ( (v4 & 1) == 0 )
    v7 = 0;
  if ( (v4 & 8) == 0 )
    v8 = *((_DWORD *)a2 + 1);
  while ( 1 )
  {
    if ( v5 >= *(unsigned __int16 *)(a1 + 4) - 1 )
      return 0;
    v10 = *v6;
    if ( (unsigned __int8)v10 <= 8u && (_BYTE)v10 != 4 )
    {
      v11 = v6[1];
      if ( (v11 & 0x10) != 0 )
      {
        if ( (unsigned __int8)v10 >= 5u )
        {
          if ( (unsigned __int8)(*a2 - 5) > 3u || !RtlpCompareKnownObjectAces(v6, a2) )
            goto LABEL_19;
        }
        else
        {
          v12 = *a2;
          if ( (unsigned __int8)(v12 - 5) <= 3u
            || *((_BYTE *)RtlBaseAceType + v12) != *((_BYTE *)RtlBaseAceType + v10)
            || *((_BYTE *)RtlIsSystemAceType + v12) && ((a2[1] ^ v11) & 0xC0) != 0
            || !RtlEqualSid(a2 + 8, v6 + 8) )
          {
            goto LABEL_19;
          }
        }
        v14 = v6[1];
        v15 = ~*((_DWORD *)v6 + 1);
        if ( (v14 & 2) != 0 )
          v9 &= v15;
        if ( (v14 & 1) != 0 )
          v7 &= v15;
        if ( (v14 & 8) == 0 )
          v8 &= v15;
        if ( !(v9 | v7 | v8) )
          return 1;
      }
    }
LABEL_19:
    ++v5;
    v6 += *((unsigned __int16 *)v6 + 1);
  }
}
