/*
 * XREFs of PfpPowerActionSleepSystemPhaseCallback @ 0x140B4AEC0
 * Callers:
 *     <none>
 * Callees:
 *     PfpPartitionToParent @ 0x1404BDA40 (PfpPartitionToParent.c)
 *     PfTSetTraceWorkerPriority @ 0x1405C8110 (PfTSetTraceWorkerPriority.c)
 *     PfGenerateTrace @ 0x14073A35C (PfGenerateTrace.c)
 *     MmPerformMemoryListCommand @ 0x140B5EAC0 (MmPerformMemoryListCommand.c)
 */

__int64 __fastcall PfpPowerActionSleepSystemPhaseCallback(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  signed int v4; // edi
  unsigned int Trace; // esi

  *a2 = 1;
  v3 = PfpPartitionToParent(a1);
  MmPerformMemoryListCommand(1LL, v3);
  v4 = PfTSetTraceWorkerPriority(a1, 0x10u);
  Trace = PfGenerateTrace(a1, 1);
  if ( v4 <= 31 )
    PfTSetTraceWorkerPriority(a1, v4);
  return Trace;
}
