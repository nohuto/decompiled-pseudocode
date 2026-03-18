/*
 * XREFs of PipDmgReevaluateQueue @ 0x140731E74
 * Callers:
 *     PipDmgEnforceEnumerationPolicy @ 0x140731B84 (PipDmgEnforceEnumerationPolicy.c)
 *     PipDmgInitPhaseTwo @ 0x140731D4C (PipDmgInitPhaseTwo.c)
 *     PiDmaGuardProcessPostRemove @ 0x140A8BD58 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     PipDmgFlushQueueAndRestartDevices @ 0x140731C6C (PipDmgFlushQueueAndRestartDevices.c)
 *     PiCslIsConsoleLocked @ 0x140A7F420 (PiCslIsConsoleLocked.c)
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
