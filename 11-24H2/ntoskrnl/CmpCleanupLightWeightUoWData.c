/*
 * XREFs of CmpCleanupLightWeightUoWData @ 0x1407DE864
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140A02A20 (CmpCommitLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x140A4E660 (CmpCleanupLightWeightPrepare.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpFreeKeyByCell @ 0x1408842D0 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x1408847DC (CmpFreeValue.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140A14BD8 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140A14CEC (CmpCleanupDiscardReplaceContext.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140A24014 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x140A7D300 (CmpLightWeightCleanupSetSecDescUoW.c)
 */

void __fastcall CmpCleanupLightWeightUoWData(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  unsigned int *v12; // rdx
  ULONG_PTR v13; // rdx
  __int64 v14; // rcx

  if ( *(_QWORD *)(a1 + 104) )
  {
    v5 = *(_DWORD *)(a1 + 68);
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( !v6 )
        goto LABEL_15;
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                if ( v11 == 3 )
                {
                  CmpLightWeightCleanupSetSecDescUoW(*(PVOID *)(a1 + 104));
                  *(_QWORD *)(a1 + 104) = 0LL;
                }
                return;
              }
            }
          }
          CmpLightWeightCleanupSetValueKeyUoW(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), *(_QWORD *)(a1 + 104));
          v12 = *(unsigned int **)(a1 + 112);
          *(_QWORD *)(a1 + 104) = 0LL;
          if ( !v12 )
            return;
          v13 = *v12;
          if ( (_DWORD)v13 != -1 )
            CmpFreeValue(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), v13);
          CmpFreeTransientPoolWithTag(*(void **)(a1 + 112), 0x77554D43u);
LABEL_21:
          *(_QWORD *)(a1 + 112) = 0LL;
          return;
        }
LABEL_15:
        *(_QWORD *)(a1 + 104) = 0LL;
        return;
      }
    }
    else
    {
      CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL));
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL) = *(_DWORD *)(a1 + 88);
      *(_DWORD *)(a1 + 88) = 0;
    }
    if ( *(_QWORD *)(a1 + 104) )
    {
      CmpLightWeightCleanupModifyKeyDataUoW(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
      *(_QWORD *)(a1 + 104) = 0LL;
    }
    v14 = *(_QWORD *)(a1 + 112);
    if ( v14 )
    {
      CmpCleanupDiscardReplaceContext(v14, a3);
      CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 112));
      goto LABEL_21;
    }
  }
}
