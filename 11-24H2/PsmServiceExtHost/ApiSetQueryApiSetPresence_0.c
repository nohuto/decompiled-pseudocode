/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180073026
 * Callers:
 *     IsUMgrQueryUserContextFromSidPresent @ 0x180072908 (IsUMgrQueryUserContextFromSidPresent.c)
 *     IsQueryUserTokenPresent @ 0x1800729FC (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x180072ADC (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x180072BBC (IsPackageRundownNotificationForStoreLicense2Present.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180072CD4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     IsGetPackageTypeForPsmKeyPresent @ 0x180072D28 (IsGetPackageTypeForPsmKeyPresent.c)
 *     IsRmRpsInitializePresent @ 0x1800734AC (IsRmRpsInitializePresent.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x1800738AC (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterWindowMessageWPresent @ 0x18007398C (IsRegisterWindowMessageWPresent.c)
 *     IsGetThreadDesktopPresent @ 0x180073A6C (IsGetThreadDesktopPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
