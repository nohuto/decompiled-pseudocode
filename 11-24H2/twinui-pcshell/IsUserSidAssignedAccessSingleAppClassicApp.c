/*
 * XREFs of IsUserSidAssignedAccessSingleAppClassicApp @ 0x180105188
 * Callers:
 *     IsCurrentUserAssignedAccessSingleAppClassicApp @ 0x180104A38 (IsCurrentUserAssignedAccessSingleAppClassicApp.c)
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1801FE1D4 (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 * Callees:
 *     GetAssignedAccessTypeForUser_0 @ 0x1801055B8 (GetAssignedAccessTypeForUser_0.c)
 */

__int64 __fastcall IsUserSidAssignedAccessSingleAppClassicApp(unsigned __int16 *a1)
{
  GetAssignedAccessTypeForUser_0(a1);
  return 0LL;
}
