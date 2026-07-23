/*
 * XREFs of CmpAddValueKeyNew @ 0x140885910
 * Callers:
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x140884CD8 (CmpSetValueKeyNew.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1409F7BB0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpSetValueDataNew @ 0x1408849EC (CmpSetValueDataNew.c)
 *     CmpNameSize @ 0x140885A7C (CmpNameSize.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 *     CmpCopyName @ 0x1408870F8 (CmpCopyName.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpAddValueKeyNew(
        ULONG_PTR BugCheckParameter3,
        unsigned __int16 *a2,
        int a3,
        void *a4,
        size_t Size,
        int a6,
        _DWORD *a7)
{
  __int64 v11; // rdx
  int Cell; // eax
  __int64 v13; // rbx
  int v14; // r14d
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  HvpGetCellContextInitialize(&v18);
  CmpNameSize(v11);
  Cell = HvAllocateCell(BugCheckParameter3, (__int64)&v19, (__int64)&v18);
  v13 = v19;
  v14 = Cell;
  if ( Cell >= 0 )
  {
    v15 = v19 + 20;
    *(_WORD *)v19 = 27510;
    v16 = CmpCopyName(v15, a2);
    *(_WORD *)(v13 + 2) = v16;
    *(_WORD *)(v13 + 16) = v16 < *a2;
    *(_DWORD *)(v13 + 12) = a3;
    if ( (unsigned int)Size <= 4 )
    {
      *(_DWORD *)(v13 + 4) = Size + 0x80000000;
      *(_DWORD *)(v13 + 8) = 0;
      memmove((void *)(v13 + 8), a4, (unsigned int)Size);
      goto LABEL_8;
    }
    v14 = CmpSetValueDataNew(BugCheckParameter3, (char *)a4, (unsigned int)Size, a6, (_DWORD *)(v13 + 8));
    if ( v14 >= 0 )
    {
      *(_DWORD *)(v13 + 4) = Size;
LABEL_8:
      v14 = 0;
      *a7 = -1;
    }
  }
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v18);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v18);
  }
  return (unsigned int)v14;
}
