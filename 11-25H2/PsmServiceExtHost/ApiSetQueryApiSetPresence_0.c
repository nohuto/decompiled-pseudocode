/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180073156
 * Callers:
 *     IsUMgrQueryUserContextFromSidPresent @ 0x180072A38 (IsUMgrQueryUserContextFromSidPresent.c)
 *     IsQueryUserTokenPresent @ 0x180072B2C (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x180072C0C (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x180072CEC (IsPackageRundownNotificationForStoreLicense2Present.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180072E04 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     IsGetPackageTypeForPsmKeyPresent @ 0x180072E58 (IsGetPackageTypeForPsmKeyPresent.c)
 *     IsRmRpsInitializePresent @ 0x1800735DC (IsRmRpsInitializePresent.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x1800739DC (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterWindowMessageWPresent @ 0x180073ABC (IsRegisterWindowMessageWPresent.c)
 *     IsGetThreadDesktopPresent @ 0x180073B9C (IsGetThreadDesktopPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
