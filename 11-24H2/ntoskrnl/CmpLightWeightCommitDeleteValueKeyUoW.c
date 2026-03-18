/*
 * XREFs of CmpLightWeightCommitDeleteValueKeyUoW @ 0x140A2F314
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A069C4 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14087C900 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpFreeValue @ 0x14088092C (CmpFreeValue.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140A2F5D4 (CmpLightWeightCleanupSetValueKeyUoW.c)
 */

__int64 __fastcall CmpLightWeightCommitDeleteValueKeyUoW(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rdx
  __int64 CellFlat; // rax
  __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // r8d
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+54h] [rbp+Ch]

  v14 = -1;
  v2 = *(_QWORD *)(a1 + 104);
  v15 = 0;
  v3 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v3 + 32);
  v7 = *(unsigned int *)(v3 + 40);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v6, v7, &v14);
  else
    CellFlat = HvpGetCellPaged(v6, v7, &v14);
  v9 = CellFlat;
  CmpFreeValue(v6, *(unsigned int *)(*(_QWORD *)(a1 + 112) + 4LL));
  CmpFreeTransientPoolWithTag(*(void **)(a1 + 112), 0x77554D43u);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(v9 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  if ( *(_DWORD *)v2 == 1 )
  {
    v11 = *(_QWORD *)(v9 + 36);
    *(_QWORD *)(v9 + 36) = *(_QWORD *)(v2 + 4);
    *(_QWORD *)(v2 + 4) = v11;
    CmpCleanUpKcbCachedSymlink(*(_QWORD *)(a1 + 48));
    v12 = *(_QWORD *)(a1 + 48);
    v13 = *(_DWORD *)(v9 + 40);
    *(_DWORD *)(v12 + 96) = *(_DWORD *)(v9 + 36);
    *(_DWORD *)(v12 + 100) = v13;
    if ( !*(_DWORD *)(v9 + 36) )
    {
      *(_QWORD *)(v9 + 60) = 0LL;
      *(_WORD *)(*(_QWORD *)(a1 + 48) + 178LL) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 180LL) = 0;
    }
  }
  CmpLightWeightCleanupSetValueKeyUoW(v6, v2);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    return HvpReleaseCellFlat(v6, (__int64)&v14);
  else
    return HvpReleaseCellPaged(v6, &v14);
}
