/*
 * XREFs of PopEsQueueStateEvaluation @ 0x140A36D7C
 * Callers:
 *     PopEsPowerSettingPolicyCallback @ 0x140750BF0 (PopEsPowerSettingPolicyCallback.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     PopEsInStandbyEvaluate @ 0x140A36C44 (PopEsInStandbyEvaluate.c)
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x140A36FBC (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsQueueStateEvaluation(char a1)
{
  return PopEsWorkItemSchedule(a1 != 0 ? 12 : 4);
}
