/*
 * XREFs of PopDiagTraceCsResiliencyEnter @ 0x1404EBA2C
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140ABD324 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopIsRemoteDesktopEnabled @ 0x140ABD614 (PopIsRemoteDesktopEnabled.c)
 */

void __fastcall PopDiagTraceCsResiliencyEnter(__int64 a1, char a2, __int128 *a3)
{
  char IsRemoteDesktopEnabled; // bl
  KIRQL v7; // di
  int v8; // eax

  IsRemoteDesktopEnabled = PopIsRemoteDesktopEnabled();
  v7 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  memset_0(PopCsResiliencyStats, 0, 0x150uLL);
  qword_140F0BF88 = -1LL;
  byte_140F0BF31 = PopNetBIRequestActive;
  byte_140F0BF01 = dword_140F0BA4C == 0;
  dword_140F0BF20 = dword_140E6777C;
  byte_140F0BF02 = byte_140F0BAA4;
  dword_140F0BF24 = PopEsReason;
  v8 = *(_DWORD *)(a1 + 12);
  byte_140F0BF03 = byte_140F0BAA5;
  dword_140F0BF2C = PopNetStandbyReason;
  dword_140F0BF04 = v8;
  PopCsResiliencyStats[0] = 1;
  byte_140F0BF30 = IsRemoteDesktopEnabled;
  byte_140F0BF08 = a2;
  xmmword_140F0BF10 = *a3;
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v7);
}
