/*
 * XREFs of ?ClearPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z @ 0x1401A7A30
 * Callers:
 *     <none>
 * Callees:
 *     ?PolicyChanged@QualityOfService@@YAXXZ @ 0x1401A5400 (-PolicyChanged@QualityOfService@@YAXXZ.c)
 *     ?DeboostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401AC0F4 (-DeboostAllProcesses@ForegroundBoost@@YAXXZ.c)
 */

void __fastcall tagWINDOWSTATION::ClearPolicy(volatile signed __int32 *a1, int a2)
{
  char v2; // bl
  bool v3; // r8

  v2 = 1;
  v3 = (a2 & 1) != 0 && (a1[64] & 1) != 0;
  if ( (a2 & 2) == 0 || (a1[64] & 2) == 0 )
    v2 = 0;
  _InterlockedAnd(a1 + 64, ~a2);
  if ( v3 )
    ForegroundBoost::DeboostAllProcesses((ForegroundBoost *)a1);
  if ( v2 )
    QualityOfService::PolicyChanged((QualityOfService *)a1);
}
