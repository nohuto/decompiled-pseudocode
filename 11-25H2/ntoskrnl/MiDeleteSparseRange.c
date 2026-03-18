/*
 * XREFs of MiDeleteSparseRange @ 0x1407EAF44
 * Callers:
 *     MiDeletePfnBitMaps @ 0x1407EAD7C (MiDeletePfnBitMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReturnSystemCharges @ 0x140377DD8 (MiReturnSystemCharges.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiPageChainCount @ 0x140464C78 (MiPageChainCount.c)
 *     MiReturnPfnList @ 0x14066E1F4 (MiReturnPfnList.c)
 *     MiCaptureSparsePages @ 0x1407EA86C (MiCaptureSparsePages.c)
 */

void __fastcall MiDeleteSparseRange(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 *PteAddress; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( a1 )
  {
    v6 = 0LL;
    v7 = 0LL;
    PteAddress = (unsigned __int64 *)MiGetPteAddress(a1);
    MiCaptureSparsePages((unsigned __int64)PteAddress, v4, (__int64 *)&v6);
    MiReleasePtes((__int64)&qword_140E37328, PteAddress, a2);
    if ( MiPageChainCount((__int64)&v6) )
    {
      v5 = MiReturnPfnList((__int64)&v6);
      MiReturnSystemCharges((__int64)&MiSystemPartition, v5, v5, 8);
    }
  }
}
