/*
 * XREFs of ACPIFlushPowerQueueCallback @ 0x14005A900
 * Callers:
 *     <none>
 * Callees:
 *     AMLIRestartContext @ 0x14004B0FC (AMLIRestartContext.c)
 */

__int64 __fastcall ACPIFlushPowerQueueCallback(__int64 a1, __int64 a2)
{
  return AMLIRestartContext(a2);
}
