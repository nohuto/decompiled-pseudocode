/*
 * XREFs of CmpMergeKeyValues @ 0x1407E24E4
 * Callers:
 *     CmSaveMergedKeys @ 0x1407CE550 (CmSaveMergedKeys.c)
 *     CmpCopySyncTree2 @ 0x1408877A4 (CmpCopySyncTree2.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpSyncKeyValues @ 0x1407E2FD4 (CmpSyncKeyValues.c)
 *     CmpFindNameInListWithStatus @ 0x140870840 (CmpFindNameInListWithStatus.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpAddValueToListEx @ 0x14088522C (CmpAddValueToListEx.c)
 *     CmpCopyValue @ 0x140885564 (CmpCopyValue.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpInitializeValueNameString @ 0x1409F82CC (CmpInitializeValueNameString.c)
 */

__int64 __fastcall CmpMergeKeyValues(
        ULONG_PTR BugCheckParameter3,
        int a2,
        _DWORD *a3,
        ULONG_PTR a4,
        int a5,
        __int64 a6)
{
  __int64 v6; // rax
  unsigned int v7; // esi
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int64 v12; // r13
  int NameInListWithStatus; // ebx
  struct _PRIVILEGE_SET *Pool; // r12
  __int64 CellFlat; // rax
  __int64 v16; // r14
  ULONG_PTR CellPaged; // rax
  __int16 v19; // [rsp+30h] [rbp-40h]
  __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v21[2]; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v22[2]; // [rsp+50h] [rbp-20h] BYREF
  __int128 v23; // [rsp+58h] [rbp-18h]
  __int64 v24; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v25; // [rsp+C0h] [rbp+50h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+C8h] [rbp+58h]

  BugCheckParameter3a = a4;
  LODWORD(v24) = a2;
  v6 = a6;
  v7 = 0;
  v22[1] = 0;
  LODWORD(v25) = 0;
  v22[0] = -1;
  v21[0] = -1;
  v10 = a3[15];
  LODWORD(v24) = 0;
  v21[1] = 0;
  v23 = 0LL;
  if ( *(_DWORD *)(a6 + 60) < v10 )
    *(_DWORD *)(a6 + 60) = v10;
  v11 = a3[16];
  if ( *(_DWORD *)(v6 + 64) < v11 )
    *(_DWORD *)(v6 + 64) = v11;
  v12 = v6 + 36;
  if ( *(_DWORD *)(v6 + 36) )
  {
    LODWORD(a6) = a3[9];
    if ( !(_DWORD)a6 )
      return 0;
    Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL, 0x7FFFuLL, 0x20204D43u);
    if ( Pool )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, (unsigned int)a3[10]);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3);
      v16 = CellFlat;
      while ( v7 < (unsigned int)a6 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v16 + 4LL * v7));
        else
          CellPaged = HvpGetCellPaged(BugCheckParameter3);
        CmpInitializeValueNameString(CellPaged);
        NameInListWithStatus = CmpFindNameInListWithStatus(BugCheckParameter3a, (__int64)&v24, (__int64)&v20);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v21);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v21);
        if ( NameInListWithStatus < 0 )
        {
          if ( NameInListWithStatus != -1073741772 )
            goto LABEL_28;
          NameInListWithStatus = CmpCopyValue(BugCheckParameter3, (__int64)&v25);
          if ( NameInListWithStatus < 0 )
            goto LABEL_28;
          NameInListWithStatus = CmpAddValueToListEx(BugCheckParameter3a, v12, 1);
          if ( NameInListWithStatus < 0 )
            goto LABEL_28;
        }
        ++v7;
      }
      NameInListWithStatus = 0;
LABEL_28:
      if ( v16 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v22);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v22);
      }
      CmSiFreeMemory(Pool);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    NameInListWithStatus = CmpSyncKeyValues(BugCheckParameter3, a5, v6, v19);
    if ( NameInListWithStatus >= 0 )
      return 0;
  }
  return (unsigned int)NameInListWithStatus;
}
