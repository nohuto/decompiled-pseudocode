/*
 * XREFs of CmpDoAccessCheckOnSubtree @ 0x140BBBB34
 * Callers:
 *     CmDumpKeyToFile @ 0x1407CD274 (CmDumpKeyToFile.c)
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x1407CE550 (CmSaveMergedKeys.c)
 *     CmpDumpKeyToBuffer @ 0x140BBB130 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpFindSubKeyByNumber @ 0x140888160 (CmpFindSubKeyByNumber.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpCheckKeyAccess @ 0x14090C3A4 (CmpCheckKeyAccess.c)
 */

__int64 __fastcall CmpDoAccessCheckOnSubtree(ULONG_PTR BugCheckParameter3, int a2, char a3, __int64 a4, int a5)
{
  __int64 v5; // r15
  __int64 Pool; // rax
  void *v9; // r12
  unsigned int *v10; // rdi
  ULONG_PTR v11; // rdx
  int SubKeyByNumber; // ebx
  ULONG_PTR v13; // rdx
  _BYTE *v14; // rsi
  _DWORD *CellFlat; // rax
  unsigned int v16; // r8d
  int v17; // eax
  int v19; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v20[2]; // [rsp+38h] [rbp-8h] BYREF

  v5 = 0LL;
  v20[0] = -1;
  v20[1] = 0;
  v19 = 0;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    return (unsigned int)-1073741811;
  if ( !a3 )
    return 0;
  Pool = CmpAllocatePool(0x100uLL, 0x2800uLL, 0x74634D43u);
  v9 = (void *)Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  *(_DWORD *)Pool = a2;
  *(_BYTE *)(Pool + 16) = !(a5 & 1);
  v10 = (unsigned int *)Pool;
  *(_DWORD *)(Pool + 12) = 0;
  while ( 1 )
  {
    if ( v5 < 0 )
    {
      SubKeyByNumber = 0;
      goto LABEL_22;
    }
    if ( !*((_BYTE *)v10 + 16) )
    {
      v11 = *v10;
      *((_BYTE *)v10 + 16) = 1;
      SubKeyByNumber = CmpCheckKeyAccess(BugCheckParameter3, v11);
      if ( SubKeyByNumber < 0 )
        goto LABEL_22;
    }
    v13 = *v10;
    v14 = (_BYTE *)(BugCheckParameter3 + 140);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = (_DWORD *)HvpGetCellFlat(BugCheckParameter3, v13, v20);
    else
      CellFlat = (_DWORD *)HvpGetCellPaged(BugCheckParameter3, v13, v20);
    if ( !CellFlat )
    {
      SubKeyByNumber = -1073741670;
      goto LABEL_22;
    }
    v16 = v10[3];
    if ( v16 < CellFlat[5] + CellFlat[6] )
      break;
    --v5;
    v10 -= 5;
LABEL_13:
    if ( (*v14 & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v20);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v20);
  }
  SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter3, CellFlat, v16, &v19);
  if ( SubKeyByNumber < 0 )
    goto LABEL_28;
  v17 = v19;
  if ( v19 != -1 )
  {
    ++v10[3];
    ++v5;
    v10 += 5;
    if ( v5 != 512 )
    {
      v10[3] = 0;
      *v10 = v17;
      *((_BYTE *)v10 + 16) = 0;
      goto LABEL_13;
    }
  }
  SubKeyByNumber = -1073741670;
LABEL_28:
  if ( (*v14 & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v20);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v20);
LABEL_22:
  CmpFreeTransientPoolWithTag(v9, 0x74634D43u);
  return (unsigned int)SubKeyByNumber;
}
