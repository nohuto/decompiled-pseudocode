/*
 * XREFs of RtlpHpSegContextReserve @ 0x1406036A8
 * Callers:
 *     RtlpHpHeapCreate @ 0x14060234C (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpSegSegmentInitialize @ 0x14035D894 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegSegmentAllocate @ 0x14035E15C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegFreeRangeInsert @ 0x140364FD0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegHeapAddSegment @ 0x140481480 (RtlpHpSegHeapAddSegment.c)
 */

__int64 __fastcall RtlpHpSegContextReserve(_RTL_RB_TREE *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v5; // r15d
  unsigned __int64 v6; // rbp
  unsigned int v7; // ebx
  unsigned int v8; // r12d
  __int64 v9; // rax
  unsigned __int64 v10; // r14

  v3 = (unsigned __int64)(a3 + 4095) >> 12;
  v5 = (256 - BYTE2(a1->Min)) << *((_BYTE *)&a1->0 + 1);
  v6 = ((unsigned __int64)(unsigned int)-LODWORD(a1->Root) + a2 - 1) / (unsigned int)-LODWORD(a1->Root);
  v7 = 0;
  while ( v6 )
  {
    v8 = v3;
    if ( v3 > v5 )
      v8 = v5;
    v3 = (v3 - v5) & -(__int64)(v5 < v3);
    v9 = RtlpHpSegSegmentAllocate((__int64)a1, v8, 0);
    v10 = v9;
    if ( !v9 )
      return (unsigned int)-1073741670;
    RtlpHpSegSegmentInitialize(a1, v9, v8);
    RtlpHpSegFreeRangeInsert(a1, v10 + 32LL * BYTE2(a1->Min), 1);
    RtlpHpSegHeapAddSegment((__int64)a1, v10);
    --v6;
  }
  return v7;
}
