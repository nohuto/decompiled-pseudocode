/*
 * XREFs of MiDeleteSparseRange @ 0x1407FB544
 * Callers:
 *     MiDeletePfnBitMaps @ 0x1407FB37C (MiDeletePfnBitMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiReturnSystemCharges @ 0x14044FC38 (MiReturnSystemCharges.c)
 *     MiPageChainCount @ 0x14045AA00 (MiPageChainCount.c)
 *     MiReturnPfnList @ 0x14067AC80 (MiReturnPfnList.c)
 *     MiCaptureSparsePages @ 0x1407FAE6C (MiCaptureSparsePages.c)
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
    MiReleasePtes((__int64)&qword_140E376A8, PteAddress, a2);
    if ( MiPageChainCount((__int64)&v6) )
    {
      v5 = MiReturnPfnList((__int64)&v6);
      MiReturnSystemCharges((__int64)&MiSystemPartition, v5, v5, 8);
    }
  }
}
