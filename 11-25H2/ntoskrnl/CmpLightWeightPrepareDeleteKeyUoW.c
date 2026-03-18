/*
 * XREFs of CmpLightWeightPrepareDeleteKeyUoW @ 0x1409D9E84
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1409D96AC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407D19C0 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpMarkKeyDirty @ 0x1408870F0 (CmpMarkKeyDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x140887DF8 (CmpRemoveSubKeyFromList.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpLightWeightCreateModificationData @ 0x1409DA5B8 (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x1409DA9B4 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1409DAE60 (CmpCleanupDiscardReplaceContext.c)
 */

__int64 __fastcall CmpLightWeightPrepareDeleteKeyUoW(ULONG_PTR *a1, __int64 a2)
{
  ULONG_PTR v2; // rax
  struct _PRIVILEGE_SET *v5; // rsi
  ULONG_PTR v6; // rbp
  _DWORD *v7; // rdi
  ULONG_PTR v8; // r12
  __int64 CellFlat; // rax
  int v10; // ebx
  __int64 v11; // rax
  int v13; // eax
  __int64 Pool; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v18; // [rsp+70h] [rbp+18h] BYREF

  v2 = a1[6];
  v17 = 0xFFFFFFFFLL;
  v5 = 0LL;
  v6 = *(_QWORD *)(v2 + 32);
  v7 = *(_DWORD **)(a1[10] + 104);
  v18 = v7;
  if ( v7 )
  {
    ++*v7;
  }
  else
  {
    v13 = CmpLightWeightCreateModificationData(a1, &v18);
    v7 = v18;
    v10 = v13;
    if ( v13 < 0 )
      goto LABEL_15;
  }
  v8 = *(unsigned int *)(a1[6] + 40);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v6, v8, &v17);
  else
    CellFlat = HvpGetCellPaged(v6, v8, &v17);
  if ( !CellFlat )
    goto LABEL_19;
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v6, &v17);
  else
    HvpReleaseCellPaged(v6, (unsigned int *)&v17);
  v10 = CmpMarkKeyDirty(v6, (unsigned int)v8, 0);
  if ( v10 < 0 )
    goto LABEL_15;
  v10 = HvpMarkCellDirty(v6, *(unsigned int *)(*(_QWORD *)(a1[6] + 72) + 40LL), 0);
  if ( v10 < 0 )
    goto LABEL_15;
  v11 = *(_QWORD *)(a1[6] + 192);
  if ( !v11 || *(_QWORD *)(v11 + 32) == v11 + 32 )
    goto LABEL_11;
  Pool = CmpAllocatePool(0x100uLL);
  v5 = (struct _PRIVILEGE_SET *)Pool;
  if ( !Pool )
  {
LABEL_19:
    v10 = -1073741670;
    goto LABEL_15;
  }
  *(_QWORD *)Pool = 0LL;
  v15 = Pool;
  *(_DWORD *)(Pool + 12) = 0;
  *(_QWORD *)(Pool + 24) = 0LL;
  *(_DWORD *)(Pool + 8) = -1073741823;
  v16 = (_QWORD *)(Pool + 16);
  v16[1] = v16;
  *v16 = v16;
  v10 = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(a1[6], v15);
  if ( v10 < 0 )
  {
LABEL_25:
    CmpCleanupDiscardReplaceContext(v5, a2);
    CmSiFreeMemory(v5);
    goto LABEL_15;
  }
LABEL_11:
  if ( CmpRemoveSubKeyFromList(v6, &v7[(v8 >> 31) + 3], v8) )
  {
    --v7[(v8 >> 31) + 1];
    v10 = 0;
    a1[13] = (ULONG_PTR)v7;
    a1[14] = (ULONG_PTR)v5;
    return (unsigned int)v10;
  }
  v10 = -1073741670;
  if ( v5 )
    goto LABEL_25;
LABEL_15:
  if ( v7 )
    CmpLightWeightCleanupModifyKeyDataUoW(v6);
  return (unsigned int)v10;
}
