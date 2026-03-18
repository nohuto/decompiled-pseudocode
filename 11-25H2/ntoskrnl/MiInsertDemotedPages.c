/*
 * XREFs of MiInsertDemotedPages @ 0x140386CE0
 * Callers:
 *     MiDemoteLocalLargePage @ 0x140229CD0 (MiDemoteLocalLargePage.c)
 *     MiInsertDemotedPages @ 0x140386CE0 (MiInsertDemotedPages.c)
 *     MiDemoteLargeFreePage @ 0x14048BA98 (MiDemoteLargeFreePage.c)
 *     MiInsertPossiblyBadPage @ 0x140677C6C (MiInsertPossiblyBadPage.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertDemotedPages @ 0x140386CE0 (MiInsertDemotedPages.c)
 *     MiUpdateDemotedSubPage @ 0x140387000 (MiUpdateDemotedSubPage.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 */

__int64 __fastcall MiInsertDemotedPages(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  int v5; // edi
  __int64 v6; // rsi
  unsigned int PfnPageSizeIndex; // eax
  __int64 v9; // r9
  __int16 v10; // r13
  __int64 v11; // r8
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r14
  ULONG_PTR v17; // rbp
  __int64 v18; // rax
  unsigned __int64 v19; // r12
  int updated; // eax
  bool v21; // zf
  volatile signed __int64 *v22; // r8
  signed __int64 v23; // rax
  unsigned __int64 v24; // rcx
  signed __int64 v25; // rtt
  unsigned int v27; // [rsp+20h] [rbp-68h]
  unsigned int v28; // [rsp+24h] [rbp-64h]
  unsigned __int64 v29; // [rsp+28h] [rbp-60h]
  int v31; // [rsp+98h] [rbp+10h]
  int v32; // [rsp+98h] [rbp+10h]
  int v33; // [rsp+98h] [rbp+10h]
  int v34; // [rsp+98h] [rbp+10h]

  v5 = 0;
  v6 = 0LL;
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(a2);
  v9 = PfnPageSizeIndex;
  v28 = PfnPageSizeIndex;
  v10 = (*(_QWORD *)(a2 + 16) & 0x3E0LL) != 0;
  v11 = PfnPageSizeIndex < 2 ? 8 : 0;
  v12 = *(_QWORD *)(v11 + a1 + 15192);
  do
  {
    v13 = v12;
    v12 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v11 + a1 + 15192),
            (v12 + 1) ^ (v12 ^ (v12 + 1)) & 0xFFFFFFFFFFFF0000uLL,
            v12);
  }
  while ( v13 != v12 );
  v14 = MiPageSizes[v9];
  v27 = v9 + 1;
  v15 = a2 + 48 * v14;
  v16 = MiPageSizes[(unsigned int)(v9 + 1)];
  v17 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v15 + 0x220000000000LL) >> 4);
  v29 = v14 / v16;
  if ( !(v14 / v16) )
    goto LABEL_17;
  v18 = 48 * v16;
  do
  {
    v19 = v15;
    v17 -= v16;
    v15 -= v18;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
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
      while ( *(__int64 *)(v15 + 24) < 0 );
    }
    v31 = *(_DWORD *)(v15 + 32);
    HIBYTE(v31) &= 0xF8u;
    *(_DWORD *)(v15 + 32) = v31;
    MiSetPfnModified(v15, 0LL);
    *(_QWORD *)(v15 + 16) = *(_QWORD *)(a2 + 16);
    if ( v15 != a2 )
    {
      *(_QWORD *)(v15 + 24) &= 0xC000000000000000uLL;
      HIWORD(v32) = HIWORD(*(_DWORD *)(v15 + 32));
      LOWORD(v32) = 0;
      *(_DWORD *)(v15 + 32) = v32;
    }
    updated = MiUpdateDemotedSubPage(a2, v15, v27);
    if ( a3 < v15 || a3 >= v19 )
    {
      if ( !updated )
      {
        if ( (*(_DWORD *)(v15 + 32) & 0x40000000) == 0 )
          v6 += v16;
        MiInsertPageInFreeOrZeroedList(v17, v10 + 1);
        goto LABEL_14;
      }
    }
    else if ( a4 == v27 )
    {
      v33 = *(_DWORD *)(v15 + 32);
      BYTE2(v33) = BYTE2(v33) & 0xF8 | 5;
      *(_DWORD *)(v15 + 32) = v33;
LABEL_14:
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_15;
    }
    v34 = *(_DWORD *)(v15 + 32);
    BYTE2(v34) = BYTE2(v34) & 0xF8 | 5;
    *(_DWORD *)(v15 + 32) = v34;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v6 += MiInsertDemotedPages(a1, v15, a3, a4);
LABEL_15:
    v21 = v29-- == 1;
    v5 = 0;
    v18 = 48 * v16;
  }
  while ( !v21 );
  LODWORD(v9) = v28;
LABEL_17:
  v22 = (volatile signed __int64 *)(a1 + ((unsigned int)v9 < 2 ? 15200LL : 15192LL));
  v23 = *v22;
  do
  {
    v24 = (v23 - 1) ^ (v23 ^ (v23 - 1)) & 0xFFFFFFFFFFFF0000uLL;
    if ( (_WORD)v23 == 1 )
      v24 ^= (v24 ^ (v24 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
    v25 = v23;
    v23 = _InterlockedCompareExchange64(v22, v24, v23);
  }
  while ( v25 != v23 );
  return v6;
}
