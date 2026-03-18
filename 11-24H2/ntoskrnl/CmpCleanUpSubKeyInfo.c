/*
 * XREFs of CmpCleanUpSubKeyInfo @ 0x14087C170
 * Callers:
 *     CmpCreateTombstone @ 0x140668414 (CmpCreateTombstone.c)
 *     CmRestoreKey @ 0x1407CCF24 (CmRestoreKey.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14087C024 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCreateChild @ 0x14091788C (CmpCreateChild.c)
 *     CmpInvalidateSubtreeWorker @ 0x14097B270 (CmpInvalidateSubtreeWorker.c)
 *     CmpCompleteUnloadKey @ 0x14097CB58 (CmpCompleteUnloadKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A1F204 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCleanUpSubKeyInfo(__int64 a1, char a2)
{
  _WORD *v2; // rdi
  __int64 result; // rax
  _WORD *v6; // rsi
  ULONG_PTR v7; // rdx
  ULONG_PTR v8; // rcx
  __int64 CellFlat; // rax
  __int64 v10; // rcx
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+44h] [rbp+Ch]

  v11 = -1;
  v2 = (_WORD *)(a1 + 8);
  v12 = 0;
  result = *(unsigned int *)(a1 + 8);
  if ( (result & 7) != 0 )
  {
    if ( (result & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x6E494D43u);
    result = 65528LL;
    v6 = (_WORD *)(a1 + 8);
    *v2 &= 0xFFF8u;
  }
  else
  {
    v6 = (_WORD *)(a1 + 8);
  }
  *v2 |= 0x40u;
  if ( a2 )
  {
    v7 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v7 != -1 )
    {
      v8 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v8, v7, &v11);
      else
        CellFlat = HvpGetCellPaged(v8, v7, &v11);
      *v6 &= ~0x40u;
      v10 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 112) = *(_DWORD *)(CellFlat + 20) + *(_DWORD *)(CellFlat + 24);
      if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
        return HvpReleaseCellFlat(v10, &v11);
      else
        return HvpReleaseCellPaged(v10, &v11);
    }
  }
  return result;
}
