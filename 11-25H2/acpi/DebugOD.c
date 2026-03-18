/*
 * XREFs of DebugOD @ 0x14006E000
 * Callers:
 *     <none>
 * Callees:
 *     DebugOutPort @ 0x14006E040 (DebugOutPort.c)
 */

__int64 __fastcall DebugOD(__int64 a1, __int64 a2)
{
  return DebugOutPort(a2, 4LL);
}
