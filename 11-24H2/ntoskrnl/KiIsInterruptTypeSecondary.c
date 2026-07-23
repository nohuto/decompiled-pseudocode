/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x1402B3900
 * Callers:
 *     KeConnectInterrupt @ 0x1402B31A0 (KeConnectInterrupt.c)
 *     KeMaskInterrupt @ 0x1402B3740 (KeMaskInterrupt.c)
 *     KeUnmaskInterrupt @ 0x1402B4B54 (KeUnmaskInterrupt.c)
 *     KeDisconnectInterrupt @ 0x140373B88 (KeDisconnectInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return guard_dispatch_icall_no_overrides((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}
