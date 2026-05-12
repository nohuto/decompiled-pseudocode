/*
 * XREFs of RaidAdapterStopAdapter @ 0x1400275F8
 * Callers:
 *     RaidAdapterStop @ 0x1400403C8 (RaidAdapterStop.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x14001A910 (RaidAdapterAcquireInterruptLock.c)
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x140027690 (RaCallMiniportAdapterControl.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1400277E0 (RaidAdapterReleaseInterruptLock.c)
 */

__int64 __fastcall RaidAdapterStopAdapter(__int64 a1)
{
  KIRQL v2; // bl
  int v3; // eax
  __int64 v4; // rdx
  int v5; // esi

  if ( (*(_BYTE *)(a1 + 104) & 1) == 0 )
    return 0LL;
  v2 = RaidAdapterAcquireInterruptLock(a1);
  v3 = RaCallMiniportAdapterControl(a1 + 376, 1LL);
  LOBYTE(v4) = v2;
  v5 = v3;
  RaidAdapterReleaseInterruptLock(a1, v4);
  if ( RaidIsAdapterControlSupported(a1 + 376, 3) )
    RaCallMiniportAdapterControl(a1 + 376, 3LL);
  if ( v5 >= 0 )
    *(_BYTE *)(a1 + 104) &= ~1u;
  return (unsigned int)v5;
}
