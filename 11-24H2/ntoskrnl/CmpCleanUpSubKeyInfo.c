/*
 * XREFs of CmpCleanUpSubKeyInfo @ 0x140880020
 * Callers:
 *     CmpCreateTombstone @ 0x140666D04 (CmpCreateTombstone.c)
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14087FED4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmpInvalidateSubtreeWorker @ 0x140963A80 (CmpInvalidateSubtreeWorker.c)
 *     CmpCompleteUnloadKey @ 0x140965368 (CmpCompleteUnloadKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A14304 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
