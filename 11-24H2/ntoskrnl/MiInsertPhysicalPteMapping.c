/*
 * XREFs of MiInsertPhysicalPteMapping @ 0x1403910B8
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140390E28 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C8524 (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     MiAssignInitialPageAttribute @ 0x14026C070 (MiAssignInitialPageAttribute.c)
 *     MiShowBadMapper @ 0x140275730 (MiShowBadMapper.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiLookupIoPageNode @ 0x14038F750 (MiLookupIoPageNode.c)
 *     KeChangeMemoryAttributes @ 0x1403A4D48 (KeChangeMemoryAttributes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 */

__int64 __fastcall MiInsertPhysicalPteMapping(__int64 a1)
{
  unsigned __int64 v1; // r15
  unsigned __int64 v3; // rsi
  unsigned int ProtectionPfnCompatible; // ebx
  int v5; // r12d
  __int64 v6; // rbp
  int v7; // eax
  ULONG_PTR ValidPte; // rax
  __int64 v9; // rcx
  ULONG_PTR v10; // rbx
  __int64 v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 result; // rax
  __int64 v17; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  ProtectionPfnCompatible = *(_DWORD *)(a1 + 24);
  v5 = MiProtectionToCacheAttribute(ProtectionPfnCompatible);
  if ( v3 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v3 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    v6 = 48 * v3 - 0x220000000000LL;
    if ( !(unsigned __int16)*(_DWORD *)(v6 + 32) )
      MiShowBadMapper(v3, 3uLL, 2);
    if ( (HIWORD(*(_DWORD *)(v6 + 32)) & 0xC0) == 0xC0 )
      MiAssignInitialPageAttribute(48 * v3 - 0x220000000000LL, v5);
    if ( (unsigned __int8)BYTE2(*(_DWORD *)(v6 + 32)) >> 6 != v5 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, 48 * v3 - 0x220000000000LL);
  }
  else
  {
    v7 = MiLookupIoPageNode(v3, 1LL);
    ProtectionPfnCompatible &= 7u;
    if ( v7 )
    {
      if ( v7 == 2 )
      {
        ProtectionPfnCompatible |= 0x18u;
      }
      else if ( v7 == 1 )
      {
        goto LABEL_13;
      }
    }
    else
    {
      ProtectionPfnCompatible |= 0x10u;
    }
    if ( !*(_DWORD *)(a1 + 28) )
    {
      KeChangeMemoryAttributes();
      v17 = *(_QWORD *)a1;
      *(_DWORD *)(a1 + 28) = 1;
      if ( (*(_DWORD *)(v17 + 48) & 0x70) == 0x40 )
        _InterlockedOr((volatile signed __int32 *)(MiLocateLockedVadEvent(v17, 8) + 84), 1u);
    }
  }
LABEL_13:
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 48LL) & 0x600000) != 0x600000 )
    ProtectionPfnCompatible |= 0x80000000;
  ValidPte = MiMakeValidPte(v1, v3, ProtectionPfnCompatible);
  v10 = ValidPte;
  if ( _bittest64(&MiFlags, 0x24u) )
  {
    if ( (ValidPte & 0x20) == 0 )
    {
      v9 = 0x4000000000LL;
      if ( v1 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(v1, ValidPte, 128LL);
    }
  }
  *(_QWORD *)v1 = v10;
  MiIncreaseUsedPtes(v9, ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, 2LL);
  v11 = 48 * MiGetContainingPageTable(v1);
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v12);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v11 - 0x21FFFFFFFFE8LL) < 0 );
  }
  v13 = *(_QWORD *)(v11 - 0x21FFFFFFFFE8LL);
  v14 = v13 + 1;
  v15 = (v13 ^ (v13 + 1)) & 0xC000000000000000uLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v11 - 0x220000000000LL + 24) = v14 ^ v15;
  _InterlockedAnd64((volatile signed __int64 *)(v11 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
