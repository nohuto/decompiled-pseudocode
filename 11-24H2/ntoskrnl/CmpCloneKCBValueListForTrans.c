/*
 * XREFs of CmpCloneKCBValueListForTrans @ 0x140A4187C
 * Callers:
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     HvDuplicateCell @ 0x140A41968 (HvDuplicateCell.c)
 */

__int64 __fastcall CmpCloneKCBValueListForTrans(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v6; // r8
  ULONG_PTR v7; // rcx
  ULONG_PTR v8; // rdx
  __int64 CellFlat; // rax
  __int64 v10; // rbp
  int v11; // edi
  __int64 v12; // rcx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  HvpGetCellContextInitialize(&v14);
  if ( *(_QWORD *)(a1 + 288) )
  {
    *v6 = 0;
    return 0;
  }
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(unsigned int *)(a1 + 40);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v7, v8, &v14);
  else
    CellFlat = HvpGetCellPaged(v7, v8, &v14);
  v10 = CellFlat;
  if ( *(_DWORD *)(CellFlat + 36) )
  {
    v11 = HvDuplicateCell(*(_QWORD *)(a1 + 32), a1 + 284);
    if ( v11 < 0 )
      goto LABEL_8;
    *(_DWORD *)(a1 + 280) = *(_DWORD *)(v10 + 36);
  }
  else
  {
    *(_DWORD *)(a1 + 280) = 0;
    *(_DWORD *)(a1 + 284) = -1;
  }
  v11 = 0;
  *a3 = 1;
  *(_QWORD *)(a1 + 288) = a2;
LABEL_8:
  v12 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v12, (__int64)&v14);
  else
    HvpReleaseCellPaged(v12, (unsigned int *)&v14);
  return (unsigned int)v11;
}
