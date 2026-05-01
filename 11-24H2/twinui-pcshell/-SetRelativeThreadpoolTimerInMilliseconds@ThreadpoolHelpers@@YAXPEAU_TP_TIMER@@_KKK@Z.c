/*
 * XREFs of ?SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z @ 0x180206294
 * Callers:
 *     ?ShowExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x1802C74C0 (-ShowExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x18036FF20 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?TrackMouseMovement@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803C0C44 (-TrackMouseMovement@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?HandleDebounceTimeout@NavigationLevelHelper@LegacyWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x180439080 (-HandleDebounceTimeout@NavigationLevelHelper@LegacyWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180439198 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@Vie.c)
 *     ?HandleDebounceTimeout@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x1804456A8 (-HandleDebounceTimeout@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804457C0 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@.c)
 * Callees:
 *     <none>
 */

void __fastcall ThreadpoolHelpers::SetRelativeThreadpoolTimerInMilliseconds(
        ThreadpoolHelpers *this,
        struct _TP_TIMER *a2,
        DWORD a3)
{
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp+10h] BYREF

  pftDueTime = (struct _FILETIME)(-10000LL * (_QWORD)a2);
  SetThreadpoolTimer(this, &pftDueTime, a3, 0);
}
