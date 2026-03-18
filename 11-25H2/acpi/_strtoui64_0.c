/*
 * XREFs of _strtoui64_0 @ 0x140056779
 * Callers:
 *     ConvertToInteger @ 0x14002F7C4 (ConvertToInteger.c)
 *     DebugExpr @ 0x14006DB94 (DebugExpr.c)
 *     DebugInPort @ 0x14006DD70 (DebugInPort.c)
 *     DebugOutPort @ 0x14006E040 (DebugOutPort.c)
 *     DebugRunMethod @ 0x14006E170 (DebugRunMethod.c)
 *     IsNumber @ 0x14006E528 (IsNumber.c)
 *     DbgParseOneArg @ 0x14006FFCC (DbgParseOneArg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __cdecl strtoui64_0(const char *String, char **EndPtr, int Radix)
{
  return _strtoui64(String, EndPtr, Radix);
}
