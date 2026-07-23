/*
 * XREFs of KiUnshadowProcessorAllocation @ 0x140B5CD14
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     MmDeleteShadowMapping @ 0x1407F7110 (MmDeleteShadowMapping.c)
 */

_QWORD *__fastcall KiUnshadowProcessorAllocation(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *result; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rsi

  if ( KiKvaShadow )
  {
    MmDeleteShadowMapping(*(_QWORD *)(a2 + 88) - 12208LL, 0x5000uLL);
    result = MmDeleteShadowMapping(a1 + 44672, 0x1000uLL);
    if ( (_BYTE)KiKernelCetEnabled )
    {
      v6 = a3 + 24;
      v7 = 4LL;
      do
      {
        MmDeleteShadowMapping(*v6++ - 0x2000LL, 0x1000uLL);
        --v7;
      }
      while ( v7 );
      MmDeleteShadowMapping(a3[28], 0x1000uLL);
      return MmDeleteShadowMapping(a3[17] - 0x2000LL, 0x1000uLL);
    }
  }
  return result;
}
