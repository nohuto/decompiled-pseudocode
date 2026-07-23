/*
 * XREFs of CmpGetValueForAudit @ 0x1407E39A0
 * Callers:
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetValueData @ 0x14087A8E0 (CmpGetValueData.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpGetValueForAudit(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  ULONG_PTR v5; // rdx
  __int64 CellFlat; // rax
  __int64 v7; // rsi
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h] BYREF
  void *Src; // [rsp+58h] [rbp-8h] BYREF
  __int64 v14; // [rsp+90h] [rbp+30h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  Src = 0LL;
  LOBYTE(v14) = 0;
  HvpGetCellContextInitialize(&v12);
  HvpGetCellContextInitialize(&v11);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v5);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v7 = CellFlat;
  if ( CellFlat )
  {
    if ( !*(_DWORD *)(CellFlat + 4)
      || (unsigned __int8)CmpGetValueData(BugCheckParameter3, (__int64)&Src, (__int64)&v14, (__int64)&v12) )
    {
      v9 = *(_DWORD *)(v7 + 12);
      *(_DWORD *)(a3 + 4) = 0;
      v8 = 0;
      *(_DWORD *)a3 = v9;
      *(_QWORD *)(a3 + 8) = 0LL;
    }
    else
    {
      v8 = -1073741670;
    }
    if ( Src )
    {
      if ( (_BYTE)v14 )
      {
        ExFreePoolWithTag(Src, 0);
      }
      else if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      {
        HvpReleaseCellFlat(BugCheckParameter3, &v12);
      }
      else
      {
        HvpReleaseCellPaged(BugCheckParameter3, &v12);
      }
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v11);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v11);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
