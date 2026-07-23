/*
 * XREFs of MiAllocateSlabPageForMdl @ 0x14021CD30
 * Callers:
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x14021C6C4 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiAllocateMdlPagesByLists @ 0x140395080 (MiAllocateMdlPagesByLists.c)
 * Callees:
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MiReplenishSlabAllocator @ 0x14021E544 (MiReplenishSlabAllocator.c)
 *     MiAsyncSlabReplenish @ 0x14026F604 (MiAsyncSlabReplenish.c)
 */

__int64 __fastcall MiAllocateSlabPageForMdl(int a1, int a2, char a3, int a4, _DWORD *a5)
{
  int v9; // edi
  __int64 SlabPage; // rbp
  __int64 v12; // r8
  int v13; // eax
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  v9 = a4 != 0 ? 0x10 : 0;
  v14[0] = 0LL;
  while ( 1 )
  {
    SlabPage = MiGetSlabPage(a1, 7, a2, v9 + 1, (__int64)v14, 0);
    if ( SlabPage != -1 || !v14[0] || *a5 )
      break;
    if ( !(unsigned int)MiReplenishSlabAllocator(v14[0], 1LL, 64LL) )
    {
      v12 = a4 ? 5LL : (a3 & 8) != 0;
      v13 = MiAsyncSlabReplenish(v14[0], &MiShortTime, v12);
      *a5 = v13;
      if ( v13 )
        break;
    }
  }
  return SlabPage;
}
