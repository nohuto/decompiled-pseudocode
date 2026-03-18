/*
 * XREFs of WheapGenerateETWEvents @ 0x1404780BC
 * Callers:
 *     WheaReportHwError @ 0x14042E300 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x140477F90 (WheapProcessWorkQueueItem.c)
 *     WheapProcessWaitingETWEvents @ 0x1407C8690 (WheapProcessWaitingETWEvents.c)
 * Callees:
 *     WheaIsCriticalState @ 0x140478110 (WheaIsCriticalState.c)
 *     WheapCompressErrorRecord @ 0x140478138 (WheapCompressErrorRecord.c)
 *     WheapGenerateETWErrorRecord @ 0x14047829C (WheapGenerateETWErrorRecord.c)
 *     WheapGenerateETWErrorRecordLarge @ 0x14065E290 (WheapGenerateETWErrorRecordLarge.c)
 */

__int64 __fastcall WheapGenerateETWEvents(__int64 a1)
{
  __int64 result; // rax

  result = WheaIsCriticalState();
  if ( !(_BYTE)result && (*(_DWORD *)(a1 + 104) & 0x100) == 0 )
  {
    WheapCompressErrorRecord(3LL, a1);
    if ( *(_DWORD *)(a1 + 20) > 0xEFFBu )
      return WheapGenerateETWErrorRecordLarge(a1);
    else
      return WheapGenerateETWErrorRecord(a1);
  }
  return result;
}
