/*
 * XREFs of LdrpCfgDispatchRoutineCallback @ 0x180036010
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x180034480 (LdrpCfgProcessLoadConfig.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180036070 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 */

ULONG_PTR __fastcall LdrpCfgDispatchRoutineCallback(__int64 a1, __int64 a2)
{
  __int16 v2; // dx
  __int64 (__fastcall **v3)(); // r8
  ULONG_PTR result; // rax
  __int64 (__fastcall *ScpCfgDispatchFunction)(); // rcx
  __int64 (__fastcall *ScpCfgDispatchESFunction)(); // rdx

  if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(a1, a2, a1) && (v2 & 0x4000) != 0 )
  {
    result = LdrSystemDllInitBlock.ScpCfgDispatchESFunction;
    ScpCfgDispatchESFunction = LdrpDispatchUserCallTargetES;
    if ( LdrSystemDllInitBlock.ScpCfgDispatchESFunction )
      ScpCfgDispatchESFunction = (__int64 (__fastcall *)())LdrSystemDllInitBlock.ScpCfgDispatchESFunction;
    *v3 = ScpCfgDispatchESFunction;
  }
  else
  {
    result = LdrSystemDllInitBlock.ScpCfgDispatchFunction;
    ScpCfgDispatchFunction = LdrpDispatchUserCallTarget;
    if ( LdrSystemDllInitBlock.ScpCfgDispatchFunction )
      ScpCfgDispatchFunction = (__int64 (__fastcall *)())LdrSystemDllInitBlock.ScpCfgDispatchFunction;
    *v3 = ScpCfgDispatchFunction;
  }
  return result;
}
