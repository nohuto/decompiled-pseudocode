/*
 * XREFs of MiAllocateSlabPageForMdl @ 0x140413A24
 * Callers:
 *     MiAllocateMdlPagesByLists @ 0x140412C40 (MiAllocateMdlPagesByLists.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x140413798 (MiAllocateMostlyContiguousPagesForMdl.c)
 * Callees:
 *     MiGetSlabPage @ 0x1402F3934 (MiGetSlabPage.c)
 *     MiReplenishSlabAllocator @ 0x140413B18 (MiReplenishSlabAllocator.c)
 *     MiAsyncSlabReplenish @ 0x1404141C0 (MiAsyncSlabReplenish.c)
 */

__int64 __fastcall MiAllocateSlabPageForMdl(__int64 a1, unsigned int a2, char a3, int a4, _DWORD *a5)
{
  int v9; // edi
  __int64 SlabPage; // rbp
  __int64 v12; // r8
  int v13; // eax
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF

  v9 = a4 != 0 ? 0x10 : 0;
  v14[0] = 0LL;
  while ( 1 )
  {
    SlabPage = MiGetSlabPage(a1, 7, a2, v9 + 1, v14, 0);
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
