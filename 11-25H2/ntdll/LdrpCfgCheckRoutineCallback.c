/*
 * XREFs of LdrpCfgCheckRoutineCallback @ 0x1800219C0
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x1800212A0 (LdrpCfgProcessLoadConfig.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180022E90 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
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
    result = qword_1801EC538;
    v6 = LdrpValidateUserCallTargetES;
    if ( qword_1801EC538 )
      v6 = (__int64 (__fastcall *)())qword_1801EC538;
    *v3 = v6;
  }
  else
  {
    result = qword_1801EC530;
    v5 = LdrpValidateUserCallTarget;
    if ( qword_1801EC530 )
      v5 = (__int64 (__fastcall *)())qword_1801EC530;
    *v3 = v5;
  }
  return result;
}
