/*
 * XREFs of MmAllocateIndependentPagesEx @ 0x140A8536C
 * Callers:
 *     KiAllocateProcessorStacks @ 0x1405B2FC8 (KiAllocateProcessorStacks.c)
 *     HvlInitializeProcessor @ 0x14070C95C (HvlInitializeProcessor.c)
 *     HvlAllocateHibernateResources @ 0x14070CFE4 (HvlAllocateHibernateResources.c)
 *     ExCreatePoolTagTable @ 0x1407B814C (ExCreatePoolTagTable.c)
 *     MmAllocateIsrStack @ 0x1407F72DC (MmAllocateIsrStack.c)
 *     HvpAllocateNonPagedBin @ 0x140A588D8 (HvpAllocateNonPagedBin.c)
 *     MmAllocateIndependentPages @ 0x140A85350 (MmAllocateIndependentPages.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 *     PspIumInitialize @ 0x140C37F94 (PspIumInitialize.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x14021D558 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiInitializePfn @ 0x14024B260 (MiInitializePfn.c)
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiGetNextPageColor @ 0x1404317F0 (MiGetNextPageColor.c)
 *     MiObtainPoolCharges @ 0x14044DFCC (MiObtainPoolCharges.c)
 *     MiReturnExcessPoolCharges @ 0x14044F9D8 (MiReturnExcessPoolCharges.c)
 */

__int64 __fastcall MmAllocateIndependentPagesEx(unsigned __int64 a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r13
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  unsigned __int64 ValidPte; // rax
  int v10; // ecx
  ULONG_PTR v11; // rbx
  __int64 v12; // r15
  int v13; // r12d
  unsigned int NextPageColor; // edi
  __int64 v15; // r11
  __int64 i; // rdx
  __int64 SlabPage; // rax
  __int64 Page; // r9
  int v19; // [rsp+30h] [rbp-68h]
  __int64 v20; // [rsp+38h] [rbp-60h]
  __int64 v21; // [rsp+40h] [rbp-58h]
  _OWORD v22[5]; // [rsp+48h] [rbp-50h] BYREF
  BOOL v23; // [rsp+A0h] [rbp+8h]

  v5 = a3;
  v6 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  v22[0] = 0LL;
  v7 = MiReservePtes((__int64)&qword_140E376A8, v6);
  if ( !v7 )
    return 0LL;
  if ( !(unsigned int)MiObtainPoolCharges(v6, 1) )
  {
    MiReleasePtes((__int64)&qword_140E376A8, (_QWORD *)v7, v6);
    return 0LL;
  }
  v23 = v5 && (dword_140E38D44 & 8) != 0 && ((MiFlags & 0x100000000LL) == 0 || (MiFlags & 0x200000000LL) != 0);
  v21 = (__int64)(v7 << 25) >> 16;
  ValidPte = MiMakeValidPte(v7, 0LL, -1610612732);
  v10 = 0;
  v11 = ValidPte;
  if ( a2 != -1 )
    v10 = a2 + 1;
  v19 = v10;
  MiInitializePageColorBase(0LL, 3, v10, (__int64)v22);
  v12 = 0LL;
  v20 = 0LL;
  do
  {
    v13 = 0;
    NextPageColor = MiGetNextPageColor((__int64)v22);
    if ( v23 )
    {
      if ( v5 != -1 )
      {
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          if ( (unsigned int)i >= a4 )
            goto LABEL_21;
          if ( v15 == *(_QWORD *)(v5 + 8 * i) >> 12 )
            break;
        }
      }
      v13 = 1;
    }
LABEL_21:
    while ( 1 )
    {
      if ( v13 )
      {
        SlabPage = MiGetSlabPage(
                     (__int64)&MiSystemPartition,
                     1,
                     NextPageColor,
                     v19 != 0 ? 4 : 6,
                     (__int64 *)0xFFFFFFFFFFFFFFFFLL,
                     0);
        if ( SlabPage != -1 )
          break;
      }
      Page = MiGetPage((__int64)&MiSystemPartition, NextPageColor, 0x80u);
      if ( Page != -1 )
        goto LABEL_27;
      MiWaitForFreePage((__int64)&MiSystemPartition, 0);
    }
    if ( (unsigned int)MiIsPfnFromChargedSlabAllocation(48 * SlabPage - 0x220000000000LL) )
      ++v12;
LABEL_27:
    v11 = (Page << 12) ^ ((Page << 12) ^ v11) & 0xFFF0000000000FFFuLL;
    MiInitializePfn(48 * Page - 0x220000000000LL, (_KPROCESS *)v7, 4uLL, 4);
    if ( _bittest64(&MiFlags, 0x24u) && (v11 & 0x20) == 0 && v7 >= MiGetPteAddress(0xFFFF800000000000uLL) )
      MiCheckLinearProtectedPteAccessedBit(v7, v11, 128LL);
    v5 = a3;
    *(_QWORD *)v7 = v11;
    v7 += 8LL;
    ++v20;
    --v6;
  }
  while ( v6 );
  if ( v12 )
    MiReturnExcessPoolCharges(v12, 1LL);
  return v21;
}
