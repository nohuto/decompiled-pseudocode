/*
 * XREFs of EtwpKernelProvEnableCallback @ 0x140799080
 * Callers:
 *     <none>
 * Callees:
 *     SeEtwEnableCallback @ 0x1405FC4D4 (SeEtwEnableCallback.c)
 */

void __fastcall EtwpKernelProvEnableCallback(
        __int64 SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword)
{
  SeEtwEnableCallback(SourceId, ControlCode, Level, MatchAnyKeyword);
}
