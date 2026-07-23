/*
 * XREFs of MiTradeActivePage @ 0x1402172BC
 * Callers:
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiReplaceLockedPage @ 0x1402158AC (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x1404286A0 (MiCompleteSecureProcessFault.c)
 *     MiProtectDriverSectionPte @ 0x14066C5D0 (MiProtectDriverSectionPte.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068DF2C (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiWriteValidPteNewPage @ 0x140217188 (MiWriteValidPteNewPage.c)
 *     MiActivePageTradeable @ 0x140217690 (MiActivePageTradeable.c)
 *     MiClearPfnReuseFields @ 0x140218960 (MiClearPfnReuseFields.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFinalizePageAttribute @ 0x14024C240 (MiFinalizePageAttribute.c)
 *     MiCopyPfnEntryEx @ 0x140251B90 (MiCopyPfnEntryEx.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiTransformValidPteInPlace @ 0x14038D668 (MiTransformValidPteInPlace.c)
 */

__int64 __fastcall MiTradeActivePage(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r13d
  __int64 v9; // r8
  unsigned __int64 *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  int v17; // r13d
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rdx
  unsigned int v24; // ebx
  unsigned int v25; // ebx
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rbx
  int v29; // edi
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r9
  int v35; // eax
  int v36; // eax
  unsigned __int64 v37; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v40; // [rsp+90h] [rbp+28h]
  int v41; // [rsp+90h] [rbp+28h]

  v5 = a4;
  if ( !(unsigned int)MiActivePageTradeable(a1, a3, a4, a5) )
    return 0LL;
  v38 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v10 = (unsigned __int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v11 = MI_READ_PTE_LOCK_FREE(v10, 0xAAAAAAAAAAAAAAABuLL, v9);
  v16 = v11;
  if ( v5 != 2 )
  {
    v17 = 0;
    v18 = v11 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    v37 = v18;
    if ( MiPteInShadowRange((unsigned __int64)v10) )
    {
      v35 = MiSanitizeShadowPxe(v19, (__int64)&v37, v20);
      v18 = v37;
      v17 = v35;
    }
    *v10 = v18;
    if ( v17 )
      MiWritePteShadow((__int64)v10, v18, v20, v21);
    v5 = a4;
    v22 = 1LL;
    v23 = a4;
    goto LABEL_8;
  }
  if ( (v11 & 0x42) != 0 )
  {
    MiWriteValidPteNewProtection((ULONG_PTR)v10);
    v23 = 2LL;
    v22 = 10LL;
LABEL_8:
    MiFlushSingleTbEntry(a3, v23, v22);
  }
  v40 = (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6;
  v24 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v24 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13, v12, v14, v15) )
      {
        HvlNotifyLongSpinWait(v24);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  v25 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v25 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13, v12, v14, v15) )
      {
        HvlNotifyLongSpinWait(v25);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  MiFinalizePageAttribute(a2, v40, 1LL);
  MiCopyPfnEntryEx(a2, a1);
  MiCopyPage(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4), v38, 6LL);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_BYTE *)(a1 + 35) &= ~8u;
  v41 = *(_DWORD *)(a1 + 32);
  BYTE2(v41) = BYTE2(v41) & 0xF8 | 5;
  *(_DWORD *)(a1 + 32) = v41;
  MiClearPfnReuseFields(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), v26);
  v27 = 0xAAAAAAAAAAAAB000uLL * ((a2 + 0x220000000000LL) >> 4);
  v28 = v27 ^ (v16 ^ v27) & 0xFFF0000000000FFFuLL;
  if ( v5 == 2 )
  {
    MiTransformValidPteInPlace((_DWORD)v10, (_DWORD)v10, v27 ^ (v16 ^ v27) & 0xFFF, 64, 0);
  }
  else
  {
    v38 = v27 ^ (v16 ^ v27) & 0xFFF0000000000FFFuLL;
    v29 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v10) )
    {
      v36 = MiSanitizeShadowPxe(v30, (__int64)&v38, v31);
      v28 = v38;
      v29 = v36;
    }
    if ( _bittest64(&MiFlags, 0x24u) && (v28 & 0x20) == 0 && (unsigned __int64)v10 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v10, v28, 128LL);
    *v10 = v28;
    if ( v29 )
      MiWritePteShadow((__int64)v10, v28, v31, v32);
    MiFlushSingleTbEntry(a3, v5, 64LL);
  }
  if ( *(__int64 *)(a2 + 40) < 0 )
    MiWriteValidPteNewPage(
      (volatile signed __int64 *)(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL),
      v27 ^ (*(_QWORD *)(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) ^ v27) & 0xFFF0000000000FFFuLL,
      0LL,
      v33);
  return 1LL;
}
