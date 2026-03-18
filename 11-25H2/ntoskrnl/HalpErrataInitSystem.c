/*
 * XREFs of HalpErrataInitSystem @ 0x140B3D090
 * Callers:
 *     <none>
 * Callees:
 *     HalpUsbLegacyScanBusForHandoff @ 0x14055FA2C (HalpUsbLegacyScanBusForHandoff.c)
 *     HalpErrataApplyPerProcessor @ 0x140B58CD8 (HalpErrataApplyPerProcessor.c)
 *     HalpErrataInitDiscard @ 0x140BFE2E8 (HalpErrataInitDiscard.c)
 *     HalpInitChipHacks @ 0x140C02B04 (HalpInitChipHacks.c)
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
      qword_140F8E608 = (__int64)&HalpUsbControllerList;
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
