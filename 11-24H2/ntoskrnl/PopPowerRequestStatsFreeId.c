/*
 * XREFs of PopPowerRequestStatsFreeId @ 0x140A24BAC
 * Callers:
 *     PopPowerRequestStatsCreate @ 0x140A24B3C (PopPowerRequestStatsCreate.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A24BE4 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopPowerRequestStatsFreeId(PVOID *P)
{
  if ( (*(_DWORD *)P & 2) != 0 )
    ExFreePoolWithTag(P[2], 0x54515750u);
  ExFreePoolWithTag(P, 0x54515750u);
}
