/*
 * XREFs of HalpPicWriteEndOfInterrupt @ 0x140569770
 * Callers:
 *     <none>
 * Callees:
 *     HalpIoDelay @ 0x1406A5AC0 (HalpIoDelay.c)
 */

__int64 HalpPicWriteEndOfInterrupt()
{
  __outbyte(0xA0u, 0x20u);
  __outbyte(0x20u, 0x20u);
  __inbyte(0x20u);
  return HalpIoDelay();
}
