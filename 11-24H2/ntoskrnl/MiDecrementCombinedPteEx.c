/*
 * XREFs of MiDecrementCombinedPteEx @ 0x1402F9014
 * Callers:
 *     MiDecommitHandleProtoFormatPte @ 0x140289580 (MiDecommitHandleProtoFormatPte.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiConvertPrivateToProto @ 0x1402F9768 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x140313ACC (MiConvertStandbyToProto.c)
 *     MiDemoteCombinedPte @ 0x1403FABBC (MiDemoteCombinedPte.c)
 * Callees:
 *     MiDecrementCloneBlock @ 0x1402F9160 (MiDecrementCloneBlock.c)
 *     MiFreeCombineBlock @ 0x1402FA048 (MiFreeCombineBlock.c)
 *     MiLogCombinedPteDelete @ 0x14068564C (MiLogCombinedPteDelete.c)
 */

__int64 __fastcall MiDecrementCombinedPteEx(int a1, __int64 a2, int a3)
{
  volatile signed __int32 *v5; // r9
  __int64 v6; // rcx
  unsigned int v7; // esi
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0;
  v5 = *(volatile signed __int32 **)(((a2 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v6 = *(_QWORD *)v5;
  _InterlockedDecrement(v5 + 98);
  v7 = MiDecrementCloneBlock(v6, a1, a2, a3, (__int64)&v9);
  if ( v9 )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogCombinedPteDelete(a2);
    MiFreeCombineBlock(a2 - 32, 1LL);
  }
  return v7;
}
