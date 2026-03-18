/*
 * XREFs of KiQuerySubNodeActiveAffinity @ 0x1403A8720
 * Callers:
 *     MiGetClosestNodeWithProcessors @ 0x1403A85A4 (MiGetClosestNodeWithProcessors.c)
 *     KeQueryNodeActiveAffinity @ 0x1403A8640 (KeQueryNodeActiveAffinity.c)
 *     KeQueryNodeActiveProcessorCount @ 0x1405BAA40 (KeQueryNodeActiveProcessorCount.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A60920 (KiSynchNumaCounterSetCallback.c)
 *     KiConfigureSchedulingInformation @ 0x140B560D8 (KiConfigureSchedulingInformation.c)
 *     KiComputeNumaCosts @ 0x140C278AC (KiComputeNumaCosts.c)
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
