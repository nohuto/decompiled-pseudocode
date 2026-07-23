/*
 * XREFs of PopEsQueueStateEvaluation @ 0x140A31258
 * Callers:
 *     PopEsPowerSettingPolicyCallback @ 0x14075C490 (PopEsPowerSettingPolicyCallback.c)
 *     PopBatteryApplyCompositeState @ 0x140A304E8 (PopBatteryApplyCompositeState.c)
 *     PopEsInStandbyEvaluate @ 0x140A31120 (PopEsInStandbyEvaluate.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x140A31484 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsQueueStateEvaluation(char a1)
{
  return PopEsWorkItemSchedule(a1 != 0 ? 12 : 4);
}
