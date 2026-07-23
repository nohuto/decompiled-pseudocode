/*
 * XREFs of PopSetNotificationWork @ 0x1403E6A78
 * Callers:
 *     PopInitilizeAcDcSettings @ 0x1403E66D0 (PopInitilizeAcDcSettings.c)
 *     PopUserPresentSetWorker @ 0x14048D0E0 (PopUserPresentSetWorker.c)
 *     PopExecutePowerAction @ 0x140751894 (PopExecutePowerAction.c)
 *     PopApplyPolicy @ 0x14099EC20 (PopApplyPolicy.c)
 *     PopGetSettingNotificationName @ 0x1409A14CC (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x1409A2EB4 (PopSetPowerSettingValue.c)
 *     PopBatteryApplyCompositeState @ 0x140A304E8 (PopBatteryApplyCompositeState.c)
 *     PoRegisterPowerSettingCallback @ 0x140A646B0 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     PopCheckForWork @ 0x1403E6AAC (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1403E6B24 (PopGetPolicyWorker.c)
 */

__int64 __fastcall PopSetNotificationWork(unsigned int a1)
{
  __int64 result; // rax

  result = a1 & PopNotifyEvents;
  if ( (_DWORD)result != a1 )
  {
    _InterlockedOr(&PopNotifyEvents, a1);
    PopGetPolicyWorker(4LL);
    return PopCheckForWork();
  }
  return result;
}
