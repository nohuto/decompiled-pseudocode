/*
 * XREFs of WheapGenerateETWEvents @ 0x1404746BC
 * Callers:
 *     WheaReportHwError @ 0x140420030 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x140474590 (WheapProcessWorkQueueItem.c)
 *     WheapProcessWaitingETWEvents @ 0x1407C8B80 (WheapProcessWaitingETWEvents.c)
 * Callees:
 *     WheaIsCriticalState @ 0x140474710 (WheaIsCriticalState.c)
 *     WheapCompressErrorRecord @ 0x140474738 (WheapCompressErrorRecord.c)
 *     WheapGenerateETWErrorRecord @ 0x14047489C (WheapGenerateETWErrorRecord.c)
 *     WheapGenerateETWErrorRecordLarge @ 0x14065CA60 (WheapGenerateETWErrorRecordLarge.c)
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
