/*
 * XREFs of CmpLightWeightPrepareDeleteKeyUoW @ 0x140A13D80
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A02EF4 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407E17F0 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpMarkKeyDirty @ 0x1408839E4 (CmpMarkKeyDirty.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpRemoveSubKeyFromList @ 0x140A13FA8 (CmpRemoveSubKeyFromList.c)
 *     CmpLightWeightCreateModificationData @ 0x140A147DC (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140A14BD8 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140A14CEC (CmpCleanupDiscardReplaceContext.c)
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
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+64h] [rbp+Ch]
  _DWORD *v19; // [rsp+70h] [rbp+18h] BYREF

  v2 = a1[6];
  v17 = -1;
  v18 = 0;
  v5 = 0LL;
  v6 = *(_QWORD *)(v2 + 32);
  v7 = *(_DWORD **)(a1[10] + 104);
  v19 = v7;
  if ( v7 )
  {
    ++*v7;
  }
  else
  {
    v13 = CmpLightWeightCreateModificationData(a1, &v19);
    v7 = v19;
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
    HvpReleaseCellFlat(v6, (__int64)&v17);
  else
    HvpReleaseCellPaged(v6, &v17);
  v10 = CmpMarkKeyDirty(v6, (unsigned int)v8, 0);
  if ( v10 < 0 )
    goto LABEL_15;
  v10 = HvpMarkCellDirty(v6, *(unsigned int *)(*(_QWORD *)(a1[6] + 72) + 40LL), 0);
  if ( v10 < 0 )
    goto LABEL_15;
  v11 = *(_QWORD *)(a1[6] + 192);
  if ( !v11 || *(_QWORD *)(v11 + 32) == v11 + 32 )
    goto LABEL_11;
  Pool = CmpAllocatePool(0x100uLL, 0x20uLL, 0x31374D43u);
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
  if ( (unsigned __int8)CmpRemoveSubKeyFromList(v6) )
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
