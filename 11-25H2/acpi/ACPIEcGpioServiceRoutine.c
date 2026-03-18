/*
 * XREFs of ACPIEcGpioServiceRoutine @ 0x14004C0F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIEcMaskInterrupt @ 0x1400199D0 (ACPIEcMaskInterrupt.c)
 */

char __fastcall ACPIEcGpioServiceRoutine(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a2 + 2290) & 1) == 0 )
    ACPIEcMaskInterrupt(a2);
  KeInsertQueueDpc((PRKDPC)(a2 + 2224), 0LL, 0LL);
  return 0;
}
