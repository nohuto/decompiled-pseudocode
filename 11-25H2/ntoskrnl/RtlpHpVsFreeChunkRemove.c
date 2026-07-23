/*
 * XREFs of RtlpHpVsFreeChunkRemove @ 0x1402E4990
 * Callers:
 *     RtlpHpVsSlotCompactChunks @ 0x1404F021C (RtlpHpVsSlotCompactChunks.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 */

unsigned __int64 __fastcall RtlpHpVsFreeChunkRemove(__int64 a1, _RTL_RB_TREE *a2, int a3, __int64 a4)
{
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int64 result; // rax
  int v10; // edx

  RtlRbRemoveNode(a2 + 1, (PRTL_BALANCED_NODE)(a4 + 8));
  v7 = *(__int16 *)(a1 + 6);
  v8 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)a4 ^ *(_DWORD *)a4) >> 16));
  result = (unsigned __int64)(v8 + 4095) >> 12;
  v10 = result
      + (unsigned __int16)(RtlpHpHeapGlobals ^ a4 ^ *(_WORD *)a4)
      - (((((_DWORD)a4 - a3 + 4127) & 0xFFFFF000) < (((_DWORD)a4
                                                    + 16
                                                    * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)a4 ^ *(_DWORD *)a4) >> 16))
                                                    - a3) & 0xFFFFF000)
        ? (((_DWORD)a4 + 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)a4 ^ *(_DWORD *)a4) >> 16)) - a3) & 0xFFFFF000)
        - (((_DWORD)a4 - a3 + 4127) & 0xFFFFF000)
        : 0) >> 12)
      - ((v8 + (unsigned __int64)(a4 & 0xFFF) + 4095) >> 12);
  if ( (_WORD)v7 )
    _InterlockedAdd64((volatile signed __int64 *)(v7 + a1 + 32), v10);
  else
    *(_QWORD *)(a1 + 88) += v10;
  return result;
}
