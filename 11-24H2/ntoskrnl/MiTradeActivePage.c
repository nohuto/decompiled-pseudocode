/*
 * XREFs of MiTradeActivePage @ 0x1403A0758
 * Callers:
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiReplaceLockedPage @ 0x14039F10C (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x140435C20 (MiCompleteSecureProcessFault.c)
 *     MiProtectDriverSectionPte @ 0x14066B400 (MiProtectDriverSectionPte.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068CDFC (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFinalizePageAttribute @ 0x14021F4F0 (MiFinalizePageAttribute.c)
 *     MiCopyPfnEntryEx @ 0x1402247E0 (MiCopyPfnEntryEx.c)
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiTransformValidPteInPlace @ 0x14039404C (MiTransformValidPteInPlace.c)
 *     MiActivePageTradeable @ 0x1403A0B30 (MiActivePageTradeable.c)
 *     MiClearPfnReuseFields @ 0x1403A1D30 (MiClearPfnReuseFields.c)
 *     MiWriteValidPteNewPage @ 0x1403A28B8 (MiWriteValidPteNewPage.c)
 */

__int64 __fastcall MiTradeActivePage(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  int v5; // r13d
  unsigned __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // r13d
  unsigned __int64 v13; // rbx
  int v14; // r8d
  int v15; // edx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r15
  ULONG_PTR v22; // rbx
  int v23; // edi
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]
  unsigned int v27; // [rsp+90h] [rbp+28h]
  int v28; // [rsp+90h] [rbp+28h]

  v5 = a4;
  if ( !(unsigned int)MiActivePageTradeable(a1, a3, a4, a5) )
    return 0LL;
  v9 = (unsigned __int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
  v11 = v10;
  if ( v5 != 2 )
  {
    v12 = 0;
    v13 = v10 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    if ( MiPteInShadowRange((unsigned __int64)v9) )
      v12 = MiSanitizeShadowPxe();
    *v9 = v13;
    if ( v12 )
      MiWritePteShadow();
    v5 = a4;
    v14 = 1;
    v15 = a4;
    goto LABEL_8;
  }
  if ( (v10 & 0x42) != 0 )
  {
    MiWriteValidPteNewProtection((ULONG_PTR)v9, v10 & 0xFFFFFFFFFFFFFFBDuLL);
    v15 = 2;
    v14 = 10;
LABEL_8:
    MiFlushSingleTbEntry(a3, v15, v14);
  }
  v27 = (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6;
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v16 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v16);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  v17 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v17 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v17);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  MiFinalizePageAttribute(a2, v27, 1LL);
  MiCopyPfnEntryEx(a2, a1);
  MiCopyPage(
    0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4),
    0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4),
    6);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_BYTE *)(a1 + 35) &= ~8u;
  v28 = *(_DWORD *)(a1 + 32);
  BYTE2(v28) = BYTE2(v28) & 0xF8 | 5;
  *(_DWORD *)(a1 + 32) = v28;
  MiClearPfnReuseFields(a1, v18, v19, 0x7FFFFFFFFFFFFFFFLL);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), v20);
  v21 = 0xAAAAAAAAAAAAB000uLL * ((a2 + 0x220000000000LL) >> 4);
  v22 = v21 ^ (v11 ^ v21) & 0xFFF0000000000FFFuLL;
  if ( v5 == 2 )
  {
    MiTransformValidPteInPlace((ULONG_PTR)v9, (__int64)v9, v21 ^ (v11 ^ v21) & 0xFFF0000000000FFFuLL, 0x40u, 0);
  }
  else
  {
    v25 = v21 ^ (v11 ^ v21) & 0xFFF0000000000FFFuLL;
    v23 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v9) )
    {
      v22 = v25;
      v23 = MiSanitizeShadowPxe();
    }
    if ( _bittest64(&MiFlags, 0x24u) && (v22 & 0x20) == 0 && (unsigned __int64)v9 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v9, v22, 128);
    *v9 = v22;
    if ( v23 )
      MiWritePteShadow();
    MiFlushSingleTbEntry(a3, v5, 64);
  }
  if ( *(__int64 *)(a2 + 40) < 0 )
    MiWriteValidPteNewPage(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL);
  return 1LL;
}
