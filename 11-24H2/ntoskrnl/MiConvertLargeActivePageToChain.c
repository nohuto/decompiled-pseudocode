/*
 * XREFs of MiConvertLargeActivePageToChain @ 0x1403122A0
 * Callers:
 *     MiGetLargePagesForChain @ 0x140251524 (MiGetLargePagesForChain.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 *     MiGetClusterPage @ 0x1404CBFA4 (MiGetClusterPage.c)
 *     MiPrefetchPreallocatePages @ 0x1404CEA68 (MiPrefetchPreallocatePages.c)
 *     MiProcessVaContiguityInformation @ 0x14068E20C (MiProcessVaContiguityInformation.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanPfnOriginalPteBeLost @ 0x1402EE318 (MiCanPfnOriginalPteBeLost.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiArePageContentsZero @ 0x1404C33B0 (MiArePageContentsZero.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiConvertLargeActivePageToChain(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  ULONG_PTR v4; // rbp
  __int64 v5; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned int v7; // edi
  unsigned int v8; // r11d
  int v9; // eax
  __int64 result; // rax
  unsigned __int8 v11; // di
  int v12; // [rsp+50h] [rbp+8h]
  unsigned int v13; // [rsp+50h] [rbp+8h]
  int v14; // [rsp+50h] [rbp+8h]

  v2 = MiPageSizes[(unsigned int)MiGetPfnPageSizeIndex(a1)];
  v3 = a1 + 48 * v2;
  v4 = v2 - 0x5555555555555555LL * ((a1 + 0x220000000000LL) >> 4);
  v5 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  do
  {
    v3 -= 48LL;
    v7 = 0;
    --v4;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v7);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    v12 = *(_DWORD *)(v3 + 32);
    HIBYTE(v12) &= 0xF8u;
    *(_DWORD *)(v3 + 32) = v12;
    v13 = *(_DWORD *)(v3 + 32);
    v8 = HIWORD(v13);
    if ( (v13 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(v3)
      && (((*(_QWORD *)(v3 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(v3 + 34) >> 4)) != 0 )
    {
      *(_QWORD *)(v3 + 16) &= ~4uLL;
    }
    BYTE2(v13) = v8 & 0xEF;
    *(_DWORD *)(v3 + 32) = v13;
    if ( v3 == a1 )
    {
      if ( (*(_QWORD *)(v3 + 40) & 0x20000000000LL) != 0 )
        *(_QWORD *)(v3 + 40) &= ~0x20000000000uLL;
    }
    else
    {
      v14 = *(_DWORD *)(v3 + 32);
      BYTE2(v14) ^= (BYTE2(v14) ^ *(_BYTE *)(a1 + 34)) & 7;
      *(_DWORD *)(v3 + 32) = v14;
      *(_QWORD *)(v3 + 16) = *(_QWORD *)(a1 + 16);
    }
    if ( (*(_QWORD *)(v3 + 40) & 0x20000000000LL) != 0 )
      *(_QWORD *)(v3 + 40) &= ~0x20000000000uLL;
    *(_QWORD *)(v3 + 40) &= ~0x10000000000uLL;
    *(_DWORD *)(v3 + 36) &= 0xE7FFFFFF;
    *(_QWORD *)(v3 + 24) &= 0xC000000000000000uLL;
    v9 = *(_DWORD *)(v3 + 32);
    LOWORD(v9) = v9 - 2;
    *(_DWORD *)(v3 + 32) = v9;
    *(_QWORD *)v3 = 0LL;
    if ( (*(_QWORD *)(v3 + 16) & 0x3E0LL) == 0
      && (MiFlags & 0x80u) != 0LL
      && (++dword_140E302B0 & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(v4);
    }
    *(_QWORD *)v3 = v5;
    v5 = v3;
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v4 & 0x3F) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v11 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v11, 2LL);
      CurrentIrql = v11;
    }
  }
  while ( v3 != a1 );
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
