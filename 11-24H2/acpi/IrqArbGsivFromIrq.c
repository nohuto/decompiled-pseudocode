/*
 * XREFs of IrqArbGsivFromIrq @ 0x1400B3244
 * Callers:
 *     IrqArbAddAllocation @ 0x1400A9380 (IrqArbAddAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1400A9C20 (IrqArbBacktrackAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1400A9EA4 (IrqArbUpdateInterruptProperties.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1400AA210 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqTransGetInterruptVector @ 0x1400AA520 (IrqTransGetInterruptVector.c)
 *     IrqTranslateResources @ 0x1400B13D0 (IrqTranslateResources.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1400B170C (IrqArbpUnreferenceArbitrationList.c)
 *     IcCopyInputStateToDeviceState @ 0x1400B2C30 (IcCopyInputStateToDeviceState.c)
 *     IrqArbpSetDeviceProperties @ 0x1400B2FA8 (IrqArbpSetDeviceProperties.c)
 *     IrqArbpFindSuitableRangePci @ 0x1400BF404 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqArbGsivFromIrq(unsigned __int64 a1)
{
  if ( a1 >= 0x10 )
    return (unsigned int)a1;
  else
    return *((unsigned int *)&IsaVectorOverrides + 2 * (unsigned __int8)a1);
}
