/*
 * XREFs of MiInsertDemotedPages @ 0x1402EF010
 * Callers:
 *     MiInsertDemotedPages @ 0x1402EF010 (MiInsertDemotedPages.c)
 *     MiDemoteLargeFreePage @ 0x1402EFE44 (MiDemoteLargeFreePage.c)
 *     MiDemoteLocalLargePage @ 0x14033E130 (MiDemoteLocalLargePage.c)
 *     MiInsertPossiblyBadPage @ 0x14068461C (MiInsertPossiblyBadPage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanPfnOriginalPteBeLost @ 0x1402EE318 (MiCanPfnOriginalPteBeLost.c)
 *     MiInsertDemotedPages @ 0x1402EF010 (MiInsertDemotedPages.c)
 *     MiUpdateDemotedSubPage @ 0x1402EF390 (MiUpdateDemotedSubPage.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiInsertDemotedPages(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // r14
  unsigned int PfnPageSizeIndex; // eax
  __int64 v9; // r9
  __int64 v10; // r8
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r12
  ULONG_PTR v16; // rbp
  __int64 v17; // r13
  unsigned __int64 v18; // rbx
  __int16 v19; // r11
  int updated; // eax
  bool v21; // zf
  __int64 v22; // r8
  signed __int64 v23; // rax
  unsigned __int64 v24; // rcx
  signed __int64 v25; // rtt
  char v27; // al
  unsigned int v28; // [rsp+20h] [rbp-68h]
  unsigned int v29; // [rsp+24h] [rbp-64h]
  unsigned int v30; // [rsp+28h] [rbp-60h]
  unsigned __int64 v31; // [rsp+30h] [rbp-58h]
  unsigned __int64 v32; // [rsp+38h] [rbp-50h]
  int v34; // [rsp+98h] [rbp+10h]
  int v35; // [rsp+98h] [rbp+10h]
  int v36; // [rsp+98h] [rbp+10h]
  int v37; // [rsp+98h] [rbp+10h]
  int v38; // [rsp+98h] [rbp+10h]

  v4 = a1;
  v5 = 0;
  v6 = 0LL;
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(a2);
  v9 = PfnPageSizeIndex;
  v30 = PfnPageSizeIndex;
  v29 = ((*(_QWORD *)(a2 + 16) & 0x3E0LL) != 0) + 1;
  v10 = PfnPageSizeIndex < 2 ? 8 : 0;
  v11 = *(_QWORD *)(v10 + v4 + 15192);
  do
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v10 + v4 + 15192),
            (v11 + 1) ^ ((v11 + 1) ^ v11) & 0xFFFFFFFFFFFF0000uLL,
            v11);
  }
  while ( v12 != v11 );
  v13 = MiPageSizes[v9];
  v28 = v9 + 1;
  v14 = a2 + 48 * v13;
  v15 = MiPageSizes[(unsigned int)(v9 + 1)];
  v16 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v14 + 0x220000000000LL) >> 4);
  v31 = v13 / v15;
  if ( !(v13 / v15) )
    goto LABEL_18;
  v17 = 48 * v15;
  v18 = v14 + 24;
  do
  {
    v32 = v14;
    v16 -= v15;
    v14 -= v17;
    v18 -= v17;
    v19 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0x3FuLL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (v27 = KiCheckVpBackingLongSpinWaitHypercall(), v19 = 0, v27) )
        {
          HvlNotifyLongSpinWait(v5);
          v19 = 0;
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v18 < 0 );
    }
    v34 = *(_DWORD *)(v18 + 8);
    HIBYTE(v34) &= 0xF8u;
    *(_DWORD *)(v18 + 8) = v34;
    v35 = *(_DWORD *)(v18 + 8);
    if ( (v35 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(v14)
      && (((*(_QWORD *)(v18 - 8) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(v18 + 10) >> 4)) != 0 )
    {
      *(_QWORD *)(v18 - 8) &= ~4uLL;
    }
    BYTE2(v35) &= ~0x10u;
    *(_DWORD *)(v18 + 8) = v35;
    *(_QWORD *)(v18 - 8) = *(_QWORD *)(a2 + 16);
    if ( v14 != a2 )
    {
      *(_QWORD *)v18 &= 0xC000000000000000uLL;
      HIWORD(v36) = HIWORD(*(_DWORD *)(v18 + 8));
      LOWORD(v36) = v19;
      *(_DWORD *)(v18 + 8) = v36;
    }
    updated = MiUpdateDemotedSubPage(a2, v14, v28);
    if ( a3 < v14 || a3 >= v32 )
    {
      if ( !updated )
      {
        if ( (*(_DWORD *)(v18 + 8) & 0x40000000) == 0 )
          v6 += v15;
        MiInsertPageInFreeOrZeroedList(v16, v29);
        goto LABEL_15;
      }
    }
    else if ( a4 == v28 )
    {
      v37 = *(_DWORD *)(v18 + 8);
      BYTE2(v37) = BYTE2(v37) & 0xF8 | 5;
      *(_DWORD *)(v18 + 8) = v37;
LABEL_15:
      _InterlockedAnd64((volatile signed __int64 *)v18, 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_16;
    }
    v38 = *(_DWORD *)(v18 + 8);
    BYTE2(v38) = BYTE2(v38) & 0xF8 | 5;
    *(_DWORD *)(v18 + 8) = v38;
    _InterlockedAnd64((volatile signed __int64 *)v18, 0x7FFFFFFFFFFFFFFFuLL);
    v6 += MiInsertDemotedPages(a1, v14, a3, a4);
LABEL_16:
    v21 = v31-- == 1;
    v5 = 0;
  }
  while ( !v21 );
  LODWORD(v9) = v30;
  v4 = a1;
LABEL_18:
  v22 = (unsigned int)v9 < 2 ? 8 : 0;
  v23 = *(_QWORD *)(v22 + v4 + 15192);
  do
  {
    v24 = (v23 - 1) ^ ((v23 - 1) ^ v23) & 0xFFFFFFFFFFFF0000uLL;
    if ( (_WORD)v23 == 1 )
      v24 ^= (v24 ^ (v24 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
    v25 = v23;
    v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + v4 + 15192), v24, v23);
  }
  while ( v25 != v23 );
  return v6;
}
