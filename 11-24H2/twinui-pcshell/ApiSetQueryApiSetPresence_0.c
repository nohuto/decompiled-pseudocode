/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1802DA1C9
 * Callers:
 *     IsOleInitializePresent @ 0x1802D6F54 (IsOleInitializePresent.c)
 *     IsPolicyManager_GetPolicyPresent @ 0x1802D71F8 (IsPolicyManager_GetPolicyPresent.c)
 *     IsUMgrQueryUserTokenPresent @ 0x1802D82C0 (IsUMgrQueryUserTokenPresent.c)
 *     IsPicRetrieveFileInfoPresent @ 0x1802D8328 (IsPicRetrieveFileInfoPresent.c)
 *     IsQueryWin32SubsystemHostPresent @ 0x1802D841C (IsQueryWin32SubsystemHostPresent.c)
 *     IsGetThreadDesktopPresent @ 0x1802DACB4 (IsGetThreadDesktopPresent.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x1802DAEC0 (IsWPDeveloperAppAllowedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
