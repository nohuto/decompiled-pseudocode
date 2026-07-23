/*
 * XREFs of KiQuerySubNodeActiveAffinity @ 0x14026FE00
 * Callers:
 *     MiGetClosestNodeWithProcessors @ 0x14026FC80 (MiGetClosestNodeWithProcessors.c)
 *     KeQueryNodeActiveAffinity @ 0x14026FD20 (KeQueryNodeActiveAffinity.c)
 *     KeQueryNodeActiveProcessorCount @ 0x1405B8070 (KeQueryNodeActiveProcessorCount.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A58E70 (KiSynchNumaCounterSetCallback.c)
 *     KiConfigureSchedulingInformation @ 0x140B58128 (KiConfigureSchedulingInformation.c)
 *     KiComputeNumaCosts @ 0x140C29888 (KiComputeNumaCosts.c)
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
