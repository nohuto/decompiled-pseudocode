/*
 * XREFs of MiDemoteLargeFreePage @ 0x1402EFE44
 * Callers:
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertDemotedPages @ 0x1402EF010 (MiInsertDemotedPages.c)
 *     MiObtainedPageIsGood @ 0x1402F0004 (MiObtainedPageIsGood.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x140310FE0 (MiGetBaseResidentPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDemoteLargeFreePage(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  unsigned int IsGood; // ebp
  __int64 v5; // r15
  __int64 BaseResidentPage; // rdi
  __int64 v7; // rdx
  unsigned int PfnPageSizeIndex; // r12d
  __int64 v10; // r14
  __int64 v11; // r8
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v14; // r8
  signed __int64 v15; // rax
  unsigned __int64 v16; // rcx
  signed __int64 v17; // rtt
  signed __int32 v18[18]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a2;
  v3 = 48 * a1 - 0x220000000000LL;
  IsGood = 0;
  v5 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL));
  BaseResidentPage = MiGetBaseResidentPage(v3);
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
  if ( BaseResidentPage != v3 )
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_BYTE *)(BaseResidentPage + 34) & 7u) <= 1 )
  {
    v10 = *(_QWORD *)(v5 + 16)
        + 57216LL * (unsigned int)MiPageToNode(0xAAAAAAAAAAAAAAABuLL * ((BaseResidentPage + 0x220000000000LL) >> 4));
    v11 = PfnPageSizeIndex < 2 ? 8 : 0;
    v12 = *(_QWORD *)(v11 + v10 + 15192);
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v11 + v10 + 15192),
              (v12 + 1) ^ (v12 ^ (v12 + 1)) & 0xFFFFFFFFFFFF0000uLL,
              v12);
    }
    while ( v13 != v12 );
    _InterlockedOr(v18, 0);
    MiUnlinkFreeOrZeroedPage(0xAAAAAAAAAAAAAAABuLL * ((BaseResidentPage + 0x220000000000LL) >> 4), 0LL, 0);
    _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiInsertDemotedPages(v10, BaseResidentPage, v3, 3u);
    v14 = PfnPageSizeIndex < 2 ? 8 : 0;
    v15 = *(_QWORD *)(v14 + v10 + 15192);
    do
    {
      v16 = (v15 - 1) ^ (v15 ^ (v15 - 1)) & 0xFFFFFFFFFFFF0000uLL;
      if ( (_WORD)v15 == 1 )
        v16 ^= (v16 ^ (v16 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
      v17 = v15;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + v10 + 15192), v16, v15);
    }
    while ( v17 != v15 );
    IsGood = MiObtainedPageIsGood(v3);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (unsigned __int8)v2 < 2u )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = v2;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    }
    __writecr8(v2);
  }
  return IsGood;
}
