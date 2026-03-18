/*
 * XREFs of HalpAcquireCmosSpinLockAndWait @ 0x14042DD50
 * Callers:
 *     HalpWriteCmosTime @ 0x14042D4C8 (HalpWriteCmosTime.c)
 *     HalpSetWakeAlarm @ 0x14042D9F8 (HalpSetWakeAlarm.c)
 *     HalpReadCmosTime @ 0x14042DBA4 (HalpReadCmosTime.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x14042DD34 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x14042DE18 (HalpAcquireCmosSpinLock.c)
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
