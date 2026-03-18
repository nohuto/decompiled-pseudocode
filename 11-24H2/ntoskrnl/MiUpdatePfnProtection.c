/*
 * XREFs of MiUpdatePfnProtection @ 0x140238918
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140232BB8 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiMakeVaRangeNoAccess @ 0x140498B94 (MiMakeVaRangeNoAccess.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiUpdatePfnProtection(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // esi
  unsigned __int64 v7; // rcx
  unsigned int v8; // r8d
  __int64 v9; // rax
  int v10; // eax
  unsigned __int64 DemandZeroPte; // rax
  unsigned int v13; // edx
  int v14; // edx
  int v15; // edx

  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  v7 = *(_QWORD *)(a2 + 16);
  v8 = 24;
  v9 = (v7 >> 5) & 0x1F;
  if ( a3 != 24 )
  {
    if ( (_DWORD)v9 == 24
      && ((v13 = *(_DWORD *)(a1 + 48), (v13 & 0x200000) == 0)
        ? (v14 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 32LL) >> 1)
        : (v14 = v13 >> 7),
          v15 = v14 & 0x1F,
          LOBYTE(v9) = v15,
          v15 == 24)
      || (v10 = v9 & 0x18) == 0 )
    {
      if ( (a3 & 0x18) == 0x18 )
      {
        a3 &= 0xFFFFFFE7;
        goto LABEL_9;
      }
      if ( (a3 & 0x18) != 8 )
      {
LABEL_9:
        v8 = a3;
        goto LABEL_10;
      }
    }
    else if ( v10 != 16 )
    {
      if ( v10 == 8 )
      {
        a3 = a3 & 0xFFFFFFE7 | 8;
      }
      else if ( v10 == 24 )
      {
        a3 |= 0x18u;
      }
      goto LABEL_9;
    }
    a3 &= ~8u;
    goto LABEL_9;
  }
LABEL_10:
  if ( v7 )
    DemandZeroPte = (32LL * v8) ^ (v7 ^ (32LL * v8)) & 0xFFFFFFFFFFFFFC1FuLL;
  else
    DemandZeroPte = MiMakeDemandZeroPte(v8);
  *(_QWORD *)(a2 + 16) = DemandZeroPte;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v8;
}
