/*
 * XREFs of RtlpHpVsSlotAddSubsegment @ 0x18011CBEC
 * Callers:
 *     RtlpHpVsSlotAllocate @ 0x18011C9B8 (RtlpHpVsSlotAllocate.c)
 * Callees:
 *     RtlpHpVsFreeChunkInsert @ 0x1800D8410 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkAlignSplit @ 0x180117CF8 (RtlpHpVsChunkAlignSplit.c)
 */

BOOLEAN __fastcall RtlpHpVsSlotAddSubsegment(__int64 a1, _RTL_RB_TREE *a2, __int64 a3)
{
  unsigned __int64 v6; // r8
  $4E31A27B411361931362DDB2DB937684 *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rax

  *(_WORD *)(a3 + 34) = ((unsigned __int64)a2 - a1) >> 6;
  v6 = (unsigned __int64)&a2[2];
  v7 = &a2[2].8;
  v8 = (unsigned __int64)v7->Min ^ v6;
  if ( (*(_QWORD *)v8 ^ v8) != v6 )
    __fastfail(3u);
  v9 = a3 ^ v6;
  *(_QWORD *)a3 = v9;
  *(_QWORD *)(a3 + 8) = a3 ^ v8;
  *(_QWORD *)v8 = a3 ^ v8;
  v7->Min = (_RTL_BALANCED_NODE *)v9;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((a3 + 80) & 0xFFF) != 0 )
  {
    v10 = RtlpHpVsChunkAlignSplit(v8, a3, a3 + 48);
    if ( v10 )
      RtlpHpVsFreeChunkInsert(a1, a2, a3, v10);
  }
  return RtlpHpVsFreeChunkInsert(a1, a2, a3, a3 + 48);
}
