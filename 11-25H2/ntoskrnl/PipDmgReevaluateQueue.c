/*
 * XREFs of PipDmgReevaluateQueue @ 0x140725C64
 * Callers:
 *     PipDmgEnforceEnumerationPolicy @ 0x140725974 (PipDmgEnforceEnumerationPolicy.c)
 *     PipDmgInitPhaseTwo @ 0x140725B3C (PipDmgInitPhaseTwo.c)
 *     PiDmaGuardProcessPostRemove @ 0x140A87040 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     PipDmgFlushQueueAndRestartDevices @ 0x140725A5C (PipDmgFlushQueueAndRestartDevices.c)
 *     PiCslIsConsoleLocked @ 0x140A7BF08 (PiCslIsConsoleLocked.c)
 */

void PipDmgReevaluateQueue()
{
  if ( PipDmaGuardPolicy == 1 )
  {
LABEL_6:
    PipDmgFlushQueueAndRestartDevices();
    return;
  }
  if ( PipDmaGuardPolicy == 2 )
  {
    if ( (unsigned __int8)PiCslIsConsoleLocked() )
      return;
    goto LABEL_6;
  }
  if ( PipDmaGuardPolicy != 3 )
    __fastfail(5u);
}
