/*
 * XREFs of RtlpHpSegSegmentFree @ 0x180090324
 * Callers:
 *     RtlpHpSegContextCompact @ 0x180051930 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegContextCleanup @ 0x1800902C4 (RtlpHpSegContextCleanup.c)
 *     RtlpHpSegSegmentAllocate @ 0x1800910C4 (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     RtlCSparseBitmapBitsClear @ 0x180055554 (RtlCSparseBitmapBitsClear.c)
 *     RtlpHpSegMgrRelease @ 0x18005589C (RtlpHpSegMgrRelease.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x180055A44 (RtlpHeapLogRangeRelease.c)
 */

unsigned int *__fastcall RtlpHpSegSegmentFree(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rbp
  unsigned __int64 i; // rcx
  unsigned int *result; // rax
  __int64 v10; // rcx

  v5 = (unsigned int)-*(_DWORD *)a1;
  if ( a4 )
    RtlCSparseBitmapBitsClear(
      (__int64)&unk_1801CE930,
      2 * ((a2 - qword_1801CE928) >> 20),
      2 * ((unsigned __int64)(unsigned int)v5 >> 20));
  if ( a3 == 0x7FFFFFFF )
  {
    a3 = 2;
    for ( i = 32LL * *(unsigned __int8 *)(a1 + 10) + a2; i < a2 + 0x2000; i += 32LL * *(unsigned __int8 *)(i + 31) )
      a3 += (unsigned __int16)~*(_WORD *)(i + 28);
  }
  RtlpHpSegMgrRelease((int *)a1, a2, a3);
  _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), -(__int64)a3);
  _InterlockedAdd64(
    (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1),
    -(__int64)((unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 12));
  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v10 = *((_QWORD *)result + 18) + 558LL;
  }
  else
  {
    v10 = 2147353480LL;
  }
  if ( *(_BYTE *)v10 )
    return (unsigned int *)RtlpHeapLogRangeRelease(a1, a2, v5);
  return result;
}
