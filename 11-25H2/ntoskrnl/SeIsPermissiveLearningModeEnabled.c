/*
 * XREFs of SeIsPermissiveLearningModeEnabled @ 0x140478EB0
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeIsPermissiveLearningModeEnabled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 200) & 0x3000000) == 50331648;
}
