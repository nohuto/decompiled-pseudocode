/*
 * XREFs of HalpIoDelay @ 0x1406A6AC0
 * Callers:
 *     HalMakeBeep @ 0x140541810 (HalMakeBeep.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x1405418D8 (WRITE_PORT_USHORT_PAIR.c)
 *     HalpECmosReadByte @ 0x1405500D0 (HalpECmosReadByte.c)
 *     HalpECmosWriteByte @ 0x140550110 (HalpECmosWriteByte.c)
 *     HalpPicSetLineState @ 0x140567160 (HalpPicSetLineState.c)
 *     HalpPicWriteEndOfInterrupt @ 0x140567260 (HalpPicWriteEndOfInterrupt.c)
 *     READ_PORT_USHORT_PAIR @ 0x14056728C (READ_PORT_USHORT_PAIR.c)
 *     HalpRestoreLegacyDmaControllerState @ 0x140B508A8 (HalpRestoreLegacyDmaControllerState.c)
 * Callees:
 *     <none>
 */

void HalpIoDelay()
{
  ;
}
