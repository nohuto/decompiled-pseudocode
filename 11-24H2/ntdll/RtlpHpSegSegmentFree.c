/*
 * XREFs of RtlpHpSegSegmentFree @ 0x180026FA4
 * Callers:
 *     RtlpHpSegContextCleanup @ 0x180026F44 (RtlpHpSegContextCleanup.c)
 *     RtlpHpSegContextCompact @ 0x180067510 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegSegmentAllocate @ 0x18009BC50 (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     RtlCSparseBitmapBitsClear @ 0x18006B134 (RtlCSparseBitmapBitsClear.c)
 *     RtlpHpSegMgrRelease @ 0x18006B47C (RtlpHpSegMgrRelease.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x18006B624 (RtlpHeapLogRangeRelease.c)
 */

int __fastcall RtlpHpSegSegmentFree(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rbp
  unsigned __int64 i; // rcx
  struct _PEB *v9; // rax
  __int64 v10; // rcx

  v5 = (unsigned int)-*(_DWORD *)a1;
  if ( a4 )
    RtlCSparseBitmapBitsClear(
      &BaseAddress,
      2 * ((unsigned __int64)(a2 - qword_1801CD918) >> 20),
      2 * ((unsigned __int64)(unsigned int)v5 >> 20));
  if ( a3 == 0x7FFFFFFF )
  {
    a3 = 2;
    for ( i = 32LL * *(unsigned __int8 *)(a1 + 10) + a2; i < a2 + 0x2000; i += 32LL * *(unsigned __int8 *)(i + 31) )
      a3 += (unsigned __int16)~*(_WORD *)(i + 28);
  }
  RtlpHpSegMgrRelease(a1);
  _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), -(__int64)a3);
  _InterlockedAdd64(
    (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1),
    -(__int64)((unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 12));
  LODWORD(v9) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v9 )
  {
    v9 = NtCurrentPeb();
    v10 = (__int64)v9->SharedData + 558;
  }
  else
  {
    v10 = 2147353480LL;
  }
  if ( *(_BYTE *)v10 )
    LODWORD(v9) = RtlpHeapLogRangeRelease(a1, a2, v5);
  return (int)v9;
}
