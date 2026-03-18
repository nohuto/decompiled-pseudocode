/*
 * XREFs of PipCslStateChangeCallback @ 0x140A98980
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PipCslStateChangeCallback(PVOID CallbackContext, _BYTE *Argument1, PVOID Argument2)
{
  if ( !PipCslInitialized )
    KeBugCheckEx(0xCAu, 0x10uLL, 0LL, 0LL, 0LL);
  if ( *Argument1 )
  {
    if ( _InterlockedExchange(&PipCslConsoleLockState, 1) != 1 )
    {
      if ( PipCslUnlockCallback )
        guard_dispatch_icall_no_overrides(0LL);
    }
  }
  else
  {
    _InterlockedExchange(&PipCslConsoleLockState, 2);
  }
}
