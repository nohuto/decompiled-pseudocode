/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x1403B764C
 * Callers:
 *     KeConnectInterrupt @ 0x1403B6EEC (KeConnectInterrupt.c)
 *     KeMaskInterrupt @ 0x1403B748C (KeMaskInterrupt.c)
 *     KeDisconnectInterrupt @ 0x1403B8A3C (KeDisconnectInterrupt.c)
 *     KeUnmaskInterrupt @ 0x14046E464 (KeUnmaskInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return guard_dispatch_icall_no_overrides((unsigned int)a1[2], (unsigned int)a1[16], a3, a4);
  else
    return 0;
}
