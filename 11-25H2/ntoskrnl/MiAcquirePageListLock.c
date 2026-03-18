/*
 * XREFs of MiAcquirePageListLock @ 0x1402122F0
 * Callers:
 *     MiLockStandbyLookasidePage @ 0x140212E20 (MiLockStandbyLookasidePage.c)
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiUnlinkPageFromBadList @ 0x1403BA1C4 (MiUnlinkPageFromBadList.c)
 *     MiDecayPfnFullyInitialized @ 0x140440EE8 (MiDecayPfnFullyInitialized.c)
 *     MiUpdatePageAttributeStamp @ 0x140476CA0 (MiUpdatePageAttributeStamp.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiSearchChannelTable @ 0x1402167C8 (MiSearchChannelTable.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiAcquirePageListLock(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  unsigned int v5; // r12d
  int v6; // r13d
  int v7; // edi
  int v8; // r10d
  __int64 v9; // r14
  __int64 v10; // r11
  ULONG_PTR v11; // rsi
  BOOL v12; // r15d
  _DWORD *v13; // rcx
  signed __int32 v14; // eax
  __int64 v15; // rdx
  signed __int32 v16; // ett
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  char v22; // cl
  __int64 v23; // r15
  unsigned __int64 v24; // r8
  int v25; // ecx
  char *v26; // rax
  int i; // edx
  int v28; // r9d
  unsigned int v29; // esi
  unsigned int v30; // esi
  unsigned __int8 v31; // cl
  __int64 v32; // rdx
  __int64 v33; // r9
  unsigned __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // r10
  __int64 v37; // rdx
  __int64 v38; // rax
  volatile signed __int32 *v39; // rcx
  __int64 v41; // rax
  volatile signed __int32 *v42; // rbx
  volatile signed __int32 v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rax
  ULONG_PTR v46; // rcx
  char v47; // dl
  unsigned __int8 v48; // cl
  __int64 v49; // [rsp+30h] [rbp-68h]
  __int64 v50; // [rsp+40h] [rbp-58h]
  unsigned int v51; // [rsp+48h] [rbp-50h]
  void *retaddr; // [rsp+98h] [rbp+0h]

  v5 = 0;
  v6 = 0;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  v11 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v12 = v11 >= qword_140E358C0 && v11 < qword_140E358C0 + 2048;
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
      v15 = (unsigned int)(v14 + 1);
      v16 = v14;
      v14 = _InterlockedCompareExchange(v13, v15, v14);
      if ( v16 == v14 )
        break;
      if ( v14 < 0 )
      {
        LOBYTE(v15) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v13, v15);
        goto LABEL_67;
      }
    }
  }
  else
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v13, a2);
LABEL_67:
    v10 = a1;
    v8 = a3;
  }
  v17 = *(_QWORD *)v9 & 0xFFFFFFFFFFLL;
  v18 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFLL;
  if ( v18 == 0x3FFFFFFFFFLL )
    v19 = v10 + 40;
  else
    v19 = 48 * v18 - 0x220000000000LL;
  v20 = v10 + 40;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    goto LABEL_43;
  *(_QWORD *)(a5 + 16) = v19;
  v21 = a5 + 16;
  *(_QWORD *)(a5 + 8) = v18;
  *(_BYTE *)(a5 + 24) = 1;
  if ( v17 != 0x3FFFFFFFFFLL )
    v20 = 48 * v17 - 0x220000000000LL;
  if ( v17 == v18 )
  {
    v22 = 0;
LABEL_16:
    *(_BYTE *)(a5 + 48) = v22;
    if ( *(_DWORD *)(v10 + 12) != 2 || v12 || v6 )
      return 1LL;
    v23 = 48 * v11;
    v24 = 48 * v11 - 0x220000000000LL;
    v49 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v24 + 40) >> 43) & 0x3FFLL));
    v25 = dword_140E2D884;
    if ( dword_140E2D880 > (unsigned int)dword_140E2D884
      || (v26 = (char *)qword_140E2D8E0 + 16 * dword_140E2D880, v11 < *(_QWORD *)v26)
      || dword_140E2D880 != dword_140E2D884 && v11 >= *((_QWORD *)v26 + 2) )
    {
      for ( i = 0; ; i = v28 + 1 )
      {
        while ( 1 )
        {
          if ( v25 < i )
            KeBugCheckEx(0x1Au, 0x5180uLL, v11, 0LL, 0LL);
          v28 = (i + v25) >> 1;
          v26 = (char *)qword_140E2D8E0 + 16 * v28;
          if ( v11 >= *(_QWORD *)v26 )
            break;
          if ( !v28 )
            KeBugCheckEx(0x1Au, 0x5180uLL, v11, (ULONG_PTR)qword_140E2D8E0, 0LL);
          v25 = v28 - 1;
        }
        if ( v28 == dword_140E2D884 || v11 < *((_QWORD *)v26 + 2) )
          break;
      }
      dword_140E2D880 = (i + v25) >> 1;
    }
    v29 = *(_DWORD *)(v24 + 32);
    v51 = *((_DWORD *)v26 + 2);
    if ( (v29 & 0x8000000) == 0
      || v24 >= 0xFFFFDE0000000000uLL
      && v24 < 48 * qword_140E2D9A0 - 0x21FFFFFFFFD0LL
      && ((v46 = 0xAAAAAAAAAAAAAAABuLL * (v23 >> 4), v46 < qword_140E358C0) || v46 >= qword_140E358C0 + 2048)
      && ((BYTE2(v29) & 7) == 6
       || byte_140E3C8A6 && (v47 = *(_BYTE *)(qword_140E3CF00 + 2 * (v46 >> 9))) != 0 && v47 != 10) )
    {
      v30 = HIBYTE(v29) & 7;
    }
    else
    {
      v30 = 5;
    }
    if ( qword_140E2D8E8 )
    {
      v45 = MiSearchChannelTable(0xAAAAAAAAAAAAAAABuLL * (v23 >> 4));
      v8 = a3;
      v10 = a1;
      v31 = *(_BYTE *)(v45 + 12);
    }
    else
    {
      v31 = 0;
    }
    v32 = *(_QWORD *)(v49 + 16) + 57216LL * v51;
    if ( v8 < 9 )
    {
      if ( v8 == 8 )
        v48 = *(_BYTE *)(qword_140E3CF00 + 2 * ((0xAAAAAAAAAAAAAAABuLL * (v23 >> 4)) >> 9) + 1) & 0x7F;
      else
        v48 = 0;
      v33 = *(_QWORD *)(232LL * v8 + v32 + 15768) + 88 * (v30 + 8LL * v48);
    }
    else
    {
      v33 = v32 + 88 * (v30 + 8LL * v31 + 59);
    }
    v50 = v33;
    v34 = (8LL * (*(_DWORD *)(v9 + 36) & 0xFFE00000)) | (((*(_QWORD *)v9 >> 20) | *(_QWORD *)(v9 + 40) & 0xF80000000000000uLL) >> 20);
    if ( v34 == 0x3FFFFFFFFFLL )
      v35 = v33 + 40;
    else
      v35 = 48 * v34 - 0x220000000000LL;
    v17 = (*(_QWORD *)(v9 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(v9 + 36) & 0x1FFFFF) << 19);
    if ( v17 == 0x3FFFFFFFFFLL )
      v36 = v50 + 40;
    else
      v36 = 48 * v17 - 0x220000000000LL;
    v37 = 0LL;
    v38 = a5 + 16;
    while ( v37 < 4 )
    {
      if ( *(_BYTE *)(v38 + 8) && v35 == *(_QWORD *)v38 )
        goto LABEL_59;
      ++v37;
      v38 += 24LL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
      goto LABEL_42;
    *(_BYTE *)(a5 + 96) = 1;
LABEL_59:
    *(_QWORD *)(a5 + 88) = v35;
    v41 = 0LL;
    *(_QWORD *)(a5 + 80) = v34;
    while ( v41 < 4 )
    {
      if ( *(_BYTE *)(v21 + 8) && v36 == *(_QWORD *)v21 )
        return 1LL;
      ++v41;
      v21 += 24LL;
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
    {
      *(_QWORD *)(a5 + 64) = v36;
      *(_QWORD *)(a5 + 56) = v17;
      *(_BYTE *)(a5 + 72) = 1;
      return 1LL;
    }
    goto LABEL_42;
  }
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
  {
    *(_QWORD *)(a5 + 40) = v20;
    v22 = 1;
    *(_QWORD *)(a5 + 32) = v17;
    goto LABEL_16;
  }
LABEL_42:
  v7 = a4;
LABEL_43:
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
    v39 = (volatile signed __int32 *)(v10 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v39, 0xBFFFFFFF);
      _InterlockedDecrement(v39);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v39, retaddr, v17);
      v10 = a1;
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 32));
    v10 = a1;
  }
  *(_BYTE *)a5 = 0;
  if ( !v7 )
    return 0LL;
  v42 = (volatile signed __int32 *)(v10 + 32);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset(v42, 0x1Fu) )
      v5 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(v10 + 32), 0xFFu);
    v43 = *v42;
    v44 = *(unsigned int *)v42;
    for ( LODWORD(v44) = v44 & 0xBFFFFFFF; (_DWORD)v44 != 0x80000000; LODWORD(v44) = v44 & 0xBFFFFFFF )
    {
      if ( (v43 & 0x40000000) == 0 )
        _InterlockedOr(v42, 0x40000000u);
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v44) )
      {
        HvlNotifyLongSpinWait(v5);
      }
      else
      {
        _mm_pause();
      }
      v43 = *v42;
      v44 = *(unsigned int *)v42;
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(v10 + 32), 0xFFu);
  }
  return 1LL;
}
