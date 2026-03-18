/*
 * XREFs of ?CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z @ 0x1400EDCC0
 * Callers:
 *     ?CommitPosition@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@W4_CommitMousePosAndMoveResult@@@Z @ 0x1400EDC14 (-CommitPosition@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@W4_CommitMousePosAndMoveResult@@@Z.c)
 *     ?CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z @ 0x1400EDCC0 (-CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z.c)
 * Callees:
 *     ?CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z @ 0x1400EDCC0 (-CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z.c)
 */

const char *__fastcall InputTraceLogging::CommitMousePosAndMoveResultToString(int a1)
{
  switch ( a1 )
  {
    case 0:
      return "InputEaten";
    case 1:
      return "PosUpdated";
    case 2:
      return "CursorClippedSystem";
    case 4:
      return "CursorClippedApp";
    case 8:
      return "RawInputHandled";
  }
  if ( (a1 & 1) != 0 )
    return (const char *)InputTraceLogging::CommitMousePosAndMoveResultToString(a1 & 0xFFFFFFFE);
  return "UNKNOWN";
}
