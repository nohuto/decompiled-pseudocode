/*
 * XREFs of CmpRemoveValueFromList @ 0x1409F835C
 * Callers:
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1409F8060 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvReallocateCell @ 0x14088539C (HvReallocateCell.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpRemoveValueFromList(ULONG_PTR BugCheckParameter3, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // esi
  __int64 v4; // r14
  ULONG_PTR v6; // rdx
  unsigned int v8; // esi
  __int64 result; // rax
  __int64 CellFlat; // rax
  _DWORD *v11; // rdx
  unsigned int v12; // edx
  __int64 v13; // [rsp+40h] [rbp-10h] BYREF
  __int64 v14; // [rsp+90h] [rbp+40h] BYREF
  __int64 v15; // [rsp+98h] [rbp+48h] BYREF

  v3 = *a3;
  v4 = a2;
  v6 = a3[1];
  LODWORD(v14) = 0;
  v8 = v3 - 1;
  if ( v8 )
  {
    v15 = 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v6, &v15);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v6, &v15);
    if ( (unsigned int)v4 < v8 )
    {
      v11 = (_DWORD *)(CellFlat + 4 * v4);
      do
      {
        v4 = (unsigned int)(v4 + 1);
        *v11++ = *(_DWORD *)(CellFlat + 4 * v4);
      }
      while ( (unsigned int)v4 < v8 );
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v15);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v15);
    v12 = a3[1];
    v13 = 0LL;
    HvReallocateCell(BugCheckParameter3, v12, 4 * v8, 1, (int *)&v14, &v13, (__int64)&v15);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v15);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v15);
    a3[1] = v14;
  }
  else
  {
    HvFreeCell(BugCheckParameter3, v6);
    a3[1] = -1;
  }
  result = 0LL;
  *a3 = v8;
  return result;
}
