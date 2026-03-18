/*
 * XREFs of CmpDoAccessCheckOnSubtree @ 0x140BA9BBC
 * Callers:
 *     CmDumpKeyToFile @ 0x1407BD56C (CmDumpKeyToFile.c)
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x1407BE848 (CmSaveMergedKeys.c)
 *     CmpDumpKeyToBuffer @ 0x140BA9128 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpFindSubKeyByNumber @ 0x14088A4F0 (CmpFindSubKeyByNumber.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpCheckKeyAccess @ 0x140A485A0 (CmpCheckKeyAccess.c)
 */

__int64 __fastcall CmpDoAccessCheckOnSubtree(ULONG_PTR BugCheckParameter3, int a2, char a3, unsigned int a4, int a5)
{
  __int64 v5; // r15
  char v6; // si
  __int64 Pool; // rax
  __int64 v10; // r8
  void *v11; // r12
  unsigned int *v12; // rdi
  ULONG_PTR v13; // rdx
  int SubKeyByNumber; // ebx
  ULONG_PTR v15; // rdx
  _BYTE *v16; // rsi
  _DWORD *CellFlat; // rax
  unsigned int v18; // r8d
  int v19; // eax
  int v21; // [rsp+30h] [rbp-10h] BYREF
  __int64 v22; // [rsp+38h] [rbp-8h] BYREF

  v5 = 0LL;
  v22 = 0xFFFFFFFFLL;
  v21 = 0;
  v6 = a3;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    return (unsigned int)-1073741811;
  if ( !a3 )
    return 0;
  Pool = CmpAllocatePool(0x100uLL);
  v11 = (void *)Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  *(_DWORD *)Pool = a2;
  *(_BYTE *)(Pool + 16) = !(a5 & 1);
  v12 = (unsigned int *)Pool;
  *(_DWORD *)(Pool + 12) = 0;
  while ( 1 )
  {
    if ( v5 < 0 )
    {
      SubKeyByNumber = 0;
      goto LABEL_23;
    }
    if ( !*((_BYTE *)v12 + 16) )
    {
      LOBYTE(v10) = v6;
      v13 = *v12;
      *((_BYTE *)v12 + 16) = 1;
      SubKeyByNumber = CmpCheckKeyAccess(BugCheckParameter3, v13, v10, a4, (a5 & 2) != 0);
      if ( SubKeyByNumber < 0 )
        goto LABEL_23;
    }
    v15 = *v12;
    v16 = (_BYTE *)(BugCheckParameter3 + 140);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = (_DWORD *)HvpGetCellFlat(BugCheckParameter3, v15, &v22);
    else
      CellFlat = (_DWORD *)HvpGetCellPaged(BugCheckParameter3, v15, &v22);
    if ( !CellFlat )
    {
      SubKeyByNumber = -1073741670;
      goto LABEL_23;
    }
    v18 = v12[3];
    if ( v18 >= CellFlat[5] + CellFlat[6] )
    {
      --v5;
      v12 -= 5;
      goto LABEL_13;
    }
    SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter3, CellFlat, v18, &v21);
    if ( SubKeyByNumber < 0 )
      goto LABEL_29;
    v19 = v21;
    if ( v21 == -1 )
      break;
    ++v12[3];
    ++v5;
    v12 += 5;
    if ( v5 == 512 )
      break;
    v12[3] = 0;
    *v12 = v19;
    *((_BYTE *)v12 + 16) = 0;
LABEL_13:
    if ( (*v16 & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v22);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v22);
    v6 = a3;
  }
  SubKeyByNumber = -1073741670;
LABEL_29:
  if ( (*v16 & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v22);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v22);
LABEL_23:
  CmpFreeTransientPoolWithTag(v11, 0x74634D43u);
  return (unsigned int)SubKeyByNumber;
}
