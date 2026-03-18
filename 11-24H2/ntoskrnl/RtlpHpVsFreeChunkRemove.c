/*
 * XREFs of RtlpHpVsFreeChunkRemove @ 0x1402B4088
 * Callers:
 *     RtlpHpVsSlotCompactChunks @ 0x1402B3AF0 (RtlpHpVsSlotCompactChunks.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 */

unsigned __int64 __fastcall RtlpHpVsFreeChunkRemove(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int64 result; // rax
  int v10; // edx

  RtlRbRemoveNode(a2 + 16, a4 + 2);
  v7 = *(__int16 *)(a1 + 6);
  v8 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)a4 ^ *a4) >> 16));
  result = (unsigned __int64)(v8 + 4095) >> 12;
  v10 = result
      + (unsigned __int16)(RtlpHpHeapGlobals ^ (unsigned __int16)a4 ^ *(_WORD *)a4)
      - (((((_DWORD)a4 - a3 + 4127) & 0xFFFFF000) < (((_DWORD)a4
                                                    + 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)a4 ^ *a4) >> 16))
                                                    - a3) & 0xFFFFF000)
        ? (((_DWORD)a4 + 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)a4 ^ *a4) >> 16)) - a3) & 0xFFFFF000)
        - (((_DWORD)a4 - a3 + 4127) & 0xFFFFF000)
        : 0) >> 12)
      - ((v8 + (unsigned __int64)((unsigned __int16)a4 & 0xFFF) + 4095) >> 12);
  if ( (_WORD)v7 )
    _InterlockedAdd64((volatile signed __int64 *)(v7 + a1 + 32), v10);
  else
    *(_QWORD *)(a1 + 88) += v10;
  return result;
}
