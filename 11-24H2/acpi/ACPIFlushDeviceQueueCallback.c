/*
 * XREFs of ACPIFlushDeviceQueueCallback @ 0x14005A8C0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIRestartContext @ 0x14004B0FC (AMLIRestartContext.c)
 *     ACPIFlushQueuesUnload @ 0x14005A918 (ACPIFlushQueuesUnload.c)
 */

__int64 __fastcall ACPIFlushDeviceQueueCallback(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
    return AMLIRestartContext(a2);
  result = ACPIFlushQueuesUnload(a1, a2, 2LL);
  if ( (_DWORD)result != 259 )
    return AMLIRestartContext(a2);
  return result;
}
