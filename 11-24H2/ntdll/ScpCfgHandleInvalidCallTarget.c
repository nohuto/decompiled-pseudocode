/*
 * XREFs of ScpCfgHandleInvalidCallTarget @ 0x18016B240
 * Callers:
 *     ScpCfgDispatchUserCallTarget @ 0x18016B040 (ScpCfgDispatchUserCallTarget.c)
 *     ScpCfgDispatchUserCallTargetES @ 0x18016B0C0 (ScpCfgDispatchUserCallTargetES.c)
 *     ScpCfgValidateUserCallTarget @ 0x18016B140 (ScpCfgValidateUserCallTarget.c)
 *     ScpCfgValidateUserCallTargetES @ 0x18016B1C0 (ScpCfgValidateUserCallTargetES.c)
 * Callees:
 *     <none>
 */

void ScpCfgHandleInvalidCallTarget()
{
  JUMPOUT(0x123456789ABCDEFLL);
}
