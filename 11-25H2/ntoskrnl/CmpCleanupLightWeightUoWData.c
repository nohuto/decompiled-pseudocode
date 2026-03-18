/*
 * XREFs of CmpCleanupLightWeightUoWData @ 0x1409D92CC
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x1409D90CC (CmpCommitLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x1409D927C (CmpCleanupLightWeightPrepare.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140886480 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpFreeKeyByCell @ 0x140886C64 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x140886E8C (CmpFreeValue.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x1409DA09C (CmpLightWeightCleanupSetSecDescUoW.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x1409DA9B4 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1409DAE60 (CmpCleanupDiscardReplaceContext.c)
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

  if ( !*(_QWORD *)(a1 + 104) )
    return;
  v5 = *(_DWORD *)(a1 + 68);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 )
    {
LABEL_7:
      *(_QWORD *)(a1 + 104) = 0LL;
      return;
    }
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
        goto LABEL_7;
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
      CmpLightWeightCleanupSetValueKeyUoW(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), *(_DWORD **)(a1 + 104));
      v12 = *(unsigned int **)(a1 + 112);
      *(_QWORD *)(a1 + 104) = 0LL;
      if ( !v12 )
        return;
      v13 = *v12;
      if ( (_DWORD)v13 != -1 )
        CmpFreeValue(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), v13);
      CmpFreeTransientPoolWithTag(*(void **)(a1 + 112), 0x77554D43u);
LABEL_22:
      *(_QWORD *)(a1 + 112) = 0LL;
      return;
    }
  }
  else
  {
    CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 0);
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
    goto LABEL_22;
  }
}
