/*
 * XREFs of CmpCompareNewValueDataAgainstKCBCache @ 0x14086C2B0
 * Callers:
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 *     CmpFindNameInListWithStatus @ 0x14086C510 (CmpFindNameInListWithStatus.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     CmpGetValueData @ 0x1408765B0 (CmpGetValueData.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCompareNewValueDataAgainstKCBCache(
        __int64 a1,
        __int64 a2,
        int a3,
        const void *a4,
        unsigned int a5)
{
  ULONG_PTR v8; // rcx
  char v9; // r15
  ULONG_PTR v10; // rcx
  __int64 CellFlat; // rax
  unsigned int v12; // ebx
  __int64 v13; // r8
  unsigned int v14; // ecx
  unsigned int v15; // r14d
  unsigned int v16; // eax
  void *v17; // rdi
  SIZE_T v18; // r8
  __int64 v19; // rcx
  char ValueData; // al
  __int64 v22; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v24[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h] BYREF
  __int64 v26; // [rsp+58h] [rbp-8h] BYREF
  __int64 v27; // [rsp+90h] [rbp+30h] BYREF

  LOBYTE(v27) = 0;
  v25 = 0xFFFFFFFFLL;
  v24[0] = -1;
  v8 = *(_QWORD *)(a1 + 32);
  v26 = 0LL;
  v9 = 0;
  LODWORD(BugCheckParameter4) = 0;
  v24[1] = 0;
  if ( (int)CmpFindNameInListWithStatus(v8, 0LL, (__int64)&BugCheckParameter4) < 0 )
    return 2;
  v10 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v10, (unsigned int)BugCheckParameter4);
  else
    CellFlat = HvpGetCellPaged(v10);
  v12 = 2;
  v13 = CellFlat;
  if ( (*(_BYTE *)(CellFlat + 16) & 2) == 0 && a3 == *(_DWORD *)(CellFlat + 12) )
  {
    v14 = *(_DWORD *)(CellFlat + 4);
    v15 = a5;
    if ( a5 == (v14 & 0x7FFFFFFF) )
    {
      if ( a5 )
      {
        v16 = v14 + 0x80000000;
        if ( v14 < 0x80000000 )
          v16 = v14;
        LODWORD(BugCheckParameter4) = v16;
        if ( v14 < 0x80000000 )
        {
          v9 = 1;
          ValueData = CmpGetValueData(*(_QWORD *)(a1 + 32), (__int64)&v26, (__int64)&v27, (__int64)&v25);
          v17 = (void *)v26;
          if ( !ValueData )
            goto LABEL_13;
        }
        else
        {
          v17 = (void *)(v13 + 8);
        }
        v18 = v15;
        LODWORD(v18) = v15 & 0x7FFFFFFF;
        v12 = v15 != (unsigned int)RtlCompareMemory(v17, a4, v18) ? 2 : 0;
LABEL_13:
        if ( v17 && v9 )
        {
          if ( (_BYTE)v27 == 1 )
          {
            ExFreePoolWithTag(v17, 0);
          }
          else
          {
            v22 = *(_QWORD *)(a1 + 32);
            if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v22, &v25);
            else
              HvpReleaseCellPaged(v22, &v25);
          }
        }
        goto LABEL_15;
      }
      v12 = 0;
    }
  }
LABEL_15:
  v19 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v19 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v19, v24);
  else
    HvpReleaseCellPaged(v19, v24);
  return v12;
}
