/*
 * XREFs of SeIsPermissiveLearningModeEnabled @ 0x14045771C
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 *     PsConvertToGuiThread @ 0x140AC9700 (PsConvertToGuiThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeIsPermissiveLearningModeEnabled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 200) & 0x3000000) == 50331648;
}
