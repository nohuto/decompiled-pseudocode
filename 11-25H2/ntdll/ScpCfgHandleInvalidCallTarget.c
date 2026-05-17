/*
 * XREFs of ScpCfgHandleInvalidCallTarget @ 0x18016E240
 * Callers:
 *     ScpCfgDispatchUserCallTarget @ 0x18016E040 (ScpCfgDispatchUserCallTarget.c)
 *     ScpCfgDispatchUserCallTargetES @ 0x18016E0C0 (ScpCfgDispatchUserCallTargetES.c)
 *     ScpCfgValidateUserCallTarget @ 0x18016E140 (ScpCfgValidateUserCallTarget.c)
 *     ScpCfgValidateUserCallTargetES @ 0x18016E1C0 (ScpCfgValidateUserCallTargetES.c)
 * Callees:
 *     <none>
 */

void ScpCfgHandleInvalidCallTarget()
{
  JUMPOUT(0x123456789ABCDEFLL);
}
