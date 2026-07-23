/*
 * XREFs of CcAllocateVacbLevels @ 0x14047255C
 * Callers:
 *     CcSetVacbLargeOffset @ 0x140357260 (CcSetVacbLargeOffset.c)
 *     CcReferenceFileOffset @ 0x1404C8C90 (CcReferenceFileOffset.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402E2DD0 (ExAllocateFromNPagedLookasideList.c)
 *     CcFreeUnusedVacbLevels @ 0x1403579AC (CcFreeUnusedVacbLevels.c)
 */

char __fastcall CcAllocateVacbLevels(unsigned int a1, char a2, __int64 a3)
{
  char v6; // di
  _QWORD *v7; // rax
  _QWORD *v9; // rcx
  PVOID v10; // rax

  v6 = 0;
  while ( a1 > *(_DWORD *)(a3 + 24) )
  {
    v7 = ExAllocateFromNPagedLookasideList(&CcVacbLevelLookasideList);
    if ( !v7 )
      goto LABEL_4;
    v9 = *(_QWORD **)(a3 + 8);
    if ( *v9 != a3 )
      __fastfail(3u);
    *v7 = a3;
    v7[1] = v9;
    *v9 = v7;
    *(_QWORD *)(a3 + 8) = v7;
    ++*(_DWORD *)(a3 + 24);
  }
  if ( a2 )
  {
    if ( !*(_QWORD *)(a3 + 16) )
    {
      v10 = ExAllocateFromNPagedLookasideList(&CcVacbLevelWithBcbListHeadsLookasideList);
      *(_QWORD *)(a3 + 16) = v10;
      if ( !v10 )
      {
LABEL_4:
        CcFreeUnusedVacbLevels(a3);
        return v6;
      }
    }
  }
  return 1;
}
