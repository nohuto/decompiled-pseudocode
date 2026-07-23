/*
 * XREFs of ScpCfgHandleInvalidCallTarget_ES @ 0x18016E240
 * Callers:
 *     ScpCfgDispatchUserCallTarget_ES @ 0x18016E040 (ScpCfgDispatchUserCallTarget_ES.c)
 *     ScpCfgDispatchUserCallTargetES_ES @ 0x18016E0C0 (ScpCfgDispatchUserCallTargetES_ES.c)
 *     ScpCfgValidateUserCallTarget_ES @ 0x18016E140 (ScpCfgValidateUserCallTarget_ES.c)
 *     ScpCfgValidateUserCallTargetES_ES @ 0x18016E1C0 (ScpCfgValidateUserCallTargetES_ES.c)
 * Callees:
 *     <none>
 */

void ScpCfgHandleInvalidCallTarget_ES()
{
  JUMPOUT(0x123456789ABCDEFLL);
}
