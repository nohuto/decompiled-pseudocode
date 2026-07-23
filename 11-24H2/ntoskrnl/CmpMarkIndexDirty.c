/*
 * XREFs of CmpMarkIndexDirty @ 0x1408834C8
 * Callers:
 *     CmpMarkKeyDirty @ 0x1408839E4 (CmpMarkKeyDirty.c)
 *     CmpMarkKeyParentDirty @ 0x140A54E68 (CmpMarkKeyParentDirty.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpCopyCompressedName @ 0x140882750 (CmpCopyCompressedName.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x140A1D6C0 (CmpMarkIndexDirtyInStorageType.c)
 */

__int64 __fastcall CmpMarkIndexDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // r15d
  struct _PRIVILEGE_SET *v4; // r14
  unsigned int v5; // r9d
  __int64 CellFlat; // rax
  __int64 v7; // rdi
  unsigned __int16 v8; // si
  unsigned __int64 Pool; // rax
  __int64 CellPaged; // rax
  int v11; // esi
  unsigned int i; // edi
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+88h] [rbp+48h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  v3 = BugCheckParameter4;
  v4 = 0LL;
  HvpGetCellContextInitialize(&v14);
  HvpGetCellContextInitialize(&v15);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v5, &v15);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v5, &v15);
  v7 = CellFlat;
  if ( !CellFlat )
    return (unsigned int)-1073741670;
  if ( (*(_BYTE *)(CellFlat + 2) & 0x20) == 0 )
    goto LABEL_7;
  v8 = 2 * *(_WORD *)(CellFlat + 72);
  Pool = CmpAllocatePool(0x100uLL, v8, 0x20394D43u);
  v4 = (struct _PRIVILEGE_SET *)Pool;
  if ( Pool )
  {
    CmpCopyCompressedName(Pool, v8, v7 + 76, *(unsigned __int16 *)(v7 + 72));
LABEL_7:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v3, &v14);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3, v3, &v14);
    if ( CellPaged )
    {
      v11 = 0;
      for ( i = -1073741772; v11 < *(_DWORD *)(BugCheckParameter3 + 216); ++v11 )
      {
        i = CmpMarkIndexDirtyInStorageType(BugCheckParameter3, v11);
        if ( i != -1073741772 )
          break;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v14);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v14);
    }
    else
    {
      i = -1073741670;
    }
    if ( v4 )
      CmSiFreeMemory(v4);
    goto LABEL_16;
  }
  i = -1073741670;
LABEL_16:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v15);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v15);
  return i;
}
