/*
 * XREFs of ScpCfgHandleInvalidCallTarget_ES @ 0x180171240
 * Callers:
 *     ScpCfgDispatchUserCallTarget_ES @ 0x180171040 (ScpCfgDispatchUserCallTarget_ES.c)
 *     ScpCfgDispatchUserCallTargetES_ES @ 0x1801710C0 (ScpCfgDispatchUserCallTargetES_ES.c)
 *     ScpCfgValidateUserCallTarget_ES @ 0x180171140 (ScpCfgValidateUserCallTarget_ES.c)
 *     ScpCfgValidateUserCallTargetES_ES @ 0x1801711C0 (ScpCfgValidateUserCallTargetES_ES.c)
 * Callees:
 *     <none>
 */

void ScpCfgHandleInvalidCallTarget_ES()
{
  JUMPOUT(0x123456789ABCDEFLL);
}
