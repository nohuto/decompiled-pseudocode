/*
 * XREFs of HalpErrataInitSystem @ 0x140B4D090
 * Callers:
 *     <none>
 * Callees:
 *     HalpUsbLegacyScanBusForHandoff @ 0x14056232C (HalpUsbLegacyScanBusForHandoff.c)
 *     HalpErrataApplyPerProcessor @ 0x140B68B08 (HalpErrataApplyPerProcessor.c)
 *     HalpErrataInitDiscard @ 0x140C0F2E8 (HalpErrataInitDiscard.c)
 *     HalpInitChipHacks @ 0x140C13B94 (HalpInitChipHacks.c)
 */

__int64 __fastcall HalpErrataInitSystem(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  switch ( a1 )
  {
    case 2:
      HalpMaxPciBus = *(_DWORD *)(*(_QWORD *)(a3 + 240) + 3488LL);
      return v3;
    case 7:
      HalpErrataInitDiscard();
      return v3;
    case 17:
      qword_140F8EDA8 = (__int64)&HalpUsbControllerList;
      HalpUsbControllerList = (__int64)&HalpUsbControllerList;
      HalpUsbLegacyScanBusForHandoff();
      goto LABEL_8;
    case 19:
LABEL_8:
      HalpErrataApplyPerProcessor();
      return v3;
    case 27:
      return (unsigned int)HalpInitChipHacks();
  }
  return v3;
}
