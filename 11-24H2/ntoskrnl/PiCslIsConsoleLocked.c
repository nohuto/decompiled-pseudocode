/*
 * XREFs of PiCslIsConsoleLocked @ 0x140A7F420
 * Callers:
 *     PipDmgEnforceEnumerationPolicy @ 0x140731B84 (PipDmgEnforceEnumerationPolicy.c)
 *     PipDmgReevaluateQueue @ 0x140731E74 (PipDmgReevaluateQueue.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A7F278 (PnpSurpriseFailUnsafeDmaDevices.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

char PiCslIsConsoleLocked()
{
  char v0; // dl

  v0 = 0;
  if ( !PipCslInitialized )
    KeBugCheckEx(0xCAu, 0x10uLL, 0LL, 0LL, 0LL);
  if ( !PipCslConsoleLockState )
    return 1;
  if ( PipCslConsoleLockState != 1 )
  {
    if ( PipCslConsoleLockState != 2 )
      __fastfail(5u);
    return 1;
  }
  return v0;
}
