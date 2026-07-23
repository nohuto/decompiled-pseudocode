/*
 * XREFs of CmpKeyEnumStackEntryNotifyPromotion @ 0x140908A74
 * Callers:
 *     CmpKeyEnumStackNotifyPromotion @ 0x140908320 (CmpKeyEnumStackNotifyPromotion.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpDoFindSubKeyByNumber @ 0x14090ABD0 (CmpDoFindSubKeyByNumber.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryNotifyPromotion(__int64 a1)
{
  int v1; // ebp
  int v3; // r8d
  __int64 i; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r14
  unsigned int *v8; // rdx
  __int64 v9; // rdx
  _DWORD *v10; // r8
  ULONG_PTR v11; // rdx
  ULONG_PTR v12; // rcx
  __int64 CellFlat; // rax
  unsigned int SubKeyByNumber; // eax
  _DWORD *v15; // r8
  ULONG_PTR v16; // rcx
  unsigned int v17; // esi
  __int64 CellPaged; // rax
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 v21; // rcx
  unsigned int *v22; // rdx

  v1 = 2;
  v3 = 0;
  for ( i = 20LL; i < 28; i += 4LL )
  {
    if ( *(_DWORD *)(a1 + i + 12) != *(_DWORD *)(i + *(_QWORD *)(a1 + 8)) )
    {
      v1 = v3;
      break;
    }
    ++v3;
  }
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 112) = -1;
  v5 = 8LL * v1;
  if ( *(_QWORD *)(a1 + v5 + 80) )
  {
    v21 = *(_QWORD *)a1;
    v22 = (unsigned int *)(v5 + a1 + 96);
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 140LL) & 1) != 0 )
      HvpReleaseCellFlat(v21, (__int64)v22);
    else
      HvpReleaseCellPaged(v21, v22);
    *(_QWORD *)(a1 + 8LL * v1 + 80) = 0LL;
    *(_DWORD *)(a1 + 4LL * v1 + 72) = -1;
  }
  if ( *(_QWORD *)(a1 + 8LL * v1 + 40) )
  {
    v6 = *(_QWORD *)a1;
    v7 = v5 + a1;
    v8 = (unsigned int *)(v5 + a1 + 56);
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 140LL) & 1) != 0 )
      HvpReleaseCellFlat(v6, (__int64)v8);
    else
      HvpReleaseCellPaged(v6, v8);
    *(_QWORD *)(a1 + 8LL * v1 + 40) = 0LL;
  }
  else
  {
    v7 = a1 + v5;
  }
  v9 = *(_QWORD *)(a1 + 8);
  v10 = (_DWORD *)(v7 + 56);
  *(_DWORD *)(a1 + 4LL * v1 + 32) = *(_DWORD *)(v9 + 4LL * v1 + 20);
  v11 = *(unsigned int *)(v9 + 4LL * v1 + 28);
  v12 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 140LL) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v12, v11, v10);
  else
    CellFlat = HvpGetCellPaged(v12, v11, v10);
  *(_QWORD *)(a1 + 8LL * v1 + 40) = CellFlat;
  SubKeyByNumber = CmpDoFindSubKeyByNumber(*(_QWORD *)a1);
  *(_DWORD *)(a1 + 4LL * v1 + 72) = SubKeyByNumber;
  v15 = (_DWORD *)(v7 + 96);
  v16 = *(_QWORD *)a1;
  v17 = SubKeyByNumber;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 140LL) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v16, SubKeyByNumber, v15);
  else
    CellPaged = HvpGetCellPaged(v16, SubKeyByNumber, v15);
  v19 = CellPaged;
  result = v1;
  *(_QWORD *)(a1 + 8LL * v1 + 80) = v19;
  *(_DWORD *)(a1 + 112) = v17;
  *(_QWORD *)(a1 + 120) = v19;
  return result;
}
