/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x140367E64
 * Callers:
 *     RtlpHpVsSlotAllocate @ 0x140367A10 (RtlpHpVsSlotAllocate.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 */

BOOLEAN __fastcall RtlpHpVsFreeChunkInsert(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int v8; // ebx
  unsigned __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned __int64 v11; // r14
  BOOLEAN v12; // r8
  unsigned int v14; // r10d
  unsigned __int64 v15; // r9
  __int64 v16; // rax
  int v17; // r9d
  unsigned int v18; // r10d
  _RTL_RB_TREE *v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax

  v6 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(a4) ^ *(unsigned __int16 *)(a4 + 2));
  v8 = (a4 - a3 + 4127) & 0xFFFFF000;
  v9 = (v6 + (unsigned __int64)(a4 & 0xFFF) + 4095) >> 12;
  v10 = (a4 + v6 - a3) & 0xFFFFF000;
  v11 = ((unsigned __int64)(16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(a4) ^ *(unsigned __int16 *)(a4 + 2))) + 4095) >> 12;
  v12 = 0;
  if ( v8 < v10 )
  {
    v14 = v10 - v8;
    v15 = *(_QWORD *)(a3 + 16) & (-1LL << (v8 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                 - (unsigned __int8)((unsigned __int64)(v10 - 1) >> 12)));
  }
  else
  {
    v14 = 0;
    v15 = 0LL;
  }
  v16 = *(__int16 *)(a1 + 6);
  v17 = __popcnt(v15);
  v18 = v14 >> 12;
  if ( (_WORD)v16 )
    _InterlockedAdd64((volatile signed __int64 *)(v16 + a1 + 32), v17);
  else
    *(_QWORD *)(a1 + 88) += v17;
  v19 = (_RTL_RB_TREE *)(a2 + 16);
  *(_WORD *)a4 = RtlpHpHeapGlobals ^ a4 ^ (v18 + v9 - v11 - v17);
  v20 = *(_QWORD *)(a2 + 16);
  if ( (*(_BYTE *)(a2 + 24) & 1) != 0 && v20 )
    v20 ^= (unsigned __int64)v19;
  if ( v20 )
  {
    while ( 1 )
    {
      if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a4 ^ (unsigned int)a4) < ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(v20 - 8) ^ ((_DWORD)v20 - 8)) )
      {
        v21 = *(_QWORD *)v20;
        if ( (*(_BYTE *)(a2 + 24) & 1) != 0 )
        {
          if ( !v21 )
            return RtlRbInsertNodeEx(v19, (PRTL_BALANCED_NODE)v20, v12, (PRTL_BALANCED_NODE)(a4 + 8));
          v21 ^= v20;
        }
        if ( !v21 )
          return RtlRbInsertNodeEx(v19, (PRTL_BALANCED_NODE)v20, v12, (PRTL_BALANCED_NODE)(a4 + 8));
      }
      else
      {
        v21 = *(_QWORD *)(v20 + 8);
        if ( (*(_BYTE *)(a2 + 24) & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_10;
          v21 ^= v20;
        }
        if ( !v21 )
        {
LABEL_10:
          v12 = 1;
          return RtlRbInsertNodeEx(v19, (PRTL_BALANCED_NODE)v20, v12, (PRTL_BALANCED_NODE)(a4 + 8));
        }
      }
      v20 = v21;
    }
  }
  return RtlRbInsertNodeEx(v19, (PRTL_BALANCED_NODE)v20, v12, (PRTL_BALANCED_NODE)(a4 + 8));
}
