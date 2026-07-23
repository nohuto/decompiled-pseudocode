/*
 * XREFs of MiStopPageAccessor @ 0x140220340
 * Callers:
 *     MiPageFreeToZero @ 0x140220160 (MiPageFreeToZero.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403EF7D8 (MiInitializeNewUltraHugeContext.c)
 *     MiPageListCollision @ 0x1404218AC (MiPageListCollision.c)
 *     MiDereferenceHugeContext @ 0x1404C8E3C (MiDereferenceHugeContext.c)
 *     MiHugeRangeFreeToZero @ 0x1404EE690 (MiHugeRangeFreeToZero.c)
 *     MiScrubLargePage @ 0x14068EB34 (MiScrubLargePage.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiSearchChannelTable @ 0x140224664 (MiSearchChannelTable.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLocatePageCollisionByPfn @ 0x14043CF40 (MiLocatePageCollisionByPfn.c)
 *     PfpPartitionToParent @ 0x1404B7BB0 (PfpPartitionToParent.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiStopPageAccessor(__int64 *BugCheckParameter2, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v6; // r8
  ULONG_PTR i; // rbx
  ULONG_PTR BugCheckParameter4; // rdi
  __int64 PageCollisionByPfn; // rdx
  __int64 v10; // rax
  volatile signed __int32 *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  ULONG_PTR v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rbp
  char v19; // cl
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rdx
  unsigned int v23; // ebx
  signed __int32 v24; // eax
  int v25; // ett
  _QWORD *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  _QWORD **v29; // rcx
  ULONG_PTR v30; // rax
  _QWORD *v31; // rax
  ULONG_PTR v33; // rax
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  int v35; // [rsp+60h] [rbp+8h]

  if ( a3 )
    *a3 = 0;
  v6 = 0xFFFFDE0000000000uLL;
  if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFDE0000000000uLL
    && (unsigned __int64)BugCheckParameter2 < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL )
  {
    v35 = *((_DWORD *)BugCheckParameter2 + 8);
    BYTE2(v35) &= ~8u;
    *((_DWORD *)BugCheckParameter2 + 8) = v35;
    i = BugCheckParameter2[2];
    BugCheckParameter4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x44000000000LL) >> 4);
    PageCollisionByPfn = MiLocatePageCollisionByPfn(i, BugCheckParameter4);
    if ( !PageCollisionByPfn )
      KeBugCheckEx(0x1Au, 0x1502uLL, (ULONG_PTR)BugCheckParameter2, i, BugCheckParameter4);
    v10 = 128LL;
    if ( qword_140E2DCC0 )
    {
      v10 = 144LL;
      if ( (qword_140E2DCC0 & 0x80u) == 0LL )
        v10 = qword_140E2DCC0 | 0x80;
    }
    BugCheckParameter2[2] = v10;
    goto LABEL_66;
  }
  v11 = 0LL;
  v12 = ((__int64)BugCheckParameter2 - qword_140E30100) >> 3;
  if ( !(_DWORD)a2 )
  {
    v13 = *BugCheckParameter2 & 7;
    if ( v13 == 1 || v13 == 2 )
    {
      v14 = *BugCheckParameter2;
      v15 = ((((__int64)BugCheckParameter2 - qword_140E30100) >> 3) & 0x3FFFFF) << 18;
      v16 = (unsigned int)MiPageToNode(v15);
      if ( (((unsigned __int64)*BugCheckParameter2 >> 4) & 0x7FF) == 0x401 )
        v17 = 0LL;
      else
        v17 = *((_QWORD *)qword_140E300C8 + (((unsigned __int64)*BugCheckParameter2 >> 4) & 0x7FF));
      v18 = *(_QWORD *)(v17 + 16) + 57216 * v16;
      if ( qword_140E2DC68 )
        v19 = *(_BYTE *)(MiSearchChannelTable(v15) + 12);
      else
        v19 = 0;
      a4 = (unsigned int)dword_140E2DD00[0];
      a2 = (unsigned int)(v15 >> 18) % dword_140E2DD00[0];
      v20 = v19 & 1;
      v21 = v14 & 7;
      if ( v21 == 1 )
      {
        v6 = 0LL;
      }
      else
      {
        if ( v21 != 2 )
        {
          v11 = (volatile signed __int32 *)(v18 + 15136);
LABEL_27:
          v23 = 0;
          if ( _interlockedbittestandset64(v11, 3uLL) )
          {
            do
            {
              if ( (++v23 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v20, a2, v6, a4) )
              {
                HvlNotifyLongSpinWait(v23);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( (*(_QWORD *)v11 & 8) != 0 || _interlockedbittestandset64(v11, 3uLL) );
          }
          goto LABEL_35;
        }
        v6 = 1LL;
      }
      v22 = *(_QWORD *)(v18 + 14984);
      v20 = 2 * -643764673 * (unsigned int)((v18 - *(_QWORD *)(v22 + 16)) >> 7) * dword_140E2DD00[0];
      a2 = *(_QWORD *)(v22 + 16656) + 8 * v20;
      if ( (_DWORD)v6 == 1 )
        a2 += 8LL * (unsigned int)dword_140E2DD00[0];
      v11 = (volatile signed __int32 *)(a2 + 8LL * (unsigned __int8)((unsigned int)(v15 >> 18) % dword_140E2DD00[0]));
      goto LABEL_27;
    }
  }
LABEL_35:
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&dword_140E2FF70);
    v25 = dword_140E2FF70 & 0x7FFFFFFF;
    v24 = _InterlockedCompareExchange(
            &dword_140E2FF70,
            (dword_140E2FF70 & 0x7FFFFFFF) + 1,
            dword_140E2FF70 & 0x7FFFFFFF);
    if ( v25 != v24 )
    {
      while ( v24 >= 0 )
      {
        a2 = (unsigned int)v24;
        v24 = _InterlockedCompareExchange(&dword_140E2FF70, v24 + 1, v24);
        if ( v24 == (_DWORD)a2 )
          goto LABEL_43;
      }
      LOBYTE(a2) = -1;
      ExpWaitForSpinLockSharedAndAcquire(&dword_140E2FF70, a2, v6, a4);
    }
  }
  else
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_140E2FF70, a2);
  }
LABEL_43:
  v26 = (_QWORD *)qword_140E2FF78;
  i = 0LL;
  if ( qword_140E2FF78 )
  {
    do
    {
      i = (ULONG_PTR)v26;
      v26 = (_QWORD *)*v26;
    }
    while ( v26 );
  }
  if ( !i )
  {
LABEL_70:
    v33 = PfpPartitionToParent(BugCheckParameter2);
    KeBugCheckEx(0x1Au, 0x1502uLL, (ULONG_PTR)BugCheckParameter2, v33, v12 & 0x3FFFFF);
  }
  while ( 1 )
  {
    v27 = 0LL;
    if ( *(_DWORD *)(i + 280) )
      break;
LABEL_50:
    v29 = *(_QWORD ***)(i + 8);
    v30 = i;
    if ( v29 )
    {
      v31 = *v29;
      for ( i = *(_QWORD *)(i + 8); v31; v31 = (_QWORD *)*v31 )
        i = (ULONG_PTR)v31;
    }
    else
    {
      for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)i == v30 )
          break;
        v30 = i;
      }
    }
    if ( !i )
      goto LABEL_70;
  }
  while ( 1 )
  {
    v28 = *(_QWORD *)(i + 8 * v27 + 24);
    if ( ((v28 >> 12) & 0x3FFFFFFFFFLL) == (v12 & 0x3FFFFF) && (v28 & 0x10) != 0 )
      break;
    v27 = (unsigned int)(v27 + 1);
    if ( (unsigned int)v27 >= *(_DWORD *)(i + 280) )
      goto LABEL_50;
  }
  *(_QWORD *)(i + 8 * v27 + 24) = v28 & 0xFFFFFFFFFFFFFFEFuLL;
  *BugCheckParameter2 &= ~0x800000000000000uLL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(&dword_140E2FF70, 0xBFFFFFFF);
    _InterlockedDecrement(&dword_140E2FF70);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140E2FF70, retaddr);
  }
  if ( v11 )
    _InterlockedAnd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFF7uLL);
  PageCollisionByPfn = i + 24;
LABEL_66:
  if ( a3 )
    *a3 = (__int64)(PageCollisionByPfn - i - 24) >> 3;
  return i;
}
