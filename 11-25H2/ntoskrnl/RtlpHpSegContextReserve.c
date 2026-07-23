/*
 * XREFs of RtlpHpSegContextReserve @ 0x1405F9D28
 * Callers:
 *     RtlpHpHeapCreate @ 0x1405F89CC (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpSegFreeRangeInsert @ 0x1402E2180 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegHeapAddSegment @ 0x1402F78EC (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegSegmentAllocate @ 0x1402F8E24 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x1402F971C (RtlpHpSegSegmentInitialize.c)
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
    v9 = RtlpHpSegSegmentAllocate((__int64)a1, v8);
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
