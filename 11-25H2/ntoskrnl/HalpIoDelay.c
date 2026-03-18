/*
 * XREFs of HalpIoDelay @ 0x14069A890
 * Callers:
 *     HalMakeBeep @ 0x140541690 (HalMakeBeep.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x140541758 (WRITE_PORT_USHORT_PAIR.c)
 *     HalpECmosReadByte @ 0x14054FE90 (HalpECmosReadByte.c)
 *     HalpECmosWriteByte @ 0x14054FED0 (HalpECmosWriteByte.c)
 *     HalpPicSetLineState @ 0x140566AA0 (HalpPicSetLineState.c)
 *     HalpPicWriteEndOfInterrupt @ 0x140566BA0 (HalpPicWriteEndOfInterrupt.c)
 *     READ_PORT_USHORT_PAIR @ 0x140566BCC (READ_PORT_USHORT_PAIR.c)
 *     HalpRestoreLegacyDmaControllerState @ 0x140B3E858 (HalpRestoreLegacyDmaControllerState.c)
 * Callees:
 *     <none>
 */

void HalpIoDelay()
{
  ;
}
