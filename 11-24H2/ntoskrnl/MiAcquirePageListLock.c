/*
 * XREFs of MiAcquirePageListLock @ 0x1402DF1D0
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiLockStandbyLookasidePage @ 0x14026C300 (MiLockStandbyLookasidePage.c)
 *     MiUnlinkPageFromBadList @ 0x14039398C (MiUnlinkPageFromBadList.c)
 *     MiDecayPfnFullyInitialized @ 0x140440AC8 (MiDecayPfnFullyInitialized.c)
 *     MiUpdatePageAttributeStamp @ 0x1404767D4 (MiUpdatePageAttributeStamp.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiSearchChannelTable @ 0x14026F0D4 (MiSearchChannelTable.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiAcquirePageListLock(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  int v5; // r11d
  int v6; // r12d
  __int64 v7; // r13
  int v8; // edi
  __int64 v9; // r14
  __int64 v10; // r10
  ULONG_PTR v11; // rsi
  BOOL v12; // r15d
  _DWORD *v13; // rcx
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  char v21; // cl
  __int64 v22; // r15
  unsigned __int64 v23; // r8
  int v24; // edx
  char *v25; // rax
  int i; // r9d
  int v27; // ecx
  unsigned int v28; // esi
  unsigned int v29; // esi
  unsigned __int8 v30; // cl
  __int64 v31; // rdx
  __int64 v32; // r9
  unsigned __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // rax
  __int64 j; // rdx
  __int64 v38; // rax
  volatile signed __int32 *v40; // rcx
  volatile signed __int32 *v41; // rbx
  volatile signed __int32 k; // edx
  ULONG_PTR v43; // rcx
  char v44; // dl
  unsigned __int8 v45; // cl
  __int64 v46; // [rsp+30h] [rbp-58h]
  __int64 v47; // [rsp+40h] [rbp-48h]
  unsigned int v48; // [rsp+48h] [rbp-40h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v52; // [rsp+B0h] [rbp+28h]

  v5 = 0;
  v6 = 0;
  v7 = a3;
  v8 = a4;
  v9 = a2;
  v10 = a1;
  v11 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v12 = v11 >= qword_140E35B00 && v11 < qword_140E35B00 + 2048;
  if ( a3 < 9 && *(_DWORD *)(a1 + 12) == 2 && (*(_DWORD *)(a2 + 32) & 0x8000000) != 0 )
    v6 = 1;
  *(_BYTE *)a5 = 1;
  v13 = (_DWORD *)(a1 + 32);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v13);
    v14 = *v13 & 0x7FFFFFFF;
    while ( 1 )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange(v13, v14 + 1, v14);
      if ( v15 == v14 )
        break;
      if ( v14 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire(v13, 0xFFu);
        goto LABEL_8;
      }
    }
  }
  else
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v13, a2);
LABEL_8:
    v10 = a1;
    v5 = 0;
  }
  v16 = *(_QWORD *)v9 & 0xFFFFFFFFFFLL;
  v17 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFLL;
  if ( v17 == 0x3FFFFFFFFFLL )
    v18 = v10 + 40;
  else
    v18 = 48 * v17 - 0x220000000000LL;
  v19 = v10 + 40;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
  {
    *(_QWORD *)(a5 + 16) = v18;
    v20 = a5 + 16;
    *(_QWORD *)(a5 + 8) = v17;
    *(_BYTE *)(a5 + 24) = 1;
    if ( v16 != 0x3FFFFFFFFFLL )
      v19 = 48 * v16 - 0x220000000000LL;
    if ( v16 == v17 )
    {
      v21 = 0;
      goto LABEL_19;
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      *(_QWORD *)(a5 + 40) = v19;
      v21 = 1;
      *(_QWORD *)(a5 + 32) = v16;
LABEL_19:
      *(_BYTE *)(a5 + 48) = v21;
      if ( *(_DWORD *)(v10 + 12) == 2 && !v12 && !v6 )
      {
        v22 = 48 * v11;
        v23 = 48 * v11 - 0x220000000000LL;
        v46 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v23 + 40) >> 43) & 0x3FFLL));
        v24 = dword_140E2DAC4;
        if ( dword_140E2DAC0 > (unsigned int)dword_140E2DAC4
          || (v25 = (char *)qword_140E2DB20 + 16 * dword_140E2DAC0, v11 < *(_QWORD *)v25)
          || dword_140E2DAC0 != dword_140E2DAC4 && v11 >= *((_QWORD *)v25 + 2) )
        {
          for ( i = 0; ; i = v27 + 1 )
          {
            while ( 1 )
            {
              if ( v24 < i )
                KeBugCheckEx(0x1Au, 0x5180uLL, v11, 0LL, 0LL);
              v27 = (i + v24) >> 1;
              v25 = (char *)qword_140E2DB20 + 16 * v27;
              if ( v11 >= *(_QWORD *)v25 )
                break;
              if ( !v27 )
                KeBugCheckEx(0x1Au, 0x5180uLL, v11, (ULONG_PTR)qword_140E2DB20, 0LL);
              v24 = v27 - 1;
            }
            if ( v27 == dword_140E2DAC4 || v11 < *((_QWORD *)v25 + 2) )
              break;
          }
          dword_140E2DAC0 = (i + v24) >> 1;
        }
        v28 = *(_DWORD *)(v23 + 32);
        v48 = *((_DWORD *)v25 + 2);
        if ( (v28 & 0x8000000) == 0
          || v23 >= 0xFFFFDE0000000000uLL
          && v23 < 48 * qword_140E2DBE0 - 0x21FFFFFFFFD0LL
          && ((v43 = 0xAAAAAAAAAAAAAAABuLL * (v22 >> 4), v43 < qword_140E35B00) || v43 >= qword_140E35B00 + 2048)
          && ((BYTE2(v28) & 7) == 6
           || byte_140E3CAE6 && (v44 = *(_BYTE *)(qword_140E3D140 + 2 * (v43 >> 9))) != 0 && v44 != 10) )
        {
          v29 = HIBYTE(v28) & 7;
        }
        else
        {
          v29 = 5;
        }
        if ( qword_140E2DB28 )
          v30 = *((_BYTE *)MiSearchChannelTable(0xAAAAAAAAAAAAAAABuLL * (v22 >> 4)) + 12);
        else
          v30 = 0;
        v31 = *(_QWORD *)(v46 + 16) + 57216LL * v48;
        if ( (int)v7 < 9 )
        {
          if ( (_DWORD)v7 == 8 )
            v45 = *(_BYTE *)(qword_140E3D140 + 2 * ((0xAAAAAAAAAAAAAAABuLL * (v22 >> 4)) >> 9) + 1) & 0x7F;
          else
            v45 = 0;
          v32 = *(_QWORD *)(232 * v7 + v31 + 15768) + 88 * (v29 + 8LL * v45);
        }
        else
        {
          v32 = v31 + 88 * (v29 + 8LL * v30 + 59);
        }
        v47 = v32;
        v33 = (8LL * (*(_DWORD *)(v9 + 36) & 0xFFE00000)) | (((*(_QWORD *)v9 >> 20) | *(_QWORD *)(v9 + 40) & 0xF80000000000000uLL) >> 20);
        if ( v33 == 0x3FFFFFFFFFLL )
          v34 = v32 + 40;
        else
          v34 = 48 * v33 - 0x220000000000LL;
        v16 = (*(_QWORD *)(v9 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(v9 + 36) & 0x1FFFFF) << 19);
        if ( v16 == 0x3FFFFFFFFFLL )
          v35 = v47 + 40;
        else
          v35 = 48 * v16 - 0x220000000000LL;
        v5 = 0;
        v36 = a5 + 16;
        for ( j = 0LL; j < 4; ++j )
        {
          if ( *(_BYTE *)(v36 + 8) && v34 == *(_QWORD *)v36 )
            goto LABEL_46;
          v36 += 24LL;
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
          goto LABEL_52;
        *(_BYTE *)(a5 + 96) = 1;
LABEL_46:
        *(_QWORD *)(a5 + 88) = v34;
        v38 = 0LL;
        *(_QWORD *)(a5 + 80) = v33;
        while ( v38 < 4 )
        {
          if ( *(_BYTE *)(v20 + 8) && v35 == *(_QWORD *)v20 )
            return 1LL;
          ++v38;
          v20 += 24LL;
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
        {
LABEL_52:
          v10 = a1;
          goto LABEL_53;
        }
        *(_QWORD *)(a5 + 64) = v35;
        *(_QWORD *)(a5 + 56) = v16;
        *(_BYTE *)(a5 + 72) = 1;
      }
      return 1LL;
    }
LABEL_53:
    v8 = a4;
  }
  if ( *(_BYTE *)a5 )
  {
    if ( *(_BYTE *)(a5 + 24) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a5 + 16) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a5 + 24) = 0;
    }
    if ( *(_BYTE *)(a5 + 48) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a5 + 40) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a5 + 48) = 0;
    }
    if ( *(_BYTE *)(a5 + 72) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a5 + 64) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a5 + 72) = 0;
    }
    if ( *(_BYTE *)(a5 + 96) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a5 + 88) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a5 + 96) = 0;
    }
    v40 = (volatile signed __int32 *)(v10 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v40, 0xBFFFFFFF);
      _InterlockedDecrement(v40);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v40, retaddr);
      v10 = a1;
      v5 = 0;
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 32));
    v10 = a1;
    v5 = 0;
  }
  *(_BYTE *)a5 = 0;
  if ( v8 )
  {
    v41 = (volatile signed __int32 *)(v10 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset(v41, 0x1Fu) )
        v5 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(v10 + 32), 0xFFu, v16);
      for ( k = *v41; (*v41 & 0xBFFFFFFF) != 0x80000000; v5 = v52 )
      {
        if ( (k & 0x40000000) == 0 )
          _InterlockedOr(v41, 0x40000000u);
        v52 = v5 + 1;
        if ( ((v5 + 1) & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v52);
        }
        else
        {
          _mm_pause();
        }
        k = *v41;
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(v10 + 32), 0xFFu);
    }
    return 1LL;
  }
  return 0LL;
}
