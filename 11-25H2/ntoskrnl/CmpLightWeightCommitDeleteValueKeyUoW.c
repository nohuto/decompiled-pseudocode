/*
 * XREFs of CmpLightWeightCommitDeleteValueKeyUoW @ 0x1408861C0
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1409D96AC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14087DD88 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140886480 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpFreeValue @ 0x140886E8C (CmpFreeValue.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpLightWeightCommitDeleteValueKeyUoW(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v5; // rax
  ULONG_PTR v8; // rbx
  ULONG_PTR v9; // rdx
  __int64 CellFlat; // rax
  __int64 v11; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // r8d
  unsigned int v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+54h] [rbp+Ch]

  v16 = -1;
  v3 = *(_QWORD *)(a1 + 104);
  v17 = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v8 = *(_QWORD *)(v5 + 32);
  v9 = *(unsigned int *)(v5 + 40);
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v8, v9, &v16);
  else
    CellFlat = HvpGetCellPaged(v8, v9, &v16);
  v11 = CellFlat;
  CmpFreeValue(v8, *(unsigned int *)(*(_QWORD *)(a1 + 112) + 4LL));
  CmpFreeTransientPoolWithTag(*(void **)(a1 + 112), 0x77554D43u);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(v11 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  if ( *(_DWORD *)v3 == 1 )
  {
    v13 = *(_QWORD *)(v11 + 36);
    *(_QWORD *)(v11 + 36) = *(_QWORD *)(v3 + 4);
    *(_QWORD *)(v3 + 4) = v13;
    CmpCleanUpKcbCachedSymlink(*(_QWORD *)(a1 + 48), a3);
    v14 = *(_QWORD *)(a1 + 48);
    v15 = *(_DWORD *)(v11 + 40);
    *(_DWORD *)(v14 + 96) = *(_DWORD *)(v11 + 36);
    *(_DWORD *)(v14 + 100) = v15;
    if ( !*(_DWORD *)(v11 + 36) )
    {
      *(_QWORD *)(v11 + 60) = 0LL;
      *(_WORD *)(*(_QWORD *)(a1 + 48) + 178LL) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 180LL) = 0;
    }
  }
  CmpLightWeightCleanupSetValueKeyUoW(v8, v3);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    return HvpReleaseCellFlat(v8, &v16);
  else
    return HvpReleaseCellPaged(v8, &v16);
}
