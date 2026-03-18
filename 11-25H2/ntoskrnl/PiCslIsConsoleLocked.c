/*
 * XREFs of PiCslIsConsoleLocked @ 0x140A7BF08
 * Callers:
 *     PipDmgEnforceEnumerationPolicy @ 0x140725974 (PipDmgEnforceEnumerationPolicy.c)
 *     PipDmgReevaluateQueue @ 0x140725C64 (PipDmgReevaluateQueue.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A7BD60 (PnpSurpriseFailUnsafeDmaDevices.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
