/*
 * XREFs of MiStopPageAccessor @ 0x14026ADB0
 * Callers:
 *     MiPageFreeToZero @ 0x14026ABD0 (MiPageFreeToZero.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403F98CC (MiInitializeNewUltraHugeContext.c)
 *     MiPageListCollision @ 0x14042FDFC (MiPageListCollision.c)
 *     MiDereferenceHugeContext @ 0x1404CFD8C (MiDereferenceHugeContext.c)
 *     MiHugeRangeFreeToZero @ 0x1404F0BF0 (MiHugeRangeFreeToZero.c)
 *     MiScrubLargePage @ 0x14068DA04 (MiScrubLargePage.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiSearchChannelTable @ 0x14026F0D4 (MiSearchChannelTable.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiLocatePageCollisionByPfn @ 0x140444C80 (MiLocatePageCollisionByPfn.c)
 *     PfpPartitionToParent @ 0x1404BCA40 (PfpPartitionToParent.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiStopPageAccessor(__int64 *BugCheckParameter2, __int64 a2, _DWORD *a3)
{
  ULONG_PTR i; // rbx
  ULONG_PTR BugCheckParameter4; // rdi
  __int64 PageCollisionByPfn; // rdx
  __int64 v8; // rax
  volatile signed __int32 *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  ULONG_PTR v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rbp
  char v17; // cl
  __int64 v18; // rcx
  __int64 v19; // rdi
  int v20; // r8d
  __int64 v21; // rdx
  unsigned int v22; // ebx
  signed __int32 v23; // eax
  int v24; // ett
  _QWORD *v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  _QWORD **v28; // rcx
  ULONG_PTR v29; // rax
  _QWORD *v30; // rax
  ULONG_PTR v32; // rax
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  int v34; // [rsp+60h] [rbp+8h]

  if ( a3 )
    *a3 = 0;
  if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFDE0000000000uLL
    && (unsigned __int64)BugCheckParameter2 < 48 * qword_140E2DBE0 - 0x21FFFFFFFFD0LL )
  {
    v34 = *((_DWORD *)BugCheckParameter2 + 8);
    BYTE2(v34) &= ~8u;
    *((_DWORD *)BugCheckParameter2 + 8) = v34;
    i = BugCheckParameter2[2];
    BugCheckParameter4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x44000000000LL) >> 4);
    PageCollisionByPfn = MiLocatePageCollisionByPfn(i, BugCheckParameter4);
    if ( !PageCollisionByPfn )
      KeBugCheckEx(0x1Au, 0x1502uLL, (ULONG_PTR)BugCheckParameter2, i, BugCheckParameter4);
    v8 = 128LL;
    if ( qword_140E2DB80 )
    {
      v8 = 144LL;
      if ( (qword_140E2DB80 & 0x80u) == 0LL )
        v8 = qword_140E2DB80 | 0x80;
    }
    BugCheckParameter2[2] = v8;
    goto LABEL_66;
  }
  v9 = 0LL;
  v10 = ((__int64)BugCheckParameter2 - qword_140E2FFC0) >> 3;
  if ( !(_DWORD)a2 )
  {
    v11 = *BugCheckParameter2 & 7;
    if ( v11 == 1 || v11 == 2 )
    {
      v12 = *BugCheckParameter2;
      v13 = ((((__int64)BugCheckParameter2 - qword_140E2FFC0) >> 3) & 0x3FFFFF) << 18;
      v14 = (unsigned int)MiPageToNode(v13);
      if ( (((unsigned __int64)*BugCheckParameter2 >> 4) & 0x7FF) == 0x401 )
        v15 = 0LL;
      else
        v15 = *((_QWORD *)qword_140E2FF88 + (((unsigned __int64)*BugCheckParameter2 >> 4) & 0x7FF));
      v16 = *(_QWORD *)(v15 + 16) + 57216 * v14;
      if ( qword_140E2DB28 )
        v17 = *(_BYTE *)(MiSearchChannelTable(v13) + 12);
      else
        v17 = 0;
      a2 = (unsigned int)(v13 >> 18) % dword_140E2DBC0[0];
      v18 = v17 & 1;
      v19 = v12 & 7;
      if ( v19 == 1 )
      {
        v20 = 0;
      }
      else
      {
        if ( v19 != 2 )
        {
          v9 = (volatile signed __int32 *)(v16 + 15136);
LABEL_27:
          v22 = 0;
          if ( _interlockedbittestandset64(v9, 3uLL) )
          {
            do
            {
              if ( (++v22 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v18) )
              {
                HvlNotifyLongSpinWait(v22);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( (*(_QWORD *)v9 & 8) != 0 || _interlockedbittestandset64(v9, 3uLL) );
          }
          goto LABEL_35;
        }
        v20 = 1;
      }
      v21 = *(_QWORD *)(v16 + 14984);
      v18 = 2 * -643764673 * (unsigned int)((v16 - *(_QWORD *)(v21 + 16)) >> 7) * dword_140E2DBC0[0];
      a2 = *(_QWORD *)(v21 + 16656) + 8 * v18;
      if ( v20 == 1 )
        a2 += 8LL * (unsigned int)dword_140E2DBC0[0];
      v9 = (volatile signed __int32 *)(a2 + 8LL * (unsigned __int8)((unsigned int)(v13 >> 18) % dword_140E2DBC0[0]));
      goto LABEL_27;
    }
  }
LABEL_35:
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&dword_140E2FE30);
    v24 = dword_140E2FE30 & 0x7FFFFFFF;
    v23 = _InterlockedCompareExchange(
            &dword_140E2FE30,
            (dword_140E2FE30 & 0x7FFFFFFF) + 1,
            dword_140E2FE30 & 0x7FFFFFFF);
    if ( v24 != v23 )
    {
      while ( v23 >= 0 )
      {
        a2 = (unsigned int)v23;
        v23 = _InterlockedCompareExchange(&dword_140E2FE30, v23 + 1, v23);
        if ( v23 == (_DWORD)a2 )
          goto LABEL_43;
      }
      LOBYTE(a2) = -1;
      ExpWaitForSpinLockSharedAndAcquire(&dword_140E2FE30, a2);
    }
  }
  else
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_140E2FE30, a2);
  }
LABEL_43:
  v25 = (_QWORD *)qword_140E2FE38;
  i = 0LL;
  if ( qword_140E2FE38 )
  {
    do
    {
      i = (ULONG_PTR)v25;
      v25 = (_QWORD *)*v25;
    }
    while ( v25 );
  }
  if ( !i )
  {
LABEL_70:
    v32 = PfpPartitionToParent(BugCheckParameter2);
    KeBugCheckEx(0x1Au, 0x1502uLL, (ULONG_PTR)BugCheckParameter2, v32, v10 & 0x3FFFFF);
  }
  while ( 1 )
  {
    v26 = 0LL;
    if ( *(_DWORD *)(i + 280) )
      break;
LABEL_50:
    v28 = *(_QWORD ***)(i + 8);
    v29 = i;
    if ( v28 )
    {
      v30 = *v28;
      for ( i = *(_QWORD *)(i + 8); v30; v30 = (_QWORD *)*v30 )
        i = (ULONG_PTR)v30;
    }
    else
    {
      for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)i == v29 )
          break;
        v29 = i;
      }
    }
    if ( !i )
      goto LABEL_70;
  }
  while ( 1 )
  {
    v27 = *(_QWORD *)(i + 8 * v26 + 24);
    if ( ((v27 >> 12) & 0x3FFFFFFFFFLL) == (v10 & 0x3FFFFF) && (v27 & 0x10) != 0 )
      break;
    v26 = (unsigned int)(v26 + 1);
    if ( (unsigned int)v26 >= *(_DWORD *)(i + 280) )
      goto LABEL_50;
  }
  *(_QWORD *)(i + 8 * v26 + 24) = v27 & 0xFFFFFFFFFFFFFFEFuLL;
  *BugCheckParameter2 &= ~0x800000000000000uLL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(&dword_140E2FE30, 0xBFFFFFFF);
    _InterlockedDecrement(&dword_140E2FE30);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140E2FE30, retaddr);
  }
  if ( v9 )
    _InterlockedAnd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFF7uLL);
  PageCollisionByPfn = i + 24;
LABEL_66:
  if ( a3 )
    *a3 = (__int64)(PageCollisionByPfn - i - 24) >> 3;
  return i;
}
