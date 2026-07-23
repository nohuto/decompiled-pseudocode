/*
 * XREFs of PopNetUpdateDsAccounting @ 0x1404BD740
 * Callers:
 *     PopNetResiliencyStateChanged @ 0x140AC71C0 (PopNetResiliencyStateChanged.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopNetUpdateDsAccounting(char a1)
{
  KIRQL v2; // r8

  v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  if ( a1 )
  {
    if ( PopNetStandbyState == 2 )
      qword_140F0C3B8 = MEMORY[0xFFFFF78000000008];
  }
  else if ( qword_140F0C3B8 )
  {
    qword_140F0C3C0 += (MEMORY[0xFFFFF78000000008] - qword_140F0C3B8) / 0xAuLL;
    qword_140F0C3B8 = 0LL;
  }
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v2);
}
