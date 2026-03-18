/*
 * XREFs of CmpSetValueKeyExisting @ 0x140887430
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x1407D28C8 (CmpPreserveSystemHiveData.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvReallocateCell @ 0x14087F5A4 (HvReallocateCell.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     HvAllocateCell @ 0x1408803CC (HvAllocateCell.c)
 *     CmpSetValueDataNew @ 0x1408816B8 (CmpSetValueDataNew.c)
 *     CmpFreeValueData @ 0x140886F34 (CmpFreeValueData.c)
 *     CmpMarkValueDataDirty @ 0x1408877FC (CmpMarkValueDataDirty.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpSetValueDataExisting @ 0x140A5FB2C (CmpSetValueDataExisting.c)
 */

__int64 __fastcall CmpSetValueKeyExisting(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        __int64 a3,
        int a4,
        void *Src,
        size_t Size,
        unsigned int a7)
{
  __int64 result; // rax
  unsigned int v10; // eax
  unsigned int v11; // r14d
  __int16 v12; // r13
  __int16 v13; // r15
  unsigned int *v14; // r14
  unsigned int v15; // esi
  __int64 CellFlat; // rax
  void *v17; // rcx
  int v18; // r15d
  _DWORD *v19; // rsi
  unsigned int *v20; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-40h]
  unsigned int v22; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-1Ch]
  __int64 v24; // [rsp+48h] [rbp-18h] BYREF
  __int64 v25[2]; // [rsp+50h] [rbp-10h] BYREF

  v24 = 0xFFFFFFFFLL;
  v25[0] = 0LL;
  v22 = 0;
  result = HvpMarkCellDirty(BugCheckParameter3, a2, 0);
  if ( (int)result >= 0 )
  {
    v10 = *(_DWORD *)(a3 + 4);
    v11 = v10 + 0x80000000;
    if ( v10 < 0x80000000 )
      v11 = *(_DWORD *)(a3 + 4);
    v23 = v11;
    if ( v10 >= 0x80000000 )
      v12 = 0;
    else
      v12 = *(_DWORD *)(BugCheckParameter3 + 220) >= 4u && v11 - 16345 <= 0x7FFFC026 ? 2 : 1;
    if ( (unsigned int)Size <= 4 )
      v13 = 0;
    else
      v13 = *(_DWORD *)(BugCheckParameter3 + 220) >= 4u && (unsigned int)(Size - 16345) <= 0x7FFFC026 ? 2 : 1;
    result = CmpMarkValueDataDirty(BugCheckParameter3);
    if ( (int)result >= 0 )
    {
      if ( v13 )
      {
        v14 = (unsigned int *)(a3 + 8);
        v15 = *(_DWORD *)(a3 + 8);
        if ( v13 != 1 )
        {
          if ( v12 == 2 )
          {
            LODWORD(BugCheckParameter4) = *(_DWORD *)(a3 + 8);
            result = CmpSetValueDataExisting(BugCheckParameter3, Src, BugCheckParameter4);
            if ( (int)result < 0 )
              return result;
            v20 = (unsigned int *)(a3 + 8);
          }
          else
          {
            result = CmpSetValueDataNew(BugCheckParameter3, (char *)Src, (unsigned int)Size, a7, &v22);
            if ( (int)result < 0 )
              return result;
            v20 = (unsigned int *)(a3 + 8);
            if ( v12 && v23 )
            {
              HvFreeCell(BugCheckParameter3, *v14);
              v20 = (unsigned int *)(a3 + 8);
            }
            v15 = v22;
          }
          *v20 = v15;
          *(_DWORD *)(a3 + 12) = a4;
          *(_WORD *)(a3 + 16) &= ~2u;
          *(_DWORD *)(a3 + 4) = Size;
          return 0LL;
        }
        if ( v12 == 1 && v23 )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(BugCheckParameter3, v15, &v24);
          else
            CellFlat = HvpGetCellPaged(BugCheckParameter3, v15, &v24);
          v17 = (void *)CellFlat;
          if ( !CellFlat )
            return 3221225626LL;
          if ( (unsigned int)Size <= -4 - *(_DWORD *)(CellFlat - 4) )
          {
            v18 = v15;
LABEL_22:
            v14 = (unsigned int *)(a3 + 8);
LABEL_23:
            memmove(v17, Src, (unsigned int)Size);
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, &v24);
            else
              HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v24);
            *(_DWORD *)(a3 + 12) = a4;
            *(_WORD *)(a3 + 16) &= ~2u;
            *v14 = v18;
            *(_DWORD *)(a3 + 4) = Size;
            if ( v12 == 2 )
              CmpFreeValueData(BugCheckParameter3, v15, v23);
            return 0LL;
          }
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v24);
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v24);
          v25[0] = 0LL;
          result = HvReallocateCell(BugCheckParameter3, v15, Size, 1, (int *)&v22, v25, (__int64)&v24);
          if ( (int)result >= 0 )
          {
            v18 = v22;
            v17 = (void *)v25[0];
            *(_DWORD *)(a3 + 8) = v22;
            goto LABEL_22;
          }
        }
        else
        {
          result = HvAllocateCell(BugCheckParameter3, Size, a7, &v22, v25, (__int64)&v24);
          if ( (int)result >= 0 )
          {
            v17 = (void *)v25[0];
            v18 = v22;
            goto LABEL_23;
          }
        }
      }
      else
      {
        if ( v12 == 1 && v11 || v12 == 2 )
        {
          v19 = (_DWORD *)(a3 + 8);
          CmpFreeValueData(BugCheckParameter3, *(unsigned int *)(a3 + 8), v11);
        }
        else
        {
          v19 = (_DWORD *)(a3 + 8);
        }
        *(_DWORD *)(a3 + 4) = Size + 0x80000000;
        *v19 = 0;
        memmove(v19, Src, (unsigned int)Size);
        *(_DWORD *)(a3 + 12) = a4;
        *(_WORD *)(a3 + 16) &= ~2u;
        return 0LL;
      }
    }
  }
  return result;
}
