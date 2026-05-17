/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x1800D8410
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x18000E810 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x18000F800 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsSlotAddSubsegment @ 0x18011CBEC (RtlpHpVsSlotAddSubsegment.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpHpVsFreeChunkInsert(__int64 a1, __int64 a2, __int64 a3, _WORD *a4)
{
  __int64 v5; // r10
  __int64 v7; // rdx
  unsigned int v8; // r9d
  unsigned __int64 v9; // r10
  unsigned __int64 v11; // rax
  unsigned int v12; // edx
  __int16 v13; // r10
  unsigned int v14; // eax
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // edx
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  bool v20; // al
  unsigned __int64 v21; // rax

  v5 = ((unsigned __int16)a4 & 0xFFF) + 4095LL;
  v7 = 16 * (WORD1(RtlpHpHeapGlobals) ^ ((unsigned int)a4 >> 16) ^ (unsigned __int16)a4[1]);
  v8 = ((_DWORD)a4 - a3 + 4127) & 0xFFFFF000;
  v9 = (unsigned __int64)(v7 + v5) >> 12;
  v11 = (unsigned __int64)(v7 + 4095) >> 12;
  v12 = ((_DWORD)a4 + v7 - a3) & 0xFFFFF000;
  v13 = v9 - v11;
  if ( v8 >= v12 )
  {
    v14 = 0;
    v15 = 0LL;
  }
  else
  {
    v14 = v12 - v8;
    v15 = *(_QWORD *)(a3 + 16) & (-1LL << (v8 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                 - (unsigned __int8)((unsigned __int64)(v12 - 1) >> 12)));
  }
  v16 = *(__int16 *)(a1 + 6);
  v17 = __popcnt(v15);
  v18 = v14 >> 12;
  if ( (_WORD)v16 )
    _InterlockedAdd64((volatile signed __int64 *)(v16 + a1 + 32), v17);
  else
    *(_QWORD *)(a1 + 88) += v17;
  *a4 = (unsigned __int16)a4 ^ RtlpHpHeapGlobals ^ (v13 + v18 - v17);
  v19 = *(_QWORD *)(a2 + 16);
  if ( (*(_QWORD *)(a2 + 24) & 1) != 0 )
  {
    if ( !v19 )
    {
LABEL_20:
      v20 = 0;
      return RtlRbInsertNodeEx(a2 + 16, v19, v20, (unsigned __int64)(a4 + 4));
    }
    v19 ^= a2 + 16;
  }
  v20 = 0;
  if ( v19 )
  {
    while ( 1 )
    {
      if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a4 ^ (unsigned int)a4) >= ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(v19 - 8) ^ ((_DWORD)v19 - 8)) )
      {
        v21 = *(_QWORD *)(v19 + 8);
        if ( (*(_QWORD *)(a2 + 24) & 1) != 0 )
        {
          if ( !v21 )
          {
LABEL_15:
            v20 = 1;
            return RtlRbInsertNodeEx(a2 + 16, v19, v20, (unsigned __int64)(a4 + 4));
          }
          v21 ^= v19;
        }
        if ( !v21 )
          goto LABEL_15;
      }
      else
      {
        v21 = *(_QWORD *)v19;
        if ( (*(_QWORD *)(a2 + 24) & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_20;
          v21 ^= v19;
        }
        if ( !v21 )
          goto LABEL_20;
      }
      v19 = v21;
    }
  }
  return RtlRbInsertNodeEx(a2 + 16, v19, v20, (unsigned __int64)(a4 + 4));
}
