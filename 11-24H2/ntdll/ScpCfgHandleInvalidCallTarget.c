/*
 * XREFs of ScpCfgHandleInvalidCallTarget @ 0x18016C240
 * Callers:
 *     ScpCfgDispatchUserCallTarget @ 0x18016C040 (ScpCfgDispatchUserCallTarget.c)
 *     ScpCfgDispatchUserCallTargetES @ 0x18016C0C0 (ScpCfgDispatchUserCallTargetES.c)
 *     ScpCfgValidateUserCallTarget @ 0x18016C140 (ScpCfgValidateUserCallTarget.c)
 *     ScpCfgValidateUserCallTargetES @ 0x18016C1C0 (ScpCfgValidateUserCallTargetES.c)
 * Callees:
 *     <none>
 */

void ScpCfgHandleInvalidCallTarget()
{
  JUMPOUT(0x123456789ABCDEFLL);
}
