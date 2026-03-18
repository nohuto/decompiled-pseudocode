/*
 * XREFs of ?SetPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z @ 0x1401A7AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PolicyChanged@QualityOfService@@YAXXZ @ 0x1401A5400 (-PolicyChanged@QualityOfService@@YAXXZ.c)
 *     ?SyncBoostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401ACC64 (-SyncBoostAllProcesses@ForegroundBoost@@YAXXZ.c)
 */

void __fastcall tagWINDOWSTATION::SetPolicy(volatile signed __int32 *a1, unsigned int a2)
{
  char v2; // bl
  bool v4; // dl

  v2 = 1;
  v4 = (a2 & 1) != 0 && (a1[64] & 1) == 0;
  if ( (a2 & 2) == 0 || (a1[64] & 2) != 0 )
    v2 = 0;
  _InterlockedOr(a1 + 64, a2);
  if ( v4 )
    ForegroundBoost::SyncBoostAllProcesses((ForegroundBoost *)a1);
  if ( v2 )
    QualityOfService::PolicyChanged((QualityOfService *)a1);
}
