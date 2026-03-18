/*
 * XREFs of ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1400F0208
 * Callers:
 *     ?SetupBudgetState@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@G@Z @ 0x1400DF8A4 (-SetupBudgetState@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@G@Z.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1400EFCEC (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 *     ??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x140100F38 (--1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(VIDMM_PROCESS_BUDGET_STATE *this)
{
  unsigned __int64 result; // rax
  _QWORD *v2; // rcx
  __int64 v3; // rdx

  result = 0LL;
  v2 = (_QWORD *)((char *)this + 256);
  v3 = 5LL;
  do
  {
    result += *v2++;
    --v3;
  }
  while ( v3 );
  return result;
}
