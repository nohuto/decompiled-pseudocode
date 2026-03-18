/*
 * XREFs of MiInsertPhysicalPteMapping @ 0x1403CFC94
 * Callers:
 *     MiInsertViewOfPhysicalSection @ 0x1403CEF18 (MiInsertViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403CFA04 (MiMapLockedPagesInUserSpaceHelper.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiProtectionToCacheAttribute @ 0x1402EF870 (MiProtectionToCacheAttribute.c)
 *     MiMakeProtectionPfnCompatible @ 0x140313770 (MiMakeProtectionPfnCompatible.c)
 *     MiAssignInitialPageAttribute @ 0x1403A6FA4 (MiAssignInitialPageAttribute.c)
 *     KeChangeMemoryAttributes @ 0x1403CA178 (KeChangeMemoryAttributes.c)
 *     MiLocateLockedVadEvent @ 0x1403CDE38 (MiLocateLockedVadEvent.c)
 *     MiLookupIoPageNode @ 0x1403D0238 (MiLookupIoPageNode.c)
 *     MiShowBadMapper @ 0x1403D0830 (MiShowBadMapper.c)
 */

__int64 __fastcall MiInsertPhysicalPteMapping(__int64 a1)
{
  unsigned __int64 v1; // r15
  unsigned __int64 v3; // rsi
  unsigned int ProtectionPfnCompatible; // ebx
  int v5; // r12d
  __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // rcx
  ULONG_PTR ValidPte; // rax
  __int64 v10; // rcx
  ULONG_PTR v11; // rbx
  __int64 v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  ProtectionPfnCompatible = *(_DWORD *)(a1 + 24);
  v5 = MiProtectionToCacheAttribute(ProtectionPfnCompatible);
  if ( v3 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v3 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    v6 = 48 * v3 - 0x220000000000LL;
    if ( !(unsigned __int16)*(_DWORD *)(v6 + 32) )
      MiShowBadMapper(v3, 3uLL);
    if ( (HIWORD(*(_DWORD *)(v6 + 32)) & 0xC0) == 0xC0 )
      MiAssignInitialPageAttribute(48 * v3 - 0x220000000000LL, v5);
    if ( (unsigned __int8)BYTE2(*(_DWORD *)(v6 + 32)) >> 6 != v5 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, 48 * v3 - 0x220000000000LL);
  }
  else
  {
    v7 = MiLookupIoPageNode(v3);
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
      KeChangeMemoryAttributes(v8);
      v18 = *(_QWORD *)a1;
      *(_DWORD *)(a1 + 28) = 1;
      if ( (*(_DWORD *)(v18 + 48) & 0x70) == 0x40 )
        _InterlockedOr((volatile signed __int32 *)(MiLocateLockedVadEvent(v18, 8) + 84), 1u);
    }
  }
LABEL_13:
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 48LL) & 0x600000) != 0x600000 )
    ProtectionPfnCompatible |= 0x80000000;
  ValidPte = MiMakeValidPte(v1, v3, ProtectionPfnCompatible);
  v11 = ValidPte;
  if ( _bittest64(&MiFlags, 0x24u) )
  {
    if ( (ValidPte & 0x20) == 0 )
    {
      v10 = 0x4000000000LL;
      if ( v1 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(v1, ValidPte, 128);
    }
  }
  *(_QWORD *)v1 = v11;
  MiIncreaseUsedPtes(v10, ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u, 2);
  v12 = 48 * MiGetContainingPageTable(v1);
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
  {
    do
    {
      if ( (++v13 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v13);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v12 - 0x21FFFFFFFFE8LL) < 0 );
  }
  v14 = *(_QWORD *)(v12 - 0x21FFFFFFFFE8LL);
  v15 = v14 + 1;
  v16 = (v14 ^ (v14 + 1)) & 0xC000000000000000uLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v12 - 0x220000000000LL + 24) = v15 ^ v16;
  _InterlockedAnd64((volatile signed __int64 *)(v12 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
