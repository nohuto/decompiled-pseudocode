/*
 * XREFs of PopNetUpdateDsAccounting @ 0x1404C3750
 * Callers:
 *     PdcPoNetworkResiliency @ 0x140750790 (PdcPoNetworkResiliency.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

void __fastcall PopNetUpdateDsAccounting(char a1)
{
  KIRQL v2; // r8

  v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  if ( a1 )
  {
    if ( PopNetStandbyState == 2 )
      qword_140F0A718 = MEMORY[0xFFFFF78000000008];
  }
  else if ( qword_140F0A718 )
  {
    qword_140F0A720 += (MEMORY[0xFFFFF78000000008] - qword_140F0A718) / 0xAuLL;
    qword_140F0A718 = 0LL;
  }
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v2);
}
