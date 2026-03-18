/*
 * XREFs of KiReleaseSecondaryPassiveConnectLock @ 0x140443A1C
 * Callers:
 *     KiConnectSecondaryInterrupt @ 0x140202BFC (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140444EC8 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 */

void __fastcall KiReleaseSecondaryPassiveConnectLock(__int64 a1)
{
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  KeLeaveCriticalRegion();
}
