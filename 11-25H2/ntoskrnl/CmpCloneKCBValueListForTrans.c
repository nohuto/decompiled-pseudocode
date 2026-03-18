/*
 * XREFs of CmpCloneKCBValueListForTrans @ 0x14086919C
 * Callers:
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 * Callees:
 *     HvDuplicateCell @ 0x140867688 (HvDuplicateCell.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpCloneKCBValueListForTrans(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v6; // r8
  ULONG_PTR v7; // rcx
  __int64 CellFlat; // rax
  __int64 v9; // rbp
  int v10; // edi
  __int64 v11; // rcx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  HvpGetCellContextInitialize(&v13);
  if ( *(_QWORD *)(a1 + 288) )
  {
    *v6 = 0;
    return 0;
  }
  v7 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v7, *(unsigned int *)(a1 + 40));
  else
    CellFlat = HvpGetCellPaged(v7);
  v9 = CellFlat;
  if ( *(_DWORD *)(CellFlat + 36) )
  {
    v10 = HvDuplicateCell(*(_QWORD *)(a1 + 32), *(unsigned int *)(CellFlat + 40), 1LL, 1, (_DWORD *)(a1 + 284));
    if ( v10 < 0 )
      goto LABEL_8;
    *(_DWORD *)(a1 + 280) = *(_DWORD *)(v9 + 36);
  }
  else
  {
    *(_DWORD *)(a1 + 280) = 0;
    *(_DWORD *)(a1 + 284) = -1;
  }
  v10 = 0;
  *a3 = 1;
  *(_QWORD *)(a1 + 288) = a2;
LABEL_8:
  v11 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v11, &v13);
  else
    HvpReleaseCellPaged(v11, &v13);
  return (unsigned int)v10;
}
