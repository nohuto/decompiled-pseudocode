/*
 * XREFs of MiUpdateProtectionMask @ 0x140234CAC
 * Callers:
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiMakeProtoReadOnly @ 0x1403FDB80 (MiMakeProtoReadOnly.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiHugePageOperation @ 0x14067A330 (MiHugePageOperation.c)
 *     MiUseProcessorHugeMappingAtDpc @ 0x14067A734 (MiUseProcessorHugeMappingAtDpc.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x140687BD4 (MiAllocateZeroCalibrationBuffer.c)
 *     MiAllocateFastAwePages @ 0x1407E84AC (MiAllocateFastAwePages.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408F8DEC (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateProtectionMask(unsigned int a1, int a2)
{
  if ( a2 != 1 )
  {
    if ( a2 )
    {
      if ( a2 == 2 )
        a1 |= 0x18u;
    }
    else
    {
      a1 |= 8u;
    }
  }
  return a1;
}
