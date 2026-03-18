/*
 * XREFs of MiUpdateProtectionMask @ 0x14021BFAC
 * Callers:
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MiMakeProtoReadOnly @ 0x1404631B4 (MiMakeProtoReadOnly.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiHugePageOperation @ 0x140685BC0 (MiHugePageOperation.c)
 *     MiUseProcessorHugeMappingAtDpc @ 0x140685FC4 (MiUseProcessorHugeMappingAtDpc.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x140693034 (MiAllocateZeroCalibrationBuffer.c)
 *     MiAllocateFastAwePages @ 0x1407F833C (MiAllocateFastAwePages.c)
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
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
