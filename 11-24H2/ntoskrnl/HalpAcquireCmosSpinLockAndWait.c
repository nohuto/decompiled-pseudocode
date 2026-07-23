/*
 * XREFs of HalpAcquireCmosSpinLockAndWait @ 0x140419CD0
 * Callers:
 *     HalpWriteCmosTime @ 0x140419448 (HalpWriteCmosTime.c)
 *     HalpSetWakeAlarm @ 0x140419978 (HalpSetWakeAlarm.c)
 *     HalpReadCmosTime @ 0x140419B24 (HalpReadCmosTime.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140419CB4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140419D98 (HalpAcquireCmosSpinLock.c)
 */

char HalpAcquireCmosSpinLockAndWait()
{
  int v0; // ebx
  char result; // al

  HalpAcquireCmosSpinLock();
  v0 = 0;
  while ( 1 )
  {
    __outbyte(0x70u, 0xAu);
    result = __inbyte(0x71u);
    if ( result >= 0 )
      break;
    if ( ++v0 == 100 )
    {
      v0 = 0;
      HalpReleaseCmosSpinLock();
      HalpAcquireCmosSpinLock();
    }
  }
  return result;
}
