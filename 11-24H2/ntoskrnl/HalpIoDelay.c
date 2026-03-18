/*
 * XREFs of HalpIoDelay @ 0x1406A5AC0
 * Callers:
 *     HalMakeBeep @ 0x140543EC0 (HalMakeBeep.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x140543F88 (WRITE_PORT_USHORT_PAIR.c)
 *     HalpECmosReadByte @ 0x140552790 (HalpECmosReadByte.c)
 *     HalpECmosWriteByte @ 0x1405527D0 (HalpECmosWriteByte.c)
 *     HalpPicSetLineState @ 0x140569670 (HalpPicSetLineState.c)
 *     HalpPicWriteEndOfInterrupt @ 0x140569770 (HalpPicWriteEndOfInterrupt.c)
 *     READ_PORT_USHORT_PAIR @ 0x14056979C (READ_PORT_USHORT_PAIR.c)
 *     HalpRestoreLegacyDmaControllerState @ 0x140B4E858 (HalpRestoreLegacyDmaControllerState.c)
 * Callees:
 *     <none>
 */

void HalpIoDelay()
{
  ;
}
