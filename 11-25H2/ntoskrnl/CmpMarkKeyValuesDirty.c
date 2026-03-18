/*
 * XREFs of CmpMarkKeyValuesDirty @ 0x140A72EF8
 * Callers:
 *     CmpFreeKeyValues @ 0x140A72E14 (CmpFreeKeyValues.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpMarkValueDataDirty @ 0x1408877FC (CmpMarkValueDataDirty.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpMarkKeyValuesDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 a3)
{
  bool v3; // zf
  __int64 v6; // r14
  int v7; // esi
  ULONG_PTR v8; // rdx
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // rdx
  __int64 CellFlat; // rax
  __int64 v12; // r13
  _BYTE *v13; // rdi
  __int64 *v15; // rdx
  ULONG_PTR v16; // rdx
  __int64 CellPaged; // rax
  __int64 i; // r12
  ULONG_PTR v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r13
  _QWORD v22[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v23; // [rsp+80h] [rbp+50h] BYREF
  __int64 v24; // [rsp+88h] [rbp+58h] BYREF

  v3 = (*(_BYTE *)(a3 + 2) & 2) == 0;
  v22[0] = 0xFFFFFFFFLL;
  v6 = 0LL;
  v23 = 0xFFFFFFFFLL;
  v24 = 0xFFFFFFFFLL;
  if ( !v3 )
    return 0;
  v7 = HvpMarkCellDirty(BugCheckParameter3, a2, 0);
  if ( v7 >= 0 )
  {
    v8 = *(unsigned int *)(a3 + 48);
    if ( (_DWORD)v8 == -1 || (v7 = HvpMarkCellDirty(BugCheckParameter3, v8, 0), v7 >= 0) )
    {
      v9 = *(unsigned int *)(a3 + 44);
      if ( (_DWORD)v9 != -1 )
      {
        v7 = HvpMarkCellDirty(BugCheckParameter3, v9, 0);
        if ( v7 < 0 )
          return (unsigned int)v7;
        v10 = *(unsigned int *)(a3 + 44);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(BugCheckParameter3, v10, &v23);
        else
          CellFlat = HvpGetCellPaged(BugCheckParameter3, v10, &v23);
        v12 = CellFlat;
        v7 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(CellFlat + 4), 0);
        v13 = (_BYTE *)(BugCheckParameter3 + 140);
        if ( v7 < 0 || (v7 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v12 + 8), 0), v7 < 0) )
        {
          if ( v12 )
          {
            v15 = &v23;
LABEL_28:
            if ( (*v13 & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, v15);
            else
              HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v15);
          }
LABEL_11:
          if ( v6 )
          {
            if ( (*v13 & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, v22);
            else
              HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v22);
          }
          return (unsigned int)v7;
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v23);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v23);
      }
      if ( *(_DWORD *)(a3 + 36) )
      {
        v7 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(a3 + 40), 0);
        if ( v7 < 0 )
          return (unsigned int)v7;
        v16 = *(unsigned int *)(a3 + 40);
        v13 = (_BYTE *)(BugCheckParameter3 + 140);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(BugCheckParameter3, v16, v22);
        else
          CellPaged = HvpGetCellPaged(BugCheckParameter3, v16, v22);
        v6 = CellPaged;
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a3 + 36); i = (unsigned int)(i + 1) )
        {
          v7 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v6 + 4 * i), 0);
          if ( v7 < 0 )
          {
            v13 = (_BYTE *)(BugCheckParameter3 + 140);
            goto LABEL_11;
          }
          v19 = *(unsigned int *)(v6 + 4 * i);
          if ( (*v13 & 1) != 0 )
            v20 = HvpGetCellFlat(BugCheckParameter3, v19, &v24);
          else
            v20 = HvpGetCellPaged(BugCheckParameter3, v19, &v24);
          v21 = v20;
          v7 = CmpMarkValueDataDirty(BugCheckParameter3, v20);
          if ( v7 < 0 )
          {
            if ( !v21 )
              goto LABEL_11;
            v15 = &v24;
            goto LABEL_28;
          }
          if ( (*v13 & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v24);
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v24);
        }
      }
      else
      {
        v13 = (_BYTE *)(BugCheckParameter3 + 140);
      }
      v7 = 0;
      goto LABEL_11;
    }
  }
  return (unsigned int)v7;
}
