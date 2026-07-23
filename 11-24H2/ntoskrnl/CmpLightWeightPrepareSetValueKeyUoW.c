/*
 * XREFs of CmpLightWeightPrepareSetValueKeyUoW @ 0x1409F7BB0
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A02EF4 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     CmpSwapValueInList @ 0x140492558 (CmpSwapValueInList.c)
 *     CmpFindNameInListWithStatus @ 0x140870840 (CmpFindNameInListWithStatus.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetValueData @ 0x14087A8E0 (CmpGetValueData.c)
 *     CmpMarkValueDataDirty @ 0x1408840F8 (CmpMarkValueDataDirty.c)
 *     CmpFreeValue @ 0x1408847DC (CmpFreeValue.c)
 *     CmpAddValueToListEx @ 0x14088522C (CmpAddValueToListEx.c)
 *     CmpAddValueKeyNew @ 0x140885910 (CmpAddValueKeyNew.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpInitializeValueNameString @ 0x1409F82CC (CmpInitializeValueNameString.c)
 *     CmpLightWeightCreateSetValueData @ 0x1409F8474 (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x1409F85C4 (CmpLightWeightUpdateSharedSetValueData.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetValueKeyUoW(__int64 a1)
{
  _DWORD *v1; // rsi
  __int64 v2; // rax
  ULONG_PTR v4; // rdi
  unsigned int *Pool; // rax
  unsigned int *v6; // r15
  ULONG_PTR v7; // rdx
  __int64 CellFlat; // rax
  ULONG_PTR v9; // r13
  unsigned int v10; // eax
  unsigned int v11; // r12d
  void *v12; // rax
  int v13; // ebx
  unsigned int v15; // r12d
  unsigned int v16; // esi
  int v17; // eax
  __int64 v18; // r13
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r9
  ULONG_PTR v22; // rdx
  __int64 CellPaged; // rax
  unsigned int *v24; // rsi
  int NameInListWithStatus; // ecx
  unsigned int *v26; // [rsp+20h] [rbp-69h]
  size_t v27; // [rsp+20h] [rbp-69h]
  unsigned int v28[2]; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v29[2]; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v30[2]; // [rsp+50h] [rbp-39h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-31h] BYREF
  _DWORD *v32; // [rsp+60h] [rbp-29h] BYREF
  __int64 v33; // [rsp+68h] [rbp-21h] BYREF
  __int64 v34; // [rsp+70h] [rbp-19h] BYREF
  PVOID Pool2; // [rsp+78h] [rbp-11h] BYREF
  PVOID P; // [rsp+80h] [rbp-9h]
  __int128 v37; // [rsp+88h] [rbp-1h] BYREF
  __int64 v38; // [rsp+98h] [rbp+Fh]
  char v39; // [rsp+F0h] [rbp+67h]
  __int64 v40; // [rsp+F8h] [rbp+6Fh] BYREF
  int v41; // [rsp+100h] [rbp+77h] BYREF
  __int64 v42; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = *(_DWORD **)(a1 + 104);
  v2 = *(_QWORD *)(a1 + 48);
  v30[0] = -1;
  v30[1] = 0;
  v29[0] = -1;
  v4 = *(_QWORD *)(v2 + 32);
  v29[1] = 0;
  v33 = 0xFFFFFFFFLL;
  LODWORD(v42) = 0;
  LODWORD(BugCheckParameter4) = 0;
  v28[0] = -1;
  v28[1] = 0;
  P = 0LL;
  v34 = 0LL;
  v39 = 0;
  v41 = -1;
  LOBYTE(v40) = 0;
  v38 = 0LL;
  v32 = v1;
  v37 = 0LL;
  if ( !v1 )
  {
    v13 = CmpLightWeightCreateSetValueData(a1, &v32);
    if ( v13 < 0 )
      return (unsigned int)v13;
    v1 = v32;
    CmpLightWeightUpdateSharedSetValueData(v32, *(_QWORD *)(a1 + 48));
    --*v1;
  }
  Pool = (unsigned int *)CmpAllocatePool(0x100uLL, 0x10uLL, 0x77554D43u);
  v6 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  *Pool = -1;
  Pool[1] = -1;
  v7 = *(unsigned int *)(a1 + 92);
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v4, v7, v30);
  else
    CellFlat = HvpGetCellPaged(v4, v7, v30);
  v9 = CellFlat;
  if ( !CellFlat )
  {
    v13 = -1073741670;
LABEL_63:
    CmpFreeTransientPoolWithTag(v6, 0x77554D43u);
    return (unsigned int)v13;
  }
  v10 = *(_DWORD *)(CellFlat + 4);
  v11 = v10 + 0x80000000;
  if ( v10 < 0x80000000 )
    v11 = v10;
  LODWORD(v32) = v11;
  LODWORD(Pool2) = v11;
  if ( v11 )
  {
    if ( v10 < 0x80000000 )
    {
      if ( !CmpGetValueData(
              v4,
              *(unsigned int *)(a1 + 92),
              v9,
              (unsigned int *)&Pool2,
              (__int64)&v34,
              (__int64)&v40,
              &v33) )
      {
        v13 = -1073741670;
        goto LABEL_14;
      }
      v11 = (unsigned int)Pool2;
      v12 = (void *)v34;
      LODWORD(v32) = (_DWORD)Pool2;
      v39 = 1;
    }
    else
    {
      v12 = (void *)(v9 + 8);
    }
    P = v12;
  }
  v13 = HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 0);
  if ( v13 >= 0 )
  {
    v22 = *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL);
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v4, v22, v29);
    else
      CellPaged = HvpGetCellPaged(v4, v22, v29);
    v34 = CellPaged;
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 31;
    Pool2 = (PVOID)ExAllocatePool2(0x100uLL, 0x8000uLL, 0x62534D43u);
    if ( !Pool2 )
    {
      v13 = -1073741670;
LABEL_40:
      if ( v34 )
      {
        if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v4, (__int64)v29);
        else
          HvpReleaseCellPaged(v4, v29);
      }
      goto LABEL_13;
    }
    CmpInitializeValueNameString(v9);
    v24 = v1 + 1;
    NameInListWithStatus = CmpFindNameInListWithStatus(
                             v4,
                             v24,
                             (unsigned __int16 *)&v37,
                             0,
                             (unsigned int *)&v42,
                             &BugCheckParameter4);
    if ( (int)(NameInListWithStatus + 0x80000000) >= 0 && NameInListWithStatus != -1073741772 )
    {
      v13 = -1073741670;
LABEL_39:
      ExFreePoolWithTag(Pool2, 0);
      goto LABEL_40;
    }
    LODWORD(v27) = v11;
    v13 = CmpAddValueKeyNew(v4, (unsigned __int16 *)&v37, *(_DWORD *)(v9 + 12), P, v27, *(_DWORD *)(a1 + 72), &v41);
    if ( v13 < 0 )
      goto LABEL_57;
    v15 = BugCheckParameter4;
    if ( (_DWORD)BugCheckParameter4 == -1 )
    {
      v26 = v24;
      v16 = v41;
      v17 = CmpAddValueToListEx(v4, v41, v42, *(unsigned int *)(a1 + 72), v26);
      v18 = v38;
      goto LABEL_32;
    }
    v13 = HvpMarkCellDirty(v4, (unsigned int)BugCheckParameter4, 0);
    if ( v13 >= 0 )
    {
      if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
        v20 = HvpGetCellFlat(v4, v15, v28);
      else
        v20 = HvpGetCellPaged(v4, v15, v28);
      v18 = v20;
      if ( v20 )
      {
        v13 = CmpMarkValueDataDirty(v4, v20);
        if ( v13 < 0 )
        {
          v16 = v41;
LABEL_35:
          if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v4, (__int64)v28);
          else
            HvpReleaseCellPaged(v4, v28);
LABEL_37:
          if ( v16 != -1 )
            CmpFreeValue(v4, v16);
          goto LABEL_39;
        }
        v21 = (__int64)v24;
        v16 = v41;
        v17 = CmpSwapValueInList(v4, v41, v42, v21);
LABEL_32:
        v13 = v17;
        if ( v17 >= 0 )
        {
          v13 = 0;
          *((_WORD *)v6 + 4) = v37;
          v19 = (unsigned int)v32;
          *v6 = v16;
          v6[3] = v19;
          v6[1] = v15;
          *(_QWORD *)(a1 + 112) = v6;
          v6 = 0LL;
          v16 = -1;
        }
        if ( !v18 )
          goto LABEL_37;
        goto LABEL_35;
      }
      v13 = -1073741670;
    }
LABEL_57:
    v16 = v41;
    goto LABEL_37;
  }
LABEL_13:
  if ( v39 && P )
  {
    if ( (_BYTE)v40 )
    {
      ExFreePoolWithTag(P, 0);
    }
    else if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    {
      HvpReleaseCellFlat(v4, (__int64)&v33);
    }
    else
    {
      HvpReleaseCellPaged(v4, (unsigned int *)&v33);
    }
  }
LABEL_14:
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v4, (__int64)v30);
  else
    HvpReleaseCellPaged(v4, v30);
  if ( v6 )
    goto LABEL_63;
  return (unsigned int)v13;
}
