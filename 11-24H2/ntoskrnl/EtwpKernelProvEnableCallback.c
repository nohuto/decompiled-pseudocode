/*
 * XREFs of EtwpKernelProvEnableCallback @ 0x1407A8590
 * Callers:
 *     <none>
 * Callees:
 *     SeEtwEnableCallback @ 0x1406060B8 (SeEtwEnableCallback.c)
 */

void __fastcall EtwpKernelProvEnableCallback(
        __int64 SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword)
{
  SeEtwEnableCallback(SourceId, ControlCode, Level, MatchAnyKeyword);
}
