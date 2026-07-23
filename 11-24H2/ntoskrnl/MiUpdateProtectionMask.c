/*
 * XREFs of MiUpdateProtectionMask @ 0x140248CFC
 * Callers:
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiMakeProtoReadOnly @ 0x140484268 (MiMakeProtoReadOnly.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiHugePageOperation @ 0x140686CF0 (MiHugePageOperation.c)
 *     MiUseProcessorHugeMappingAtDpc @ 0x1406870F4 (MiUseProcessorHugeMappingAtDpc.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x140694104 (MiAllocateZeroCalibrationBuffer.c)
 *     MiAllocateFastAwePages @ 0x1407F8AAC (MiAllocateFastAwePages.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
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
