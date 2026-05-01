/*
 * XREFs of ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180003AF4
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000BBA0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180005190 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 */

void __fastcall RmpActivityHostSetCommitSavings(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  int v3; // r8d
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  RmHamHostActOnProcesses(a1, 0x2001u, 1u, RmpActivityHostCommitSavingsCallback, &v4);
  v3 = v4;
  *((_DWORD *)a1 + 317) = *((_DWORD *)a1 + 317) & 0xFFFFFFEF | (16 * (v4 & 1));
  if ( !v3 )
    *((_DWORD *)a1 + 316) &= ~4u;
}
