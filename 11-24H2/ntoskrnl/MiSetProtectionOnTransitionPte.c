/*
 * XREFs of MiSetProtectionOnTransitionPte @ 0x1402386B4
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140232BB8 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140237480 (MiProtectPrivateMemory.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiSanitizePfnProtection @ 0x140238DA0 (MiSanitizePfnProtection.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInvalidPteConforms @ 0x140302590 (MiInvalidPteConforms.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiSetProtectionOnTransitionPte(__int64 a1, ULONG_PTR *a2, unsigned int a3, int a4)
{
  unsigned __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rax
  ULONG_PTR v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // r9
  unsigned __int64 v18; // r12
  unsigned int v19; // edx
  __int64 v20; // rsi
  unsigned __int64 i; // r15
  ULONG_PTR v22; // rsi
  __int64 v23; // rbx
  unsigned int v24; // r10d
  __int64 v25; // r11
  __int64 v26; // r9
  int v27; // ecx
  ULONG_PTR v28; // rbx
  int v29; // r13d
  int v30; // eax
  unsigned int v31; // [rsp+30h] [rbp-58h]
  int v32; // [rsp+34h] [rbp-54h] BYREF
  unsigned __int64 ValidPte; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+40h] [rbp-48h]

  v6 = *(unsigned int *)(a1 + 48);
  if ( (v6 & 0xA00000) == 0xA00000 )
  {
    v18 = 16LL;
    v34 = MiVadPageSizes[(v6 >> 19) & 3];
    if ( v34 != 16 )
      v18 = 1LL;
    if ( a3 != 24 )
    {
      v19 = 0;
      v20 = 0LL;
      v31 = 0;
      for ( i = 0LL; i < v18; ++i )
      {
        if ( i )
        {
          ++v20;
        }
        else
        {
          v22 = *a2;
          if ( qword_140E2DB80 )
          {
            if ( (v22 & 0x10) != 0 )
              v22 &= ~0x10uLL;
            else
              v22 &= ~qword_140E2DB80;
          }
          v20 = (v22 >> 12) & 0xFFFFFFFFFFLL;
          v23 = 48 * v20 - 0x220000000000LL;
          v32 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v32);
            while ( *(__int64 *)(v23 + 24) < 0 );
          }
          v24 = MiSanitizePfnProtection(a1, (*(_QWORD *)(v23 + 16) >> 5) & 0x1FLL, a3);
          *(_QWORD *)(v23 + 16) = (32LL * v24) ^ (v26 ^ (32LL * v24)) & 0xFFFFFFFFFFFFFC1FuLL;
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v27 = v24 | 0x4000000;
          if ( v34 < 0x200 )
            v27 = v24;
          v19 = v27 | 0x80000000;
          if ( (*(_DWORD *)(v25 + 48) & 0x600000) == 0x600000 )
            v19 = v27;
          v31 = v19;
        }
        ValidPte = MiMakeValidPte((unsigned __int64)a2, v20, v19);
        v28 = ValidPte;
        v29 = 0;
        if ( (unsigned int)MiPteInShadowRange(a2) )
        {
          v30 = MiSanitizeShadowPxe();
          v28 = ValidPte;
          v29 = v30;
        }
        if ( _bittest64(&MiFlags, 0x24u) && (v28 & 0x20) == 0 && (unsigned __int64)a2 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a2, v28, 128);
        *a2 = v28;
        if ( v29 )
          MiWritePteShadow();
        v19 = v31;
        ++a2;
      }
    }
    return 0LL;
  }
  else
  {
    v7 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
        v9 = v8;
        if ( (v8 & 0x800) == 0 )
          return 2LL;
        if ( (unsigned int)MiInvalidPteConforms(v8) )
        {
          if ( qword_140E2DB80 )
          {
            if ( (v9 & 0x10) != 0 )
              v10 &= ~0x10uLL;
            else
              v10 = v9 & ~qword_140E2DB80;
          }
          v11 = (v10 >> 12) & 0xFFFFFFFFFFLL;
          v12 = 48 * v11 - 0x220000000000LL;
          if ( v11 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
            break;
        }
      }
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v13 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
          {
            HvlNotifyLongSpinWait(v13);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
      if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) == v9 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
    {
      v12 = MiLockSpecialPurposeMemoryCachedPage(v12, 0LL);
      if ( !v12 )
        return 2LL;
    }
    if ( (ULONG_PTR *)(*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) != a2
      && (*(_QWORD *)(v12 + 40) & 0x10000000000LL) == 0 )
    {
      KeBugCheckEx(0x1Au, 0x411uLL, (ULONG_PTR)a2, v9, *(_QWORD *)(v12 + 8));
    }
    if ( !v12 )
      return 2LL;
    if ( a4 || !(unsigned __int16)*(_DWORD *)(v12 + 32) )
    {
      v14 = 32LL * (unsigned int)MiSanitizePfnProtection(a1, (*(_QWORD *)(v12 + 16) >> 5) & 0x1FLL, a3);
      *(_QWORD *)(v12 + 16) = v14 ^ (v16 ^ v14) & 0xFFFFFFFFFFFFFC1FuLL;
      *a2 = v14 ^ (v14 ^ v15) & 0xFFFFFFFFFFFFFC1FuLL;
    }
    else
    {
      v7 = 1;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return v7;
  }
}
