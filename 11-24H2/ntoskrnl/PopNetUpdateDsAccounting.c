/*
 * XREFs of PopNetUpdateDsAccounting @ 0x1404C2150
 * Callers:
 *     PopNetResiliencyStateChanged @ 0x140AC9288 (PopNetResiliencyStateChanged.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopNetUpdateDsAccounting(char a1)
{
  KIRQL v2; // r8

  v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  if ( a1 )
  {
    if ( PopNetStandbyState == 2 )
      qword_140F0BF38 = MEMORY[0xFFFFF78000000008];
  }
  else if ( qword_140F0BF38 )
  {
    qword_140F0BF40 += (MEMORY[0xFFFFF78000000008] - qword_140F0BF38) / 0xAuLL;
    qword_140F0BF38 = 0LL;
  }
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v2);
}
