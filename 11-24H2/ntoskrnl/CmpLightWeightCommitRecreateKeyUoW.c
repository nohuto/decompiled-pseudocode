/*
 * XREFs of CmpLightWeightCommitRecreateKeyUoW @ 0x140A13CB8
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A02EF4 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086D654 (CmpFlushNotifiesOnKeyBodyList.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A144A0 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 */

void __fastcall CmpLightWeightCommitRecreateKeyUoW(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // rdi
  ULONG_PTR v9; // rdx
  __int64 CellFlat; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+44h] [rbp+Ch]

  v14 = -1;
  v15 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v7 = *(_QWORD *)(v4 + 32);
  v8 = *(_QWORD *)(v4 + 72);
  v9 = *(unsigned int *)(v8 + 40);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v7, v9, &v14);
  else
    CellFlat = HvpGetCellPaged(v7, v9, &v14);
  *(_QWORD *)(CellFlat + 4) = *a2;
  v11 = *a2;
  ++*(_QWORD *)(v8 + 304);
  *(_QWORD *)(v8 + 168) = v11;
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v7, (__int64)&v14);
  else
    HvpReleaseCellPaged(v7, &v14);
  LOBYTE(v13) = 1;
  CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(*(_QWORD *)(a1 + 48), v12, a3, v13);
  CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 48), 8, a3, 1);
}
