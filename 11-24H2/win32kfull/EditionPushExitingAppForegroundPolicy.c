/*
 * XREFs of EditionPushExitingAppForegroundPolicy @ 0x1401E0820
 * Callers:
 *     <none>
 * Callees:
 *     ?TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x14028D554 (-TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall EditionPushExitingAppForegroundPolicy(struct tagPROCESSINFO *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  CForegroundLaunch::TryRecordParentPidLegacyPolicy(*(CForegroundLaunch **)(UserSessionState + 18928), a1);
}
