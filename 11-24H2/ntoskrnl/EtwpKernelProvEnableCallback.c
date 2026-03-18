/*
 * XREFs of EtwpKernelProvEnableCallback @ 0x1407A8450
 * Callers:
 *     <none>
 * Callees:
 *     SeEtwEnableCallback @ 0x140608964 (SeEtwEnableCallback.c)
 */

void __fastcall EtwpKernelProvEnableCallback(
        __int64 SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword)
{
  SeEtwEnableCallback(SourceId, ControlCode, Level, MatchAnyKeyword);
}
