/*
 * XREFs of IsUserSidAssignedAccessSingleAppClassicApp @ 0x1800F034C
 * Callers:
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800EF940 (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 *     IsCurrentUserAssignedAccessSingleAppClassicApp @ 0x18074AA84 (IsCurrentUserAssignedAccessSingleAppClassicApp.c)
 * Callees:
 *     GetAssignedAccessTypeForUser @ 0x180096438 (GetAssignedAccessTypeForUser.c)
 */

_BOOL8 __fastcall IsUserSidAssignedAccessSingleAppClassicApp(unsigned __int16 *a1)
{
  return (unsigned int)GetAssignedAccessTypeForUser(a1) == 3;
}
