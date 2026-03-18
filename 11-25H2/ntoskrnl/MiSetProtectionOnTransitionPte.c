/*
 * XREFs of MiSetProtectionOnTransitionPte @ 0x14037F4E0
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14037D0D8 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizePfnProtection @ 0x14037E100 (MiSanitizePfnProtection.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
  int v13; // r15d
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r9
  unsigned __int64 v20; // r12
  unsigned int v21; // edx
  __int64 v22; // rsi
  unsigned __int64 i; // r15
  ULONG_PTR v24; // rsi
  __int64 v25; // rbx
  unsigned int v26; // r10d
  __int64 v27; // r11
  __int64 v28; // r9
  int v29; // ecx
  ULONG_PTR v30; // rbx
  int v31; // r13d
  __int64 v32; // rcx
  int v33; // eax
  unsigned int v34; // [rsp+30h] [rbp-58h]
  int v35; // [rsp+34h] [rbp-54h] BYREF
  unsigned __int64 ValidPte; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+40h] [rbp-48h]

  v6 = *(unsigned int *)(a1 + 48);
  if ( (v6 & 0xA00000) == 0xA00000 )
  {
    v20 = 16LL;
    v37 = MiVadPageSizes[(v6 >> 19) & 3];
    if ( v37 != 16 )
      v20 = 1LL;
    if ( a3 != 24 )
    {
      v21 = 0;
      v22 = 0LL;
      v34 = 0;
      for ( i = 0LL; i < v20; ++i )
      {
        if ( i )
        {
          ++v22;
        }
        else
        {
          v24 = *a2;
          if ( qword_140E2D940 )
          {
            if ( (v24 & 0x10) != 0 )
              v24 &= ~0x10uLL;
            else
              v24 &= ~qword_140E2D940;
          }
          v22 = (v24 >> 12) & 0xFFFFFFFFFFLL;
          v25 = 48 * v22 - 0x220000000000LL;
          v35 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v35);
            while ( *(__int64 *)(v25 + 24) < 0 );
          }
          v26 = MiSanitizePfnProtection(a1, (*(_QWORD *)(v25 + 16) >> 5) & 0x1F, a3);
          *(_QWORD *)(v25 + 16) = (32LL * v26) ^ (v28 ^ (32LL * v26)) & 0xFFFFFFFFFFFFFC1FuLL;
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v29 = v26 | 0x4000000;
          if ( v37 < 0x200 )
            v29 = v26;
          v21 = v29 | 0x80000000;
          if ( (*(_DWORD *)(v27 + 48) & 0x600000) == 0x600000 )
            v21 = v29;
          v34 = v21;
        }
        ValidPte = MiMakeValidPte((unsigned __int64)a2, v22, v21);
        v30 = ValidPte;
        v31 = 0;
        if ( MiPteInShadowRange((unsigned __int64)a2) )
        {
          v33 = MiSanitizeShadowPxe(v32, &ValidPte);
          v30 = ValidPte;
          v31 = v33;
        }
        if ( _bittest64(&MiFlags, 0x24u) && (v30 & 0x20) == 0 && (unsigned __int64)a2 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a2, v30, 128);
        *a2 = v30;
        if ( v31 )
          MiWritePteShadow(a2, v30);
        v21 = v34;
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
        if ( MiInvalidPteConforms(v8) )
        {
          if ( qword_140E2D940 )
          {
            if ( (v9 & 0x10) != 0 )
              v10 &= ~0x10uLL;
            else
              v10 = v9 & ~qword_140E2D940;
          }
          v11 = (v10 >> 12) & 0xFFFFFFFFFFLL;
          v12 = 48 * v11 - 0x220000000000LL;
          if ( v11 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
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
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
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
    if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
    {
      v12 = MiLockSpecialPurposeMemoryCachedPage(v12, 0LL, v14, v15);
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
      v16 = 32LL * (unsigned int)MiSanitizePfnProtection(a1, (*(_QWORD *)(v12 + 16) >> 5) & 0x1F, a3);
      *(_QWORD *)(v12 + 16) = v16 ^ (v18 ^ v16) & 0xFFFFFFFFFFFFFC1FuLL;
      *a2 = v16 ^ (v16 ^ v17) & 0xFFFFFFFFFFFFFC1FuLL;
    }
    else
    {
      v7 = 1;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return v7;
  }
}
