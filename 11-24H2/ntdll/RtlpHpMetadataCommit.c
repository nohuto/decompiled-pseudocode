/*
 * XREFs of RtlpHpMetadataCommit @ 0x1800EF3BC
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x1800EEEC0 (RtlpHpHeapExtendContext.c)
 *     RtlpHpHeapAllocate @ 0x1800EF054 (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x180059400 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegPageRangeCommit @ 0x18006C560 (RtlpHpSegPageRangeCommit.c)
 */

__int64 __fastcall RtlpHpMetadataCommit(__int64 a1, int a2, unsigned __int64 a3, _QWORD *a4, int a5)
{
  __int64 *v8; // rdi
  int v9; // eax
  __int64 v10; // r10
  __int64 v11; // r8
  char v12; // cl
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v15; // rbp
  int v16; // r9d
  __int64 v18; // rax

  v8 = &qword_1801D11A8[2 * (unsigned int)dword_18017E8C8[(unsigned __int8)BYTE1(*a4)]];
  if ( (_WORD)a1 )
  {
    v9 = 0;
  }
  else
  {
    v18 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((unsigned __int64)(a1 - qword_1801CD918) >> 20));
    if ( v18 )
      v9 = v18 - 1;
    else
      v9 = 2;
  }
  v10 = 192LL * v9 + *v8 + 320;
  v11 = *(_QWORD *)v10 & a1;
  if ( (RtlpHpHeapGlobals ^ *(_QWORD *)(v11 + 0x10) ^ v11) != v10
    || (v12 = *(_BYTE *)(v10 + 8),
        v13 = v11 + 32 * ((unsigned __int64)(unsigned int)(a1 - v11) >> v12),
        v14 = -32LL * *(unsigned __int8 *)(v13 + 26) + v13,
        (*(_BYTE *)(v14 + 24) & 3) != 3)
    || v11 + ((v14 - v11) >> 5 << v12) != a1 && (*(_BYTE *)(v14 + 24) & 0xCu) < 8 )
  {
    v14 = 0LL;
  }
  v15 = a3 >> 12;
  v16 = -(int)v15;
  if ( a5 )
    v16 = v15;
  return RtlpHpSegPageRangeCommit(v10, v14, (unsigned int)(a2 - a1) >> 12, v16, 0, 0LL);
}
