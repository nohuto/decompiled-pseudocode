/*
 * XREFs of KiQuerySubNodeActiveAffinity @ 0x140267750
 * Callers:
 *     KeQueryNodeActiveAffinity @ 0x140267660 (KeQueryNodeActiveAffinity.c)
 *     MiGetClosestNodeWithProcessors @ 0x1404BA100 (MiGetClosestNodeWithProcessors.c)
 *     KeQueryNodeActiveProcessorCount @ 0x1405B6BB0 (KeQueryNodeActiveProcessorCount.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A5EA90 (KiSynchNumaCounterSetCallback.c)
 *     KiConfigureSchedulingInformation @ 0x140B46134 (KiConfigureSchedulingInformation.c)
 *     KiComputeNumaCosts @ 0x140C1681C (KiComputeNumaCosts.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiQuerySubNodeActiveAffinity(__int64 a1, __int64 a2, _WORD *a3)
{
  unsigned __int64 result; // rax

  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 128);
    result = *(unsigned __int16 *)(a1 + 136);
    *(_WORD *)(a2 + 8) = result;
  }
  if ( a3 )
  {
    result = __popcnt(*(_QWORD *)(a1 + 128));
    *a3 = result;
  }
  return result;
}
