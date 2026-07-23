/*
 * XREFs of PopPowerRequestStatsFreeId @ 0x140A18B9C
 * Callers:
 *     PopPowerRequestStatsCreate @ 0x140A18B2C (PopPowerRequestStatsCreate.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A18BD4 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopPowerRequestStatsFreeId(PVOID *P)
{
  if ( (*(_DWORD *)P & 2) != 0 )
    ExFreePoolWithTag(P[2], 0x54515750u);
  ExFreePoolWithTag(P, 0x54515750u);
}
