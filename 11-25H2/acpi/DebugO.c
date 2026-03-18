/*
 * XREFs of DebugO @ 0x14006DFE0
 * Callers:
 *     <none>
 * Callees:
 *     DebugOutPort @ 0x14006E040 (DebugOutPort.c)
 */

__int64 __fastcall DebugO(__int64 a1, __int64 a2)
{
  return DebugOutPort(a2, 1LL);
}
