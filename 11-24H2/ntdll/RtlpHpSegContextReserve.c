/*
 * XREFs of RtlpHpSegContextReserve @ 0x18009B5A0
 * Callers:
 *     RtlpHpHeapCreate @ 0x180026120 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpSegFreeRangeInsert @ 0x180069560 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegSegmentInitialize @ 0x18009B2B0 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegHeapAddSegment @ 0x18009B384 (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegSegmentAllocate @ 0x18009BC50 (RtlpHpSegSegmentAllocate.c)
 */

__int64 __fastcall RtlpHpSegContextReserve(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v5; // r15d
  unsigned __int64 v6; // rbp
  unsigned int v7; // ebx
  unsigned int v9; // r12d
  __int64 v10; // rax
  unsigned __int64 v11; // r14

  v3 = (unsigned __int64)(a3 + 4095) >> 12;
  v5 = (256 - (unsigned __int8)a1[10]) << a1[9];
  v6 = ((unsigned __int64)(unsigned int)-*(_DWORD *)a1 + a2 - 1) / (unsigned int)-*(_DWORD *)a1;
  v7 = 0;
  while ( v6 )
  {
    v9 = v3;
    if ( v3 > v5 )
      v9 = v5;
    v3 = (v3 - v5) & -(__int64)(v5 < v3);
    v10 = RtlpHpSegSegmentAllocate(a1, v9, 0LL);
    v11 = v10;
    if ( !v10 )
      return (unsigned int)-1073741670;
    RtlpHpSegSegmentInitialize(a1, v10, v9);
    RtlpHpSegFreeRangeInsert((__int64)a1, v11 + 32LL * (unsigned __int8)a1[10], 1);
    RtlpHpSegHeapAddSegment((__int64)a1, v11);
    --v6;
  }
  return v7;
}
