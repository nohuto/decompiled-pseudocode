/*
 * XREFs of LdrpCfgCheckRoutineCallback @ 0x1800219C0
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x1800212A0 (LdrpCfgProcessLoadConfig.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180022E90 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 */

ULONG_PTR __fastcall LdrpCfgCheckRoutineCallback(__int64 a1, __int64 a2)
{
  __int16 v2; // dx
  __int64 (__fastcall **v3)(); // r8
  ULONG_PTR result; // rax
  __int64 (__fastcall *ScpCfgCheckFunction)(); // rcx
  __int64 (__fastcall *ScpCfgCheckESFunction)(); // rdx

  if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(a1, a2, a1) && (v2 & 0x4000) != 0 )
  {
    result = LdrSystemDllInitBlock.ScpCfgCheckESFunction;
    ScpCfgCheckESFunction = LdrpValidateUserCallTargetES;
    if ( LdrSystemDllInitBlock.ScpCfgCheckESFunction )
      ScpCfgCheckESFunction = (__int64 (__fastcall *)())LdrSystemDllInitBlock.ScpCfgCheckESFunction;
    *v3 = ScpCfgCheckESFunction;
  }
  else
  {
    result = LdrSystemDllInitBlock.ScpCfgCheckFunction;
    ScpCfgCheckFunction = LdrpValidateUserCallTarget;
    if ( LdrSystemDllInitBlock.ScpCfgCheckFunction )
      ScpCfgCheckFunction = (__int64 (__fastcall *)())LdrSystemDllInitBlock.ScpCfgCheckFunction;
    *v3 = ScpCfgCheckFunction;
  }
  return result;
}
