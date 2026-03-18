/*
 * XREFs of HalpSetClockAfterSleep @ 0x1404254A4
 * Callers:
 *     HalpDpPostReplace @ 0x140B4F880 (HalpDpPostReplace.c)
 *     HalpAcpiPostSleep @ 0x140B6A5BC (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140425E04 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140425EE8 (HalpAcquireCmosSpinLock.c)
 */

__int64 HalpSetClockAfterSleep()
{
  unsigned __int8 v0; // cl
  __int64 v1; // rcx

  HalpAcquireCmosSpinLock();
  v0 = HalpRtcRegA;
  __outbyte(0x70u, 0xAu);
  __outbyte(0x71u, v0);
  LOBYTE(v1) = HalpRtcRegB & 0xDF;
  __outbyte(0x70u, 0xBu);
  LOBYTE(v1) = v1 | 2;
  __outbyte(0x71u, v1);
  __outbyte(0x70u, 0xCu);
  __inbyte(0x71u);
  __outbyte(0x70u, 0xDu);
  __inbyte(0x71u);
  return HalpReleaseCmosSpinLock(v1, 113LL, 113LL);
}
