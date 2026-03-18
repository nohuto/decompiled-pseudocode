/*
 * XREFs of PcisuppReleasePciRouting @ 0x1400A934C
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1400A9094 (PcisuppAcquirePciInterfaces.c)
 *     PcisuppReleasePciInterfaces @ 0x1400A9244 (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

void PcisuppReleasePciRouting()
{
  if ( InterruptRouting )
  {
    ExFreePoolWithTag(InterruptRouting, 0);
    InterruptRouting = 0LL;
  }
}
