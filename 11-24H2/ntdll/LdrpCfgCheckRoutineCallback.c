/*
 * XREFs of LdrpCfgCheckRoutineCallback @ 0x1800081A0
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x180007A80 (LdrpCfgProcessLoadConfig.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009670 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 */

__int64 __fastcall LdrpCfgCheckRoutineCallback(__int64 a1, __int64 a2)
{
  __int16 v2; // dx
  __int64 (__fastcall **v3)(); // r8
  __int64 result; // rax
  __int64 (__fastcall *v5)(); // rcx
  __int64 (__fastcall *v6)(); // rdx

  if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(a1, a2, a1) && (v2 & 0x4000) != 0 )
  {
    result = qword_1801EA548;
    v6 = LdrpValidateUserCallTargetES;
    if ( qword_1801EA548 )
      v6 = (__int64 (__fastcall *)())qword_1801EA548;
    *v3 = v6;
  }
  else
  {
    result = qword_1801EA540;
    v5 = LdrpValidateUserCallTarget;
    if ( qword_1801EA540 )
      v5 = (__int64 (__fastcall *)())qword_1801EA540;
    *v3 = v5;
  }
  return result;
}
