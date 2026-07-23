/*
 * XREFs of CmpLightWeightCommitDeleteKeyUoW @ 0x140A14304
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A02EF4 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086D654 (CmpFlushNotifiesOnKeyBodyList.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpMarkKeyUnbacked @ 0x14087F7A8 (CmpMarkKeyUnbacked.c)
 *     CmpCleanUpSubKeyInfo @ 0x140880020 (CmpCleanUpSubKeyInfo.c)
 *     CmpFreeKeyByCell @ 0x1408842D0 (CmpFreeKeyByCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpDiscardKcb @ 0x140965058 (CmpDiscardKcb.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A144A0 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140A14BD8 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightSwapParentSubKeyList @ 0x140A14C30 (CmpLightWeightSwapParentSubKeyList.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140A14CEC (CmpCleanupDiscardReplaceContext.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A14D64 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 */

__int64 __fastcall CmpLightWeightCommitDeleteKeyUoW(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  _DWORD *v5; // r12
  ULONG_PTR v8; // rbx
  ULONG_PTR v9; // rdx
  __int64 v10; // rsi
  ULONG_PTR v11; // rdx
  __int64 CellFlat; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdx
  ULONG_PTR v17; // rcx
  __int64 result; // rax
  int v19; // r8d
  unsigned int v20[2]; // [rsp+30h] [rbp-49h] BYREF
  int v21; // [rsp+38h] [rbp-41h] BYREF
  __int64 v22; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+50h] [rbp-29h] BYREF
  int *v24; // [rsp+70h] [rbp-9h]
  __int64 v25; // [rsp+78h] [rbp-1h]
  __int64 *v26; // [rsp+80h] [rbp+7h]
  __int64 v27; // [rsp+88h] [rbp+Fh]

  v3 = *(_QWORD *)(a1 + 48);
  v5 = *(_DWORD **)(a1 + 104);
  v20[0] = -1;
  v8 = *(_QWORD *)(v3 + 32);
  v9 = *(unsigned int *)(v3 + 40);
  v20[1] = 0;
  if ( (int)CmpFreeKeyByCell(v8, v9, 0) < 0
    && (unsigned int)dword_140E09F58 > 5
    && tlgKeywordOn((__int64)&dword_140E09F58, 0x200000000000LL) )
  {
    v21 = v19;
    v25 = 4LL;
    v24 = &v21;
    v22 = 0x1000000LL;
    v26 = &v22;
    v27 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09F58, (unsigned __int8 *)&byte_1400566DF, 0LL, 0LL, 4u, &v23);
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL);
  if ( *v5 == 1 )
    CmpLightWeightSwapParentSubKeyList(v8, *(unsigned int *)(v10 + 40), v5);
  CmpCleanUpSubKeyInfo(v10, 1);
  v11 = *(unsigned int *)(v10 + 40);
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v8, v11, v20);
  else
    CellFlat = HvpGetCellPaged(v8, v11, v20);
  *(_WORD *)(v10 + 176) = *(_WORD *)(CellFlat + 52);
  *(_QWORD *)(CellFlat + 4) = *a2;
  v13 = *a2;
  ++*(_QWORD *)(v10 + 304);
  *(_QWORD *)(v10 + 168) = v13;
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v8, (__int64)v20);
  else
    HvpReleaseCellPaged(v8, v20);
  LOBYTE(v15) = 1;
  CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(*(_QWORD *)(a1 + 48), v14, a3, v15);
  CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 48), 8, a3, 1);
  CmpMarkKeyUnbacked(*(_QWORD *)(a1 + 48), a3);
  v16 = *(_QWORD *)(a1 + 112);
  v17 = *(_QWORD *)(a1 + 48);
  if ( v16 )
  {
    CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v17, v16, a3);
    CmpCleanupDiscardReplaceContext(*(_QWORD *)(a1 + 112), a3);
    CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 112));
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  else
  {
    CmpDiscardKcb(v17);
  }
  result = CmpLightWeightCleanupModifyKeyDataUoW(v8);
  *(_QWORD *)(a1 + 104) = 0LL;
  return result;
}
