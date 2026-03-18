/*
 * XREFs of MiDeleteSparseRange @ 0x1407FADD4
 * Callers:
 *     MiDeletePfnBitMaps @ 0x1407FAC0C (MiDeletePfnBitMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     MiReturnSystemCharges @ 0x14045A7E8 (MiReturnSystemCharges.c)
 *     MiPageChainCount @ 0x1404642D0 (MiPageChainCount.c)
 *     MiReturnPfnList @ 0x140679AA0 (MiReturnPfnList.c)
 *     MiCaptureSparsePages @ 0x1407FA6FC (MiCaptureSparsePages.c)
 */

void __fastcall MiDeleteSparseRange(unsigned __int64 a1, unsigned int a2)
{
  _QWORD *PteAddress; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( a1 )
  {
    v6 = 0LL;
    v7 = 0LL;
    PteAddress = (_QWORD *)MiGetPteAddress(a1);
    MiCaptureSparsePages((unsigned __int64)PteAddress, v4, (__int64 *)&v6);
    MiReleasePtes((__int64)&qword_140E37568, PteAddress, a2);
    if ( MiPageChainCount((__int64)&v6) )
    {
      v5 = MiReturnPfnList((__int64)&v6);
      MiReturnSystemCharges((__int64)&MiSystemPartition, v5, v5, 8);
    }
  }
}
