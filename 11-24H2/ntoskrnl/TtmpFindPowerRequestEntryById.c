/*
 * XREFs of TtmpFindPowerRequestEntryById @ 0x14076A884
 * Callers:
 *     TtmiSetDisplayPowerRequest @ 0x14076A23C (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x14076B0E4 (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x14076B2C4 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x14076B394 (TtmpUpdatePowerRequestAttribute.c)
 * Callees:
 *     TtmpPowerRequestEntryComparator @ 0x14076AD84 (TtmpPowerRequestEntryComparator.c)
 *     TtmiLogError @ 0x14099E04C (TtmiLogError.c)
 */

bool __fastcall TtmpFindPowerRequestEntryById(__int64 a1, int a2, __int64 *a3)
{
  unsigned int v3; // r15d
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rsi

  v3 = *(_DWORD *)(a1 + 276);
  v5 = a2;
  v6 = 0LL;
  v7 = 0LL;
  v8 = -1LL << (*(_BYTE *)(a1 + 276) & 0x1F);
  v9 = v8 & a2;
LABEL_2:
  if ( v7 )
    goto LABEL_5;
  if ( v3 >> 5 )
  {
    v7 = *(_QWORD *)(a1 + 280)
       + 8LL
       * ((37
         * (BYTE6(v9)
          + 37
          * (BYTE5(v9)
           + 37
           * (BYTE4(v9) + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
         + HIBYTE(v9)) & ((v3 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v9 == (v8 & *(_QWORD *)(v7 + 8)) )
      {
        if ( !v7 )
          break;
        if ( (unsigned int)TtmpPowerRequestEntryComparator(v7, v5) )
        {
          v6 = v7;
          goto LABEL_11;
        }
        goto LABEL_2;
      }
    }
  }
  TtmiLogError("TtmpFindPowerRequestEntryById", 402LL, 3221226021LL, 0xFFFFFFFFLL);
LABEL_11:
  if ( a3 )
    *a3 = v6;
  return v6 != 0;
}
