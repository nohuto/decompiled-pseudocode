/*
 * XREFs of RtlpHpVsSlotAddSubsegment @ 0x18011CBEC
 * Callers:
 *     RtlpHpVsSlotAllocate @ 0x18011C9B8 (RtlpHpVsSlotAllocate.c)
 * Callees:
 *     RtlpHpVsFreeChunkInsert @ 0x1800D8410 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkAlignSplit @ 0x180117CF8 (RtlpHpVsChunkAlignSplit.c)
 */

char __fastcall RtlpHpVsSlotAddSubsegment(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _WORD *v10; // rax

  *(_WORD *)(a3 + 34) = (unsigned __int64)(a2 - a1) >> 6;
  v6 = a2 + 32;
  v7 = (__int64 *)(a2 + 40);
  v8 = *v7 ^ v6;
  if ( (*(_QWORD *)v8 ^ v8) != v6 )
    __fastfail(3u);
  v9 = a3 ^ v6;
  *(_QWORD *)a3 = v9;
  *(_QWORD *)(a3 + 8) = a3 ^ v8;
  *(_QWORD *)v8 = a3 ^ v8;
  *v7 = v9;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((a3 + 80) & 0xFFF) != 0 )
  {
    v10 = (_WORD *)RtlpHpVsChunkAlignSplit(v8, a3, a3 + 48);
    if ( v10 )
      RtlpHpVsFreeChunkInsert(a1, a2, a3, v10);
  }
  return RtlpHpVsFreeChunkInsert(a1, a2, a3, (_WORD *)(a3 + 48));
}
