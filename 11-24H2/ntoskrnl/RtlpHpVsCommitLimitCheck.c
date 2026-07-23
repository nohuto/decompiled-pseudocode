/*
 * XREFs of RtlpHpVsCommitLimitCheck @ 0x14036683C
 * Callers:
 *     RtlpHpVsChunkFree @ 0x1403645D0 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsChunkSplit @ 0x140366900 (RtlpHpVsChunkSplit.c)
 * Callees:
 *     RtlpHpEnvCompactionSchedule @ 0x14035ED20 (RtlpHpEnvCompactionSchedule.c)
 */

__int64 __fastcall RtlpHpVsCommitLimitCheck(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  bool v13; // cf
  bool v14; // zf
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx

  v3 = 0;
  v4 = a3;
  if ( *(__int16 *)(a2 + 36) >= 0 )
  {
    if ( *(_WORD *)(a1 + 6) )
    {
      v5 = *(_QWORD *)(a1 + 8) ^ a1;
      if ( (*(_BYTE *)(v5 + 0xD) & 8) != 0 )
        return 1;
      v6 = *(__int16 *)((*(_QWORD *)(a1 + 8) ^ a1) + 0x16);
      v7 = *(_QWORD *)(v6 + v5 + 16) + *(_QWORD *)(v6 + v5 + 24);
      v8 = *(_QWORD *)(v6 + v5 + 8);
      v9 = *(_QWORD *)(v6 + (*(_QWORD *)(a1 + 8) ^ a1) + 8) >> *(_BYTE *)((*(_QWORD *)(a1 + 8) ^ a1) + 0xB);
      if ( v9 <= 8 )
        v9 = 8LL;
      v10 = v8 >> *(_BYTE *)((*(_QWORD *)(a1 + 8) ^ a1) + 0xC);
      if ( v10 <= 8 )
        v10 = 8LL;
      v11 = a3 + v7;
      if ( v11 <= v9 )
        return v3;
      if ( (int)RtlpHpEnvCompactionSchedule(*(_QWORD **)((*(_QWORD *)(a1 + 8) ^ a1) + 0x38)) < 0 )
        return 1;
      v13 = v11 < v10;
      v14 = v11 == v10;
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 80) >> 7;
      if ( v15 <= 8 )
        v15 = 8LL;
      v16 = *(_QWORD *)(a1 + 88) + v4;
      v13 = v16 < v15;
      v14 = v16 == v15;
    }
    LOBYTE(v3) = !v13 && !v14;
    return v3;
  }
  return 0LL;
}
