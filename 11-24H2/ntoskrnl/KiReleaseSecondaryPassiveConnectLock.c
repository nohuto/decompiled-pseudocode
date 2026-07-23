/*
 * XREFs of KiReleaseSecondaryPassiveConnectLock @ 0x1402B54A0
 * Callers:
 *     KiConnectSecondaryInterrupt @ 0x1402B3644 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140374188 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 */

void __fastcall KiReleaseSecondaryPassiveConnectLock(__int64 a1)
{
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  KeLeaveCriticalRegion();
}
