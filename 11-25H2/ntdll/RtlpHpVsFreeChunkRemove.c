/*
 * XREFs of RtlpHpVsFreeChunkRemove @ 0x18000D7C0
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x18000E810 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsSlotCompactChunks @ 0x18011CF64 (RtlpHpVsSlotCompactChunks.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18000D9E0 (RtlRbRemoveNode.c)
 */

unsigned __int64 __fastcall RtlpHpVsFreeChunkRemove(__int64 a1, _RTL_RB_TREE *a2, int a3, __int64 a4)
{
  __int64 v7; // r9
  unsigned int v8; // edx
  __int64 v9; // r8
  unsigned int v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  unsigned __int64 result; // rax
  int v14; // ecx

  RtlRbRemoveNode(a2 + 1, (PRTL_BALANCED_NODE)(a4 + 8));
  v7 = *(__int16 *)(a1 + 6);
  v8 = (a4 - a3 + 4127) & 0xFFFFF000;
  v9 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)a4 ^ *(_DWORD *)a4) >> 16));
  v10 = (a4 + v9 - a3) & 0xFFFFF000;
  v11 = v10 - v8;
  if ( v8 >= v10 )
    v11 = 0;
  v12 = (unsigned __int16)(RtlpHpHeapGlobals ^ a4 ^ *(_DWORD *)a4)
      - (v11 >> 12)
      - ((v9 + (unsigned __int64)(a4 & 0xFFF) + 4095) >> 12);
  result = (unsigned __int64)(v9 + 4095) >> 12;
  v14 = result + v12;
  if ( (_WORD)v7 )
    _InterlockedAdd64((volatile signed __int64 *)(v7 + a1 + 32), v14);
  else
    *(_QWORD *)(a1 + 88) += v14;
  return result;
}
