/*
 * XREFs of CmpSortedValueEnumStackEntryStart @ 0x140A1D230
 * Callers:
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A1CDE4 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpSortedValueEnumStackEntryStart(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  size_t v9; // r14
  struct _PRIVILEGE_SET *Pool; // rsi
  ULONG_PTR v12; // rdx
  __int64 CellFlat; // rax
  unsigned int *v14; // r12
  _QWORD *v15; // rbp
  _QWORD *p_PrivilegeCount; // r13
  ULONG_PTR v17; // rdx
  __int64 CellPaged; // rax
  __int64 v19; // r13
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF
  size_t v21; // [rsp+68h] [rbp+10h]
  __int64 v22; // [rsp+70h] [rbp+18h]

  v4 = 0;
  v20 = 0LL;
  HvpGetCellContextInitialize(&v20);
  *(_QWORD *)a1 = v7;
  v9 = *(unsigned int *)(v8 + 36);
  if ( (_DWORD)v9 )
  {
    Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL, 8 * v9, 0x38374D43u);
    if ( Pool )
    {
      v22 = CmpAllocatePool(0x100uLL, 8 * v9, 0x38374D43u);
      if ( v22 )
      {
        v12 = *(unsigned int *)(a3 + 40);
        if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(a2, v12, &v20);
        else
          CellFlat = HvpGetCellPaged(a2, v12, &v20);
        v14 = (unsigned int *)CellFlat;
        v15 = (_QWORD *)v22;
        p_PrivilegeCount = &Pool->PrivilegeCount;
        v21 = v9;
        do
        {
          HvpGetCellContextInitialize(v15);
          v17 = *v14;
          if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
            CellPaged = HvpGetCellFlat(a2, v17, v15);
          else
            CellPaged = HvpGetCellPaged(a2, v17, v15);
          *p_PrivilegeCount = CellPaged;
          ++v15;
          ++p_PrivilegeCount;
          ++v14;
          --v21;
        }
        while ( v21 );
        v19 = v22;
        if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
          HvpReleaseCellFlat(a2, (__int64)&v20);
        else
          HvpReleaseCellPaged(a2, (unsigned int *)&v20);
        qsort(Pool, v9, 8uLL, (int (__cdecl *)(const void *, const void *))CmpSortedValueEnumStackValueCompareFunction);
        *(_QWORD *)(a1 + 8) = Pool;
        *(_QWORD *)(a1 + 16) = v19;
        *(_DWORD *)(a1 + 24) = v9;
      }
      else
      {
        v4 = -1073741670;
        CmSiFreeMemory(Pool);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v4;
}
