/*
 * XREFs of PopDiagTraceCsResiliencyEnter @ 0x1404E296C
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140AB8394 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopIsRemoteDesktopEnabled @ 0x140AB8684 (PopIsRemoteDesktopEnabled.c)
 */

void __fastcall PopDiagTraceCsResiliencyEnter(__int64 a1, char a2, __int128 *a3)
{
  char IsRemoteDesktopEnabled; // bl
  KIRQL v7; // di
  int v8; // eax

  IsRemoteDesktopEnabled = PopIsRemoteDesktopEnabled();
  v7 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  memset_0(PopCsResiliencyStats, 0, 0x150uLL);
  qword_140F0C408 = -1LL;
  byte_140F0C3B1 = PopNetBIRequestActive;
  byte_140F0C381 = dword_140F0B38C == 0;
  dword_140F0C3A0 = dword_140E67904;
  byte_140F0C382 = byte_140F0B3E4;
  dword_140F0C3A4 = PopEsReason;
  v8 = *(_DWORD *)(a1 + 12);
  byte_140F0C383 = byte_140F0B3E5;
  dword_140F0C3AC = PopNetStandbyReason;
  dword_140F0C384 = v8;
  PopCsResiliencyStats[0] = 1;
  byte_140F0C3B0 = IsRemoteDesktopEnabled;
  byte_140F0C388 = a2;
  xmmword_140F0C390 = *a3;
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v7);
}
