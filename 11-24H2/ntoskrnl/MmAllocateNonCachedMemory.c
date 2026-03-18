/*
 * XREFs of MmAllocateNonCachedMemory @ 0x1407EABD0
 * Callers:
 *     DifMmAllocateNonCachedMemoryWrapper @ 0x140632710 (DifMmAllocateNonCachedMemoryWrapper.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MmFreePagesFromMdl @ 0x1403A37F0 (MmFreePagesFromMdl.c)
 *     MiAllocatePagesForMdl @ 0x14041225C (MiAllocatePagesForMdl.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     KeGetIdealNodeNumberThread @ 0x14048652C (KeGetIdealNodeNumberThread.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

PVOID __stdcall MmAllocateNonCachedMemory(SIZE_T NumberOfBytes)
{
  SIZE_T v1; // rsi
  unsigned __int16 IdealNodeNumberThread; // ax
  __int64 v3; // r8
  struct _MDL *PagesForMdl; // rbx
  unsigned __int64 v5; // rdi
  struct _MDL *v7; // r14
  __int64 v8; // rbp
  ULONG_PTR ValidPte; // rbx
  char *v10; // r14

  if ( NumberOfBytes > 0xFFFFFFFF )
    return 0LL;
  v1 = (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0);
  IdealNodeNumberThread = KeGetIdealNodeNumberThread((__int64)KeGetCurrentThread());
  PagesForMdl = (struct _MDL *)MiAllocatePagesForMdl(
                                 (int)&MiSystemPartition,
                                 0,
                                 -1,
                                 0LL,
                                 v3,
                                 0,
                                 IdealNodeNumberThread,
                                 4,
                                 (__int64)KeGetCurrentThread()->ApcState.Process,
                                 0LL);
  if ( !PagesForMdl )
    return 0LL;
  v5 = MiReservePtes((__int64)&unk_140E35D80, v1);
  if ( !v5 )
  {
    MmFreePagesFromMdl(PagesForMdl);
    ExFreePoolWithTag(PagesForMdl, 0);
    return 0LL;
  }
  v7 = PagesForMdl + 1;
  *(_QWORD *)(48 * (__int64)PagesForMdl[1].Next - 0x21FFFFFFFFF0LL) = PagesForMdl;
  v8 = (__int64)(v5 << 25) >> 16;
  ValidPte = MiMakeValidPte(v5, 0LL, -1610612724);
  v10 = (char *)v7 - v5;
  do
  {
    ValidPte = (*(_QWORD *)&v10[v5] << 12) ^ ((*(_QWORD *)&v10[v5] << 12) ^ ValidPte) & 0xFFF0000000000FFFuLL;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v5 >= MiGetPteAddress(0xFFFF800000000000uLL) )
      MiCheckLinearProtectedPteAccessedBit(v5, ValidPte, 128);
    *(_QWORD *)v5 = ValidPte;
    v5 += 8LL;
    --v1;
  }
  while ( v1 );
  return (PVOID)v8;
}
