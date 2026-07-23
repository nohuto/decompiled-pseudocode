/*
 * XREFs of RtlpHpSegReportPageRange @ 0x18011B4C0
 * Callers:
 *     RtlpHpSegWalk @ 0x18002B478 (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x18005DE50 (RtlpHpVsChunkSize.c)
 *     RtlpHpLfhSubsegmentSizeBlock @ 0x1800B68F0 (RtlpHpLfhSubsegmentSizeBlock.c)
 *     RtlpHpSegReportBusyBlock @ 0x1800EB774 (RtlpHpSegReportBusyBlock.c)
 */

__int64 __fastcall RtlpHpSegReportPageRange(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // r9
  char v6; // r10
  __int64 v7; // r8
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // eax
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a2;
  v4 = *(_QWORD *)a1;
  v7 = *a2 & *(_QWORD *)a1;
  v6 = *(_BYTE *)(a1 + 8);
  v14 = 0;
  v8 = v7 + 32 * ((unsigned __int64)(unsigned int)(v2 - v7) >> v6);
  v9 = (v8 & v4) + ((__int64)(v8 - (v8 & v4)) >> 5 << v6);
  if ( *a2 <= v9 )
  {
    v11 = ((unsigned __int64)*(unsigned __int8 *)(v8 + 31) << v6) - *(unsigned int *)(v8 + 4);
    v12 = *(_WORD *)(v8 + 8) & 1;
  }
  else
  {
    if ( (*(_BYTE *)(v8 + 24) & 0xC) == 8 )
      v10 = RtlpHpLfhSubsegmentSizeBlock(*(_QWORD *)(a1 + 24), v9, *a2, &v14);
    else
      v10 = RtlpHpVsChunkSize(*(_QWORD *)(a1 + 32), *a2, v7, &v14);
    v11 = v10;
    v12 = v14;
  }
  return RtlpHpSegReportBusyBlock(a1, (__int64)a2, v11, *(unsigned int *)(v8 + 4), v12);
}
