/*
 * XREFs of MiTradeActivePage @ 0x1403FE5A0
 * Callers:
 *     MiCompleteSecureProcessFault @ 0x1403F3164 (MiCompleteSecureProcessFault.c)
 *     MiReplaceLockedPage @ 0x1403FE3AC (MiReplaceLockedPage.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068156C (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiFinalizePageAttribute @ 0x14024DDE0 (MiFinalizePageAttribute.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiClearPfnReuseFields @ 0x1402C4CC0 (MiClearPfnReuseFields.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiCopyPfnEntryEx @ 0x1402C7CF0 (MiCopyPfnEntryEx.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiActivePageTradeable @ 0x1403FF1D0 (MiActivePageTradeable.c)
 *     MiWriteValidPteNewPage @ 0x1403FF2B0 (MiWriteValidPteNewPage.c)
 *     MiTransformValidPteInPlace @ 0x1403FF3E4 (MiTransformValidPteInPlace.c)
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
  int v16; // ebx
  int v17; // ebx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r15
  ULONG_PTR v20; // rbx
  int v21; // edi
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]
  unsigned int v25; // [rsp+90h] [rbp+28h]
  int v26; // [rsp+90h] [rbp+28h]

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
  v25 = (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6;
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v16 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
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
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  MiFinalizePageAttribute(a2, v25, 1LL);
  MiCopyPfnEntryEx(a2, a1);
  MiCopyPage(
    0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4),
    0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4),
    6);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_BYTE *)(a1 + 35) &= ~8u;
  v26 = *(_DWORD *)(a1 + 32);
  BYTE2(v26) = BYTE2(v26) & 0xF8 | 5;
  *(_DWORD *)(a1 + 32) = v26;
  MiClearPfnReuseFields(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), v18);
  v19 = 0xAAAAAAAAAAAAB000uLL * ((a2 + 0x220000000000LL) >> 4);
  v20 = v19 ^ (v11 ^ v19) & 0xFFF0000000000FFFuLL;
  if ( v5 == 2 )
  {
    MiTransformValidPteInPlace((_DWORD)v9, (_DWORD)v9, v19 ^ (v11 ^ v19) & 0xFFF, 64, 0);
  }
  else
  {
    v23 = v19 ^ (v11 ^ v19) & 0xFFF0000000000FFFuLL;
    v21 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v9) )
    {
      v20 = v23;
      v21 = MiSanitizeShadowPxe();
    }
    if ( _bittest64(&MiFlags, 0x24u) && (v20 & 0x20) == 0 && (unsigned __int64)v9 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v9, v20, 128);
    *v9 = v20;
    if ( v21 )
      MiWritePteShadow();
    MiFlushSingleTbEntry(a3, v5, 64);
  }
  if ( *(__int64 *)(a2 + 40) < 0 )
    MiWriteValidPteNewPage(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL);
  return 1LL;
}
