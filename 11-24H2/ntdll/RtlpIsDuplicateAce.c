/*
 * XREFs of RtlpIsDuplicateAce @ 0x1800C4D30
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x1800C3BC0 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlpCompareKnownObjectAces @ 0x1800C4ECC (RtlpCompareKnownObjectAces.c)
 *     memcmp @ 0x180165A90 (memcmp.c)
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
  unsigned __int64 v13; // rax
  unsigned __int8 v15; // cl
  int v16; // eax

  if ( *a2 <= 8u && *a2 != 4 )
  {
    v4 = a2[1];
    if ( (v4 & 0x10) != 0 )
    {
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
            v12 = *a2;
            if ( (unsigned __int8)v10 >= 5u )
            {
              if ( (unsigned __int8)(v12 - 5) > 3u || !(unsigned __int8)RtlpCompareKnownObjectAces(v6, a2, 0LL, 0LL) )
                goto LABEL_19;
            }
            else
            {
              if ( (unsigned __int8)(v12 - 5) <= 3u
                || RtlBaseAceType[v12] != RtlBaseAceType[v10]
                || RtlIsSystemAceType[v12] && ((a2[1] ^ v11) & 0xC0) != 0 )
              {
                goto LABEL_19;
              }
              v13 = *((unsigned __int16 *)a2 + 4);
              if ( (_WORD)v13 != *((_WORD *)v6 + 4) || memcmp(a2 + 8, v6 + 8, 4 * (v13 >> 8) + 8) )
                goto LABEL_19;
            }
            v15 = v6[1];
            v16 = ~*((_DWORD *)v6 + 1);
            if ( (v15 & 2) != 0 )
              v9 &= v16;
            if ( (v15 & 1) != 0 )
              v7 &= v16;
            if ( (v15 & 8) == 0 )
              v8 &= v16;
            if ( !(v9 | v7 | v8) )
              return 1;
          }
        }
LABEL_19:
        ++v5;
        v6 += *((unsigned __int16 *)v6 + 1);
      }
    }
  }
  return 0;
}
