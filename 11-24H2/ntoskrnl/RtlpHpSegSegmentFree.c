/*
 * XREFs of RtlpHpSegSegmentFree @ 0x140465DF4
 * Callers:
 *     RtlpHpSegContextCompact @ 0x1402B4260 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegSegmentAllocate @ 0x1402C1ABC (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegContextCleanup @ 0x140605EEC (RtlpHpSegContextCleanup.c)
 * Callees:
 *     RtlCSparseBitmapBitsClear @ 0x1402BC9D8 (RtlCSparseBitmapBitsClear.c)
 *     RtlpHpSegMgrRelease @ 0x1402BCD10 (RtlpHpSegMgrRelease.c)
 */

__int64 __fastcall RtlpHpSegSegmentFree(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned __int64 i; // rcx
  __int64 result; // rax

  if ( a4 )
    RtlCSparseBitmapBitsClear(
      (__int64)&dword_140E68310,
      2 * ((unsigned __int64)(a2 - qword_140E68308) >> 20),
      2 * ((unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 20));
  if ( a3 == 0x7FFFFFFF )
  {
    a3 = 2;
    for ( i = 32LL * *(unsigned __int8 *)(a1 + 10) + a2; i < a2 + 0x2000; i += 32LL * *(unsigned __int8 *)(i + 31) )
      a3 += (unsigned __int16)~*(_WORD *)(i + 28);
  }
  RtlpHpSegMgrRelease(a1, a2, a3);
  _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), -(__int64)a3);
  result = *(__int16 *)(a1 + 22);
  _InterlockedAdd64(
    (volatile signed __int64 *)(result + a1),
    -(__int64)((unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 12));
  return result;
}
