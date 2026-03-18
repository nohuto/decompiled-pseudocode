/*
 * XREFs of CmpQueryKeyData @ 0x1408784C0
 * Callers:
 *     CmQueryKey @ 0x140877890 (CmQueryKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     CmpQueryKeyDataFromCache @ 0x1408785C0 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x14087CFA0 (CmpQueryKeyDataFromNode.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpQueryKeyData(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // rcx
  __int64 CellFlat; // rax
  unsigned int KeyDataFromNode; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  unsigned int v15[6]; // [rsp+40h] [rbp-18h] BYREF

  v15[0] = -1;
  v15[1] = 0;
  if ( a2 == 4 )
    return CmpQueryKeyDataFromCache(a1, 4, a3, a4, a5, a6);
  v9 = *(unsigned int *)(a1 + 40);
  v10 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v10, v9, v15);
  else
    CellFlat = HvpGetCellPaged(v10, v9, v15);
  if ( !CellFlat )
    return 3221225626LL;
  KeyDataFromNode = CmpQueryKeyDataFromNode(*(_QWORD *)(a1 + 32), a4, a5, a1, a6);
  v13 = *(_QWORD *)(a1 + 32);
  v14 = KeyDataFromNode;
  if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v13, v15);
  else
    HvpReleaseCellPaged(v13, v15);
  return v14;
}
