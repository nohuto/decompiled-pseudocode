/*
 * XREFs of CmpLightWeightCommitSetValueKeyUoW @ 0x14088630C
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

__int64 __fastcall CmpLightWeightCommitSetValueKeyUoW(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v5; // rax
  ULONG_PTR v8; // rdi
  ULONG_PTR v9; // rdx
  __int64 CellFlat; // rax
  __int64 v11; // rsi
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  ULONG_PTR v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // r9d
  unsigned int v19; // [rsp+50h] [rbp+8h] BYREF
  int v20; // [rsp+54h] [rbp+Ch]

  v19 = -1;
  v3 = *(_QWORD *)(a1 + 104);
  v20 = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v8 = *(_QWORD *)(v5 + 32);
  v9 = *(unsigned int *)(v5 + 40);
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v8, v9, &v19);
  else
    CellFlat = HvpGetCellPaged(v8, v9, &v19);
  v11 = CellFlat;
  v12 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 112) + 8LL);
  if ( *(_DWORD *)(CellFlat + 60) < v12 )
  {
    *(_DWORD *)(CellFlat + 60) = v12;
    *(_WORD *)(*(_QWORD *)(a1 + 48) + 178LL) = *(_WORD *)(*(_QWORD *)(a1 + 112) + 8LL);
  }
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 12LL);
  if ( *(_DWORD *)(CellFlat + 64) < v13 )
  {
    *(_DWORD *)(CellFlat + 64) = v13;
    *(_DWORD *)(*(_QWORD *)(a1 + 48) + 180LL) = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 12LL);
  }
  *(_QWORD *)(CellFlat + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  v14 = *(unsigned int *)(*(_QWORD *)(a1 + 112) + 4LL);
  if ( (_DWORD)v14 != -1 )
    CmpFreeValue(v8, v14);
  CmpFreeTransientPoolWithTag(*(void **)(a1 + 112), 0x77554D43u);
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( *(_DWORD *)v3 == 1 )
  {
    v15 = *(_QWORD *)(v11 + 36);
    *(_QWORD *)(v11 + 36) = *(_QWORD *)(v3 + 4);
    *(_QWORD *)(v3 + 4) = v15;
    CmpCleanUpKcbCachedSymlink(*(_QWORD *)(a1 + 48), a3);
    v16 = *(_QWORD *)(a1 + 48);
    v17 = *(_DWORD *)(v11 + 40);
    *(_DWORD *)(v16 + 96) = *(_DWORD *)(v11 + 36);
    *(_DWORD *)(v16 + 100) = v17;
  }
  CmpLightWeightCleanupSetValueKeyUoW(v8, v3);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    return HvpReleaseCellFlat(v8, &v19);
  else
    return HvpReleaseCellPaged(v8, &v19);
}
