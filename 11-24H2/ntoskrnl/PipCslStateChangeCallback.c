/*
 * XREFs of PipCslStateChangeCallback @ 0x140A99900
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
        guard_dispatch_icall_no_overrides(0LL, Argument1);
    }
  }
  else
  {
    _InterlockedExchange(&PipCslConsoleLockState, 2);
  }
}
