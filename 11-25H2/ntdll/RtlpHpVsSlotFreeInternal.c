/*
 * XREFs of RtlpHpVsSlotFreeInternal @ 0x18011CDA8
 * Callers:
 *     RtlpHpVsSlotFreeList @ 0x18011CCB0 (RtlpHpVsSlotFreeList.c)
 * Callees:
 *     RtlpHpVsChunkFree @ 0x18000F800 (RtlpHpVsChunkFree.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVsSlotFreeInternal(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r11
  char v14; // al
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  int v20; // ecx
  unsigned __int64 v21; // r8
  int v22; // ecx

  v4 = *(_QWORD *)a3;
  v7 = HIDWORD(a3);
  v8 = RtlpHpHeapGlobals ^ *(_QWORD *)a3;
  v9 = 0LL;
  v10 = HIDWORD(v8);
  v11 = a3 ^ v8;
  v12 = a3;
  if ( ((HIDWORD(a3) ^ (unsigned int)v10) & 0xFF0000) != 0 )
  {
    v14 = a3;
LABEL_8:
    v20 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(a3 + 8) ^ v14);
    goto LABEL_10;
  }
  v15 = HIDWORD(v11);
  if ( (_WORD)v15 )
  {
    a3 -= 16LL * (unsigned __int16)v15;
    v16 = RtlpHpHeapGlobals ^ *(_QWORD *)a3;
    v17 = HIDWORD(a3) ^ HIDWORD(v16);
    v18 = a3 ^ v16;
    if ( (v17 & 0xFF0000) != 0 )
    {
LABEL_7:
      v14 = a3;
      goto LABEL_8;
    }
    v19 = HIDWORD(v18);
    if ( (_WORD)v19 )
    {
      a3 -= 16LL * (unsigned __int16)v19;
      goto LABEL_7;
    }
  }
  v20 = 0;
LABEL_10:
  v21 = (a3 - (unsigned int)(v20 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v21 + 32) ^ *(_WORD *)(v21 + 36)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    v22 = 18;
  }
  else
  {
    if ( (((unsigned int)v7 ^ HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v4)) & 0xFF0000) != 0 )
      return RtlpHpVsChunkFree(a1, a2, v21, v12, 0, a4);
    v21 = v12;
    v22 = 8;
  }
  RtlpLogHeapFailure(v22, *(_QWORD *)(a1 + 8) ^ a1, v21, 0LL, 0LL, 0LL);
  return v9;
}
