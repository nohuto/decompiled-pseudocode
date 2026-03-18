/*
 * XREFs of MiConvertLargeActivePageToChain @ 0x1402220D4
 * Callers:
 *     MiGetLargePagesForChain @ 0x140222408 (MiGetLargePagesForChain.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 *     MiGetClusterPage @ 0x1404D2FFC (MiGetClusterPage.c)
 *     MiPrefetchPreallocatePages @ 0x1404D5F34 (MiPrefetchPreallocatePages.c)
 *     MiProcessVaContiguityInformation @ 0x14068184C (MiProcessVaContiguityInformation.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140388D44 (MiCanPfnOriginalPteBeLost.c)
 *     MiArePageContentsZero @ 0x1404C9D90 (MiArePageContentsZero.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiConvertLargeActivePageToChain(__int64 a1)
{
  __int64 PfnPageSizeIndex; // rdx
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  ULONG_PTR v6; // rbp
  __int64 v7; // r15
  unsigned __int8 CurrentIrql; // di
  unsigned int v9; // esi
  __int64 result; // rax
  int v11; // [rsp+40h] [rbp+8h]
  int v12; // [rsp+40h] [rbp+8h]
  unsigned int v13; // [rsp+40h] [rbp+8h]
  int v14; // [rsp+40h] [rbp+8h]

  PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(a1);
  v3 = MiPageSizes[PfnPageSizeIndex];
  v4 = 0xAAAAAAAAAAAAAAABuLL;
  v5 = a1 + 48 * v3;
  v6 = v3 - 0x5555555555555555LL * ((a1 + 0x220000000000LL) >> 4);
  v7 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v4);
  }
  do
  {
    v5 -= 48LL;
    --v6;
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v4) )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
    v11 = *(_DWORD *)(v5 + 32);
    HIBYTE(v11) &= 0xF8u;
    *(_DWORD *)(v5 + 32) = v11;
    v12 = *(_DWORD *)(v5 + 32);
    if ( (v12 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(v5)
      && (((*(_QWORD *)(v5 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(v5 + 34) >> 4)) != 0 )
    {
      *(_QWORD *)(v5 + 16) &= ~4uLL;
    }
    BYTE2(v12) &= ~0x10u;
    *(_DWORD *)(v5 + 32) = v12;
    if ( v5 == a1 )
    {
      if ( (*(_QWORD *)(v5 + 40) & 0x20000000000LL) != 0 )
        *(_QWORD *)(v5 + 40) &= ~0x20000000000uLL;
    }
    else
    {
      v13 = *(_DWORD *)(v5 + 32);
      PfnPageSizeIndex = HIWORD(v13);
      BYTE2(v13) ^= (*(_BYTE *)(a1 + 34) ^ BYTE2(v13)) & 7;
      *(_DWORD *)(v5 + 32) = v13;
      *(_QWORD *)(v5 + 16) = *(_QWORD *)(a1 + 16);
    }
    if ( (*(_QWORD *)(v5 + 40) & 0x20000000000LL) != 0 )
      *(_QWORD *)(v5 + 40) &= ~0x20000000000uLL;
    v4 = 0xC000000000000000uLL;
    *(_QWORD *)(v5 + 40) &= ~0x10000000000uLL;
    *(_DWORD *)(v5 + 36) &= 0xE7FFFFFF;
    *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
    v14 = *(_DWORD *)(v5 + 32);
    LOWORD(v14) = v14 - 2;
    *(_DWORD *)(v5 + 32) = v14;
    *(_QWORD *)v5 = 0LL;
    if ( (*(_QWORD *)(v5 + 16) & 0x3E0LL) == 0
      && (MiFlags & 0x80u) != 0LL
      && (++dword_140E2FF28 & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(v6);
    }
    *(_QWORD *)v5 = v7;
    v7 = v5;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v6 & 0x3F) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(PfnPageSizeIndex) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), PfnPageSizeIndex);
      }
      __writecr8(CurrentIrql);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v4) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v4);
      }
    }
  }
  while ( v5 != a1 );
  if ( KiIrqlFlags )
  {
    LOBYTE(PfnPageSizeIndex) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), PfnPageSizeIndex);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
