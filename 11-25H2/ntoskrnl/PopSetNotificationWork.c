/*
 * XREFs of PopSetNotificationWork @ 0x140476948
 * Callers:
 *     PopInitilizeAcDcSettings @ 0x1404765A0 (PopInitilizeAcDcSettings.c)
 *     PopUserPresentSetWorker @ 0x140492FE0 (PopUserPresentSetWorker.c)
 *     PopExecutePowerAction @ 0x140747484 (PopExecutePowerAction.c)
 *     PopSetPowerSettingValue @ 0x140964AB4 (PopSetPowerSettingValue.c)
 *     PopGetSettingNotificationName @ 0x1409663C4 (PopGetSettingNotificationName.c)
 *     PopApplyPolicy @ 0x140A0FFD0 (PopApplyPolicy.c)
 *     PoRegisterPowerSettingCallback @ 0x140A686B0 (PoRegisterPowerSettingCallback.c)
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopCheckForWork @ 0x14047697C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1404769F4 (PopGetPolicyWorker.c)
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
