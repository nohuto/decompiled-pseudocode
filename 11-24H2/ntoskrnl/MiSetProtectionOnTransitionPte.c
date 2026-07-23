/*
 * XREFs of MiSetProtectionOnTransitionPte @ 0x140212844
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140202E14 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140204044 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiSanitizePfnProtection @ 0x140212F30 (MiSanitizePfnProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInvalidPteConforms @ 0x1403461F0 (MiInvalidPteConforms.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiSetProtectionOnTransitionPte(__int64 a1, ULONG_PTR *a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rax
  ULONG_PTR v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // r9
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // r9
  unsigned __int64 v19; // r12
  unsigned int v20; // edx
  __int64 v21; // rsi
  unsigned __int64 i; // r15
  ULONG_PTR v23; // rsi
  __int64 v24; // rbx
  unsigned int v25; // r10d
  __int64 v26; // r11
  __int64 v27; // r9
  int v28; // ecx
  ULONG_PTR v29; // rbx
  int v30; // r13d
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  unsigned int v35; // [rsp+30h] [rbp-58h]
  int v36; // [rsp+34h] [rbp-54h] BYREF
  unsigned __int64 ValidPte; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+40h] [rbp-48h]
  unsigned int v40; // [rsp+A0h] [rbp+18h]

  v40 = a3;
  v6 = *(unsigned int *)(a1 + 48);
  if ( (v6 & 0xA00000) == 0xA00000 )
  {
    v19 = 16LL;
    v38 = MiVadPageSizes[(v6 >> 19) & 3];
    if ( v38 != 16 )
      v19 = 1LL;
    if ( (_DWORD)a3 != 24 )
    {
      v20 = 0;
      v21 = 0LL;
      v35 = 0;
      for ( i = 0LL; i < v19; ++i )
      {
        if ( i )
        {
          ++v21;
        }
        else
        {
          v23 = *a2;
          if ( qword_140E2DCC0 )
          {
            if ( (v23 & 0x10) != 0 )
              v23 &= ~0x10uLL;
            else
              v23 &= ~qword_140E2DCC0;
          }
          v21 = (v23 >> 12) & 0xFFFFFFFFFFLL;
          v24 = 48 * v21 - 0x220000000000LL;
          v36 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v36);
            while ( *(__int64 *)(v24 + 24) < 0 );
          }
          v25 = MiSanitizePfnProtection(a1, (*(_QWORD *)(v24 + 16) >> 5) & 0x1FLL, v40);
          *(_QWORD *)(v24 + 16) = (32LL * v25) ^ (v27 ^ (32LL * v25)) & 0xFFFFFFFFFFFFFC1FuLL;
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v28 = v25 | 0x4000000;
          if ( v38 < 0x200 )
            v28 = v25;
          v20 = v28 | 0x80000000;
          if ( (*(_DWORD *)(v26 + 48) & 0x600000) == 0x600000 )
            v20 = v28;
          v35 = v20;
        }
        ValidPte = MiMakeValidPte((unsigned __int64)a2, v21, v20);
        v29 = ValidPte;
        v30 = 0;
        if ( MiPteInShadowRange((unsigned __int64)a2) )
        {
          v34 = MiSanitizeShadowPxe(v31, (__int64)&ValidPte, v32);
          v29 = ValidPte;
          v30 = v34;
        }
        if ( _bittest64(&MiFlags, 0x24u) && (v29 & 0x20) == 0 && (unsigned __int64)a2 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a2, v29, 128LL);
        *a2 = v29;
        if ( v30 )
          MiWritePteShadow((__int64)a2, v29, v32, v33);
        v20 = v35;
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
        v8 = MI_READ_PTE_LOCK_FREE(a2, v6, a3);
        v9 = v8;
        if ( (v8 & 0x800) == 0 )
          return 2LL;
        if ( (unsigned int)MiInvalidPteConforms(v8) )
        {
          if ( qword_140E2DCC0 )
          {
            if ( (v9 & 0x10) != 0 )
              v10 &= ~0x10uLL;
            else
              v10 = v9 & ~qword_140E2DCC0;
          }
          v12 = (v10 >> 12) & 0xFFFFFFFFFFLL;
          v6 = 6 * v12;
          v13 = 48 * v12 - 0x220000000000LL;
          if ( v12 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v12 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
            break;
        }
      }
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v14 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12, v6, a3, v11) )
          {
            HvlNotifyLongSpinWait(v14);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      if ( MI_READ_PTE_LOCK_FREE(a2, v6, a3) == v9 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v13 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
    {
      v13 = MiLockSpecialPurposeMemoryCachedPage(v13, 0);
      if ( !v13 )
        return 2LL;
    }
    if ( (ULONG_PTR *)(*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL) != a2
      && (*(_QWORD *)(v13 + 40) & 0x10000000000LL) == 0 )
    {
      KeBugCheckEx(0x1Au, 0x411uLL, (ULONG_PTR)a2, v9, *(_QWORD *)(v13 + 8));
    }
    if ( !v13 )
      return 2LL;
    if ( a4 || !(unsigned __int16)*(_DWORD *)(v13 + 32) )
    {
      v15 = 32LL * (unsigned int)MiSanitizePfnProtection(a1, (*(_QWORD *)(v13 + 16) >> 5) & 0x1FLL, v40);
      *(_QWORD *)(v13 + 16) = v15 ^ (v17 ^ v15) & 0xFFFFFFFFFFFFFC1FuLL;
      *a2 = v15 ^ (v15 ^ v16) & 0xFFFFFFFFFFFFFC1FuLL;
    }
    else
    {
      v7 = 1;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return v7;
  }
}
