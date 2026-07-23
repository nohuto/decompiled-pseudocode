/*
 * XREFs of CmpSetValueKeyExisting @ 0x140883D24
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x1407E26F8 (CmpPreserveSystemHiveData.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpMarkValueDataDirty @ 0x1408840F8 (CmpMarkValueDataDirty.c)
 *     CmpFreeValueData @ 0x140884884 (CmpFreeValueData.c)
 *     CmpSetValueDataNew @ 0x1408849EC (CmpSetValueDataNew.c)
 *     HvReallocateCell @ 0x14088539C (HvReallocateCell.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpSetValueDataExisting @ 0x140A59D2C (CmpSetValueDataExisting.c)
 */

__int64 __fastcall CmpSetValueKeyExisting(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        __int64 a3,
        int a4,
        void *Src,
        size_t Size)
{
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // r14d
  __int16 v11; // r13
  __int16 v12; // r15
  unsigned int *v13; // r14
  unsigned int v14; // esi
  __int64 CellFlat; // rax
  void *v16; // rcx
  unsigned int v17; // r15d
  _DWORD *v18; // rsi
  unsigned int *v19; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-40h]
  unsigned int v21; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-1Ch]
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24[2]; // [rsp+50h] [rbp-10h] BYREF

  v23 = 0xFFFFFFFFLL;
  v24[0] = 0LL;
  v21 = 0;
  result = HvpMarkCellDirty(BugCheckParameter3, a2, 0);
  if ( (int)result >= 0 )
  {
    v9 = *(_DWORD *)(a3 + 4);
    v10 = v9 + 0x80000000;
    if ( v9 < 0x80000000 )
      v10 = *(_DWORD *)(a3 + 4);
    v22 = v10;
    if ( v9 >= 0x80000000 )
      v11 = 0;
    else
      v11 = *(_DWORD *)(BugCheckParameter3 + 220) >= 4u && v10 - 16345 <= 0x7FFFC026 ? 2 : 1;
    if ( (unsigned int)Size <= 4 )
      v12 = 0;
    else
      v12 = *(_DWORD *)(BugCheckParameter3 + 220) >= 4u && (unsigned int)(Size - 16345) <= 0x7FFFC026 ? 2 : 1;
    result = CmpMarkValueDataDirty(BugCheckParameter3);
    if ( (int)result >= 0 )
    {
      if ( v12 )
      {
        v13 = (unsigned int *)(a3 + 8);
        v14 = *(_DWORD *)(a3 + 8);
        if ( v12 != 1 )
        {
          if ( v11 == 2 )
          {
            LODWORD(BugCheckParameter4) = *(_DWORD *)(a3 + 8);
            result = CmpSetValueDataExisting(BugCheckParameter3, Src, BugCheckParameter4);
            if ( (int)result < 0 )
              return result;
            v19 = (unsigned int *)(a3 + 8);
          }
          else
          {
            result = CmpSetValueDataNew(BugCheckParameter3, Src, (unsigned int)Size, (__int64)&v21);
            if ( (int)result < 0 )
              return result;
            v19 = (unsigned int *)(a3 + 8);
            if ( v11 && v22 )
            {
              HvFreeCell(BugCheckParameter3, *v13);
              v19 = (unsigned int *)(a3 + 8);
            }
            v14 = v21;
          }
          *v19 = v14;
          *(_DWORD *)(a3 + 12) = a4;
          *(_WORD *)(a3 + 16) &= ~2u;
          *(_DWORD *)(a3 + 4) = Size;
          return 0LL;
        }
        if ( v11 == 1 && v22 )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(BugCheckParameter3, v14, &v23);
          else
            CellFlat = HvpGetCellPaged(BugCheckParameter3, v14, &v23);
          v16 = (void *)CellFlat;
          if ( !CellFlat )
            return 3221225626LL;
          if ( (unsigned int)Size <= -4 - *(_DWORD *)(CellFlat - 4) )
          {
            v17 = v14;
LABEL_22:
            v13 = (unsigned int *)(a3 + 8);
LABEL_23:
            memmove(v16, Src, (unsigned int)Size);
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, &v23);
            else
              HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v23);
            *(_DWORD *)(a3 + 12) = a4;
            *(_WORD *)(a3 + 16) &= ~2u;
            *v13 = v17;
            *(_DWORD *)(a3 + 4) = Size;
            if ( v11 == 2 )
              CmpFreeValueData(BugCheckParameter3);
            return 0LL;
          }
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v23);
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v23);
          v24[0] = 0LL;
          result = HvReallocateCell(BugCheckParameter3, (__int64)&v21, (__int64)v24, (__int64)&v23);
          if ( (int)result >= 0 )
          {
            v17 = v21;
            v16 = (void *)v24[0];
            *(_DWORD *)(a3 + 8) = v21;
            goto LABEL_22;
          }
        }
        else
        {
          result = HvAllocateCell(BugCheckParameter3, (__int64)v24, (__int64)&v23);
          if ( (int)result >= 0 )
          {
            v16 = (void *)v24[0];
            v17 = v21;
            goto LABEL_23;
          }
        }
      }
      else
      {
        if ( v11 == 1 && v10 || v11 == 2 )
        {
          v18 = (_DWORD *)(a3 + 8);
          CmpFreeValueData(BugCheckParameter3);
        }
        else
        {
          v18 = (_DWORD *)(a3 + 8);
        }
        *(_DWORD *)(a3 + 4) = Size + 0x80000000;
        *v18 = 0;
        memmove(v18, Src, (unsigned int)Size);
        *(_DWORD *)(a3 + 12) = a4;
        *(_WORD *)(a3 + 16) &= ~2u;
        return 0LL;
      }
    }
  }
  return result;
}
