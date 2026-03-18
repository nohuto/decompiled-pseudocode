/*
 * XREFs of SeIsPermissiveLearningModeEnabled @ 0x14046210C
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x14091DB90 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeIsPermissiveLearningModeEnabled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 200) & 0x3000000) == 50331648;
}
