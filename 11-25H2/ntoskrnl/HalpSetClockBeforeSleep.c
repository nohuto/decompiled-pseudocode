/*
 * XREFs of HalpSetClockBeforeSleep @ 0x14042D448
 * Callers:
 *     HalpDpPreReplace @ 0x140B3FB3C (HalpDpPreReplace.c)
 *     HalpAcpiPreSleep @ 0x140B5D4E8 (HalpAcpiPreSleep.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x14042DD34 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x14042DE18 (HalpAcquireCmosSpinLock.c)
 */

__int64 HalpSetClockBeforeSleep()
{
  unsigned __int8 v0; // al
  unsigned __int8 v1; // al
  __int64 v2; // rcx

  HalpAcquireCmosSpinLock();
  __outbyte(0x70u, 0xAu);
  v0 = __inbyte(0x71u);
  HalpRtcRegA = v0;
  __outbyte(0x70u, 0xBu);
  v1 = __inbyte(0x71u);
  HalpRtcRegB = v1;
  LOBYTE(v2) = v1 & 0xBD | 2;
  __outbyte(0x70u, 0xBu);
  __outbyte(0x71u, v2);
  __outbyte(0x70u, 0xCu);
  __inbyte(0x71u);
  __outbyte(0x70u, 0xDu);
  __inbyte(0x71u);
  return HalpReleaseCmosSpinLock(v2, 113LL, 113LL);
}
