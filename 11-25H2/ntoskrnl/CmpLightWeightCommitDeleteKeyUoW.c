/*
 * XREFs of CmpLightWeightCommitDeleteKeyUoW @ 0x1409DA0D4
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1409D96AC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086DF70 (CmpFlushNotifiesOnKeyBodyList.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpMarkKeyUnbacked @ 0x140885038 (CmpMarkKeyUnbacked.c)
 *     CmpCleanUpSubKeyInfo @ 0x1408860F8 (CmpCleanUpSubKeyInfo.c)
 *     CmpFreeKeyByCell @ 0x140886C64 (CmpFreeKeyByCell.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x1409DA27C (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x1409DA9B4 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightSwapParentSubKeyList @ 0x1409DAA0C (CmpLightWeightSwapParentSubKeyList.c)
 *     CmpDiscardKcb @ 0x1409DAB50 (CmpDiscardKcb.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1409DAE60 (CmpCleanupDiscardReplaceContext.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1409DAED8 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 */

__int64 __fastcall CmpLightWeightCommitDeleteKeyUoW(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  _DWORD *v5; // r12
  ULONG_PTR v8; // rbx
  __int64 v9; // rsi
  ULONG_PTR v10; // rdx
  __int64 CellFlat; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  ULONG_PTR v15; // rcx
  __int64 result; // rax
  int v17; // r8d
  __int64 v18; // [rsp+30h] [rbp-49h] BYREF
  int v19; // [rsp+38h] [rbp-41h] BYREF
  __int64 v20; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+50h] [rbp-29h] BYREF
  int *v22; // [rsp+70h] [rbp-9h]
  __int64 v23; // [rsp+78h] [rbp-1h]
  __int64 *v24; // [rsp+80h] [rbp+7h]
  __int64 v25; // [rsp+88h] [rbp+Fh]

  v3 = *(_QWORD *)(a1 + 48);
  v5 = *(_DWORD **)(a1 + 104);
  v18 = 0xFFFFFFFFLL;
  v8 = *(_QWORD *)(v3 + 32);
  if ( (int)CmpFreeKeyByCell(v8, *(unsigned int *)(v3 + 40), 0) < 0
    && (unsigned int)dword_140E09E08 > 5
    && tlgKeywordOn((__int64)&dword_140E09E08, 0x200000000000LL) )
  {
    v19 = v17;
    v23 = 4LL;
    v22 = &v19;
    v20 = 0x1000000LL;
    v24 = &v20;
    v25 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09E08, (unsigned __int8 *)byte_1400547BB, 0LL, 0LL, 4u, &v21);
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL);
  if ( *v5 == 1 )
    CmpLightWeightSwapParentSubKeyList(v8, *(unsigned int *)(v9 + 40), v5);
  CmpCleanUpSubKeyInfo(v9, 1);
  v10 = *(unsigned int *)(v9 + 40);
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v8, v10, &v18);
  else
    CellFlat = HvpGetCellPaged(v8, v10, &v18);
  *(_WORD *)(v9 + 176) = *(_WORD *)(CellFlat + 52);
  *(_QWORD *)(CellFlat + 4) = *a2;
  v12 = *a2;
  ++*(_QWORD *)(v9 + 304);
  *(_QWORD *)(v9 + 168) = v12;
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v8, &v18);
  else
    HvpReleaseCellPaged(v8, (unsigned int *)&v18);
  LOBYTE(v14) = 1;
  CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(*(_QWORD *)(a1 + 48), v13, a3, v14);
  CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 48), 8LL, a3, 1);
  CmpMarkKeyUnbacked(*(_QWORD *)(a1 + 48), a3);
  v15 = *(_QWORD *)(a1 + 48);
  if ( *(_QWORD *)(a1 + 112) )
  {
    CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v15);
    CmpCleanupDiscardReplaceContext(*(_QWORD *)(a1 + 112), a3);
    CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 112));
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  else
  {
    CmpDiscardKcb(v15);
  }
  result = CmpLightWeightCleanupModifyKeyDataUoW(v8);
  *(_QWORD *)(a1 + 104) = 0LL;
  return result;
}
