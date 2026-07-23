/*
 * XREFs of MiUpdatePfnProtection @ 0x140212AA8
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140202E14 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiMakeVaRangeNoAccess @ 0x14049351C (MiMakeVaRangeNoAccess.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiUpdatePfnProtection(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  unsigned int v7; // esi
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // eax
  unsigned __int64 DemandZeroPte; // rax
  unsigned int v14; // edx
  int v15; // edx

  v4 = a3;
  v5 = a2;
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
      {
        HvlNotifyLongSpinWait(v7);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  v8 = *(_QWORD *)(v5 + 16);
  v9 = 24LL;
  v10 = (v8 >> 5) & 0x1F;
  if ( v4 != 24 )
  {
    if ( (_DWORD)v10 == 24
      && ((v14 = *(_DWORD *)(a1 + 48), (v14 & 0x200000) == 0)
        ? (v15 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 32LL) >> 1)
        : (v15 = v14 >> 7),
          a2 = v15 & 0x1F,
          LOBYTE(v10) = a2,
          (_DWORD)a2 == 24)
      || (v11 = v10 & 0x18) == 0 )
    {
      if ( (v4 & 0x18) == 0x18 )
      {
        v4 &= 0xFFFFFFE7;
        goto LABEL_9;
      }
      if ( (v4 & 0x18) != 8 )
      {
LABEL_9:
        v9 = v4;
        goto LABEL_10;
      }
    }
    else if ( v11 != 16 )
    {
      if ( v11 == 8 )
      {
        v4 = v4 & 0xFFFFFFE7 | 8;
      }
      else if ( v11 == 24 )
      {
        v4 |= 0x18u;
      }
      goto LABEL_9;
    }
    v4 &= ~8u;
    goto LABEL_9;
  }
LABEL_10:
  if ( v8 )
    DemandZeroPte = (32LL * (unsigned int)v9) ^ (v8 ^ (32LL * (unsigned int)v9)) & 0xFFFFFFFFFFFFFC1FuLL;
  else
    DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v9, a2, v9, a4);
  *(_QWORD *)(v5 + 16) = DemandZeroPte;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return (unsigned int)v9;
}
