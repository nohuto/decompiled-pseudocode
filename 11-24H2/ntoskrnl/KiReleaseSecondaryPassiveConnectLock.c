/*
 * XREFs of KiReleaseSecondaryPassiveConnectLock @ 0x1404D0B20
 * Callers:
 *     KiConnectSecondaryInterrupt @ 0x1403B7390 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1403B9038 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 */

void __fastcall KiReleaseSecondaryPassiveConnectLock(__int64 a1)
{
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  KeLeaveCriticalRegion();
}
