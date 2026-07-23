/*
 * XREFs of RtlpHpMetadataCommit @ 0x1406028B0
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x1404A2A8C (RtlpHpHeapExtendContext.c)
 *     RtlpHpHeapAllocate @ 0x140602108 (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14035C3DC (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegPageRangeCommit @ 0x14035F6F0 (RtlpHpSegPageRangeCommit.c)
 */

__int64 __fastcall RtlpHpMetadataCommit(__int64 a1, int a2, unsigned __int64 a3, _QWORD *a4, int a5)
{
  __int64 *v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // r10
  __int64 v12; // r8
  char v13; // cl
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbp
  int v17; // r9d

  v8 = &qword_140E6BD98[2 * (unsigned int)dword_14001EB70[(unsigned __int8)BYTE1(*a4)]];
  if ( (_WORD)a1 )
  {
    v10 = 0;
  }
  else
  {
    v9 = RtlCSparseBitmapBitmaskRead((__int64)&dword_140E68510, 2 * ((unsigned __int64)(a1 - qword_140E68508) >> 20));
    if ( v9 )
      v10 = v9 - 1;
    else
      v10 = 2;
  }
  v11 = 192LL * v10 + *v8 + 320;
  v12 = *(_QWORD *)v11 & a1;
  if ( (RtlpHpHeapGlobals ^ *(_QWORD *)(v12 + 0x10) ^ v12) != v11
    || (v13 = *(_BYTE *)(v11 + 8),
        v14 = v12 + 32 * ((unsigned __int64)(unsigned int)(a1 - v12) >> v13),
        v15 = -32LL * *(unsigned __int8 *)(v14 + 26) + v14,
        (*(_BYTE *)(v15 + 24) & 3) != 3)
    || v12 + ((v15 - v12) >> 5 << v13) != a1 && (*(_BYTE *)(v15 + 24) & 0xCu) < 8 )
  {
    v15 = 0LL;
  }
  v16 = a3 >> 12;
  v17 = -(int)v16;
  if ( a5 )
    v17 = v16;
  return RtlpHpSegPageRangeCommit(v11, v15, (unsigned int)(a2 - a1) >> 12, v17, 0, 0LL);
}
