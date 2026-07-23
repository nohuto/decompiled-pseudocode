/*
 * XREFs of CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1409F8060
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A02EF4 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     CmpFindNameInListWithStatus @ 0x140870840 (CmpFindNameInListWithStatus.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpMarkValueDataDirty @ 0x1408840F8 (CmpMarkValueDataDirty.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpInitializeValueNameString @ 0x1409F82CC (CmpInitializeValueNameString.c)
 *     CmpRemoveValueFromList @ 0x1409F835C (CmpRemoveValueFromList.c)
 *     CmpLightWeightCreateSetValueData @ 0x1409F8474 (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x1409F85C4 (CmpLightWeightUpdateSharedSetValueData.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpLightWeightPrepareDeleteValueKeyUoW(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 v2; // rax
  ULONG_PTR v4; // rdi
  _DWORD *Pool; // rax
  _DWORD *v6; // rsi
  ULONG_PTR v7; // rdx
  __int64 CellFlat; // rax
  ULONG_PTR v9; // r15
  void *Pool2; // r13
  int NameInListWithStatus; // eax
  unsigned int v12; // r15d
  __int64 CellPaged; // rax
  __int64 v14; // r12
  int v15; // ebx
  _DWORD *v17; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int16 v18[16]; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v21; // [rsp+B0h] [rbp+58h] BYREF
  int v22; // [rsp+B4h] [rbp+5Ch]
  unsigned int v23; // [rsp+B8h] [rbp+60h] BYREF
  int v24; // [rsp+BCh] [rbp+64h]

  v1 = *(_DWORD **)(a1 + 104);
  v2 = *(_QWORD *)(a1 + 48);
  v23 = -1;
  v24 = 0;
  LODWORD(v20) = 0;
  v4 = *(_QWORD *)(v2 + 32);
  LODWORD(BugCheckParameter4) = 0;
  v21 = -1;
  v22 = 0;
  v17 = v1;
  *(_OWORD *)v18 = 0LL;
  if ( !v1 )
  {
    v15 = CmpLightWeightCreateSetValueData(a1, &v17);
    if ( v15 < 0 )
      return (unsigned int)v15;
    v1 = v17;
    CmpLightWeightUpdateSharedSetValueData(v17, *(_QWORD *)(a1 + 48));
    --*v1;
  }
  Pool = (_DWORD *)CmpAllocatePool(0x100uLL, 0x10uLL, 0x77554D43u);
  v6 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  *Pool = -1;
  Pool[1] = -1;
  v7 = *(unsigned int *)(a1 + 88);
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v4, v7, &v23);
  else
    CellFlat = HvpGetCellPaged(v4, v7, &v23);
  v9 = CellFlat;
  if ( !CellFlat )
  {
    v15 = -1073741670;
LABEL_33:
    CmpFreeTransientPoolWithTag(v6, 0x77554D43u);
    return (unsigned int)v15;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x8000uLL, 0x62534D43u);
  if ( Pool2
    && ((CmpInitializeValueNameString(v9),
         v17 = v1 + 1,
         NameInListWithStatus = CmpFindNameInListWithStatus(
                                  v4,
                                  v1 + 1,
                                  v18,
                                  0,
                                  (unsigned int *)&v20,
                                  &BugCheckParameter4),
         (int)(NameInListWithStatus + 0x80000000) < 0)
     || NameInListWithStatus == -1073741772) )
  {
    v12 = BugCheckParameter4;
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v4, (unsigned int)BugCheckParameter4, &v21);
    else
      CellPaged = HvpGetCellPaged(v4, BugCheckParameter4, &v21);
    v14 = CellPaged;
    v15 = CmpMarkValueDataDirty(v4, CellPaged);
    if ( v15 >= 0 )
    {
      v15 = HvpMarkCellDirty(v4, v12, 0);
      if ( v15 >= 0 )
      {
        v15 = CmpRemoveValueFromList(v4);
        if ( v15 >= 0 )
        {
          v6[1] = v12;
          v15 = 0;
          *(_QWORD *)(a1 + 112) = v6;
          v6 = 0LL;
        }
      }
    }
    if ( v14 )
    {
      if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v4, (__int64)&v21);
      else
        HvpReleaseCellPaged(v4, &v21);
    }
  }
  else
  {
    v15 = -1073741670;
  }
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v4, (__int64)&v23);
  else
    HvpReleaseCellPaged(v4, &v23);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v6 )
    goto LABEL_33;
  return (unsigned int)v15;
}
