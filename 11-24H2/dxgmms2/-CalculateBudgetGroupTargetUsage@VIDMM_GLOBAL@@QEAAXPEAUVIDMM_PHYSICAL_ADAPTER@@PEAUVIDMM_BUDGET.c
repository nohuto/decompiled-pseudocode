/*
 * XREFs of ?CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x140100CA8
 * Callers:
 *     ?SetupBudgetState@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@G@Z @ 0x1400DF8A4 (-SetupBudgetState@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@G@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
        VIDMM_GLOBAL *this,
        struct VIDMM_PHYSICAL_ADAPTER *a2,
        struct VIDMM_BUDGET_STATE *a3,
        struct VIDMM_SEGMENT_GROUP_STATE *a4)
{
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // r10
  int v9; // edx
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rdx

  if ( (*((_BYTE *)a2 + 478) & 4) == 0 )
  {
    v5 = dword_140081604;
    v6 = (unsigned int)dword_140081608;
LABEL_4:
    v7 = *((_QWORD *)a4 + 2);
    v8 = v7 * (unsigned __int64)v5 / 0x64;
    *((_QWORD *)a4 + 33) = v8;
    v9 = *((_DWORD *)a4 + 82);
    v10 = v7 * v6 / 0x64uLL;
    *((_QWORD *)a4 + 34) = v10;
    v11 = v10;
    if ( !v9 )
      goto LABEL_5;
    goto LABEL_10;
  }
  v4 = *(int *)a4;
  if ( !(_DWORD)v4 )
  {
    v5 = dword_14008160C;
    v6 = (unsigned int)dword_140081610;
    goto LABEL_4;
  }
  if ( (_DWORD)v4 == 1 )
  {
    v5 = dword_140081614;
    v6 = (unsigned int)dword_140081618;
    goto LABEL_4;
  }
  g_DxgMmsBugcheckExportIndex = 1;
  v11 = WdLogSingleEntry5(0LL, 270LL, 61LL, this, v4, 0LL);
  WdLogGlobalForLineNumber = 195;
LABEL_10:
  if ( *((_DWORD *)a4 + 79) == v9 )
  {
    v12 = *((_QWORD *)a4 + 37);
    if ( v12 < v10 )
    {
      *((_QWORD *)a4 + 34) = v12;
      v11 = v12;
    }
  }
LABEL_5:
  *((_QWORD *)a4 + 35) = v7 - v8 - v11;
}
