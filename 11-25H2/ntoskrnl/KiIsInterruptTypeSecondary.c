/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x140202718
 * Callers:
 *     KeUnmaskInterrupt @ 0x140200B74 (KeUnmaskInterrupt.c)
 *     KeMaskInterrupt @ 0x14020254C (KeMaskInterrupt.c)
 *     KeConnectInterrupt @ 0x14020274C (KeConnectInterrupt.c)
 *     KeDisconnectInterrupt @ 0x1404448BC (KeDisconnectInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return guard_dispatch_icall_no_overrides((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}
