/*
 * XREFs of CmpLightWeightCommitSetValueKeyUoW @ 0x140A23EA0
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A02EF4 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1408807B0 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpFreeValue @ 0x1408847DC (CmpFreeValue.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140A24014 (CmpLightWeightCleanupSetValueKeyUoW.c)
 */

__int64 __fastcall CmpLightWeightCommitSetValueKeyUoW(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  ULONG_PTR v6; // rdi
  ULONG_PTR v7; // rdx
  __int64 CellFlat; // rax
  __int64 v9; // rsi
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  ULONG_PTR v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // r9d
  unsigned int v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+54h] [rbp+Ch]

  v17 = -1;
  v2 = *(_QWORD *)(a1 + 104);
  v18 = 0;
  v3 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v3 + 32);
  v7 = *(unsigned int *)(v3 + 40);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v6, v7, &v17);
  else
    CellFlat = HvpGetCellPaged(v6, v7, &v17);
  v9 = CellFlat;
  v10 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 112) + 8LL);
  if ( *(_DWORD *)(CellFlat + 60) < v10 )
  {
    *(_DWORD *)(CellFlat + 60) = v10;
    *(_WORD *)(*(_QWORD *)(a1 + 48) + 178LL) = *(_WORD *)(*(_QWORD *)(a1 + 112) + 8LL);
  }
  v11 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 12LL);
  if ( *(_DWORD *)(CellFlat + 64) < v11 )
  {
    *(_DWORD *)(CellFlat + 64) = v11;
    *(_DWORD *)(*(_QWORD *)(a1 + 48) + 180LL) = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 12LL);
  }
  *(_QWORD *)(CellFlat + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  v12 = *(unsigned int *)(*(_QWORD *)(a1 + 112) + 4LL);
  if ( (_DWORD)v12 != -1 )
    CmpFreeValue(v6, v12);
  CmpFreeTransientPoolWithTag(*(void **)(a1 + 112), 0x77554D43u);
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( *(_DWORD *)v2 == 1 )
  {
    v13 = *(_QWORD *)(v9 + 36);
    *(_QWORD *)(v9 + 36) = *(_QWORD *)(v2 + 4);
    *(_QWORD *)(v2 + 4) = v13;
    CmpCleanUpKcbCachedSymlink(*(_QWORD *)(a1 + 48));
    v14 = *(_QWORD *)(a1 + 48);
    v15 = *(_DWORD *)(v9 + 40);
    *(_DWORD *)(v14 + 96) = *(_DWORD *)(v9 + 36);
    *(_DWORD *)(v14 + 100) = v15;
  }
  CmpLightWeightCleanupSetValueKeyUoW(v6, v2);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    return HvpReleaseCellFlat(v6, (__int64)&v17);
  else
    return HvpReleaseCellPaged(v6, &v17);
}
