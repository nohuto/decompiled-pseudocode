/*
 * XREFs of MiAcquirePageListLock @ 0x140240AB0
 * Callers:
 *     MiLockStandbyLookasidePage @ 0x140221890 (MiLockStandbyLookasidePage.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiUpdatePageAttributeStamp @ 0x1403F034C (MiUpdatePageAttributeStamp.c)
 *     MiUnlinkPageFromBadList @ 0x1403F6AAC (MiUnlinkPageFromBadList.c)
 *     MiDecayPfnFullyInitialized @ 0x140437598 (MiDecayPfnFullyInitialized.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiSearchChannelTable @ 0x140224664 (MiSearchChannelTable.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiAcquirePageListLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r11d
  int v6; // r12d
  __int64 v7; // r13
  int v8; // edi
  __int64 v9; // r14
  __int64 v10; // r10
  ULONG_PTR v11; // rsi
  BOOL v12; // r15d
  _DWORD *v13; // rcx
  signed __int32 v14; // eax
  __int64 v15; // rdx
  signed __int32 v16; // ett
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  __int64 j; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  char v22; // cl
  __int64 v23; // r15
  unsigned __int64 v24; // r8
  int v25; // edx
  char *v26; // rax
  int i; // r9d
  int v28; // ecx
  unsigned int v29; // esi
  unsigned int v30; // esi
  unsigned __int8 v31; // cl
  __int64 v32; // rdx
  __int64 v33; // r9
  unsigned __int64 v34; // rcx
  __int64 v35; // r10
  __int64 v36; // rax
  __int64 v37; // rax
  volatile signed __int32 *v39; // rcx
  volatile signed __int32 *v40; // rbx
  __int64 v41; // rdx
  unsigned __int64 k; // rcx
  ULONG_PTR v43; // rcx
  char v44; // dl
  unsigned __int8 v45; // cl
  __int64 v46; // [rsp+30h] [rbp-58h]
  __int64 v47; // [rsp+40h] [rbp-48h]
  unsigned int v48; // [rsp+48h] [rbp-40h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  int v51; // [rsp+A8h] [rbp+20h]
  unsigned int v52; // [rsp+B0h] [rbp+28h]

  v51 = a4;
  v5 = 0;
  v6 = 0;
  v7 = (int)a3;
  v8 = a4;
  v9 = a2;
  v10 = a1;
  v11 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v12 = v11 >= qword_140E35C40 && v11 < qword_140E35C40 + 2048;
  if ( (int)a3 < 9 && *(_DWORD *)(a1 + 12) == 2 && (*(_DWORD *)(a2 + 32) & 0x8000000) != 0 )
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
        ExpWaitForSpinLockSharedAndAcquire(v13, v15, a3, a4);
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
  v17 = *(_QWORD *)v9 & 0xFFFFFFFFFFLL;
  v18 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFLL;
  if ( v18 == 0x3FFFFFFFFFLL )
    j = v10 + 40;
  else
    j = 48 * v18 - 0x220000000000LL;
  v20 = v10 + 40;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(j + 24), 0x3FuLL) )
  {
    *(_QWORD *)(a5 + 16) = j;
    v21 = a5 + 16;
    *(_QWORD *)(a5 + 8) = v18;
    *(_BYTE *)(a5 + 24) = 1;
    if ( v17 != 0x3FFFFFFFFFLL )
      v20 = 48 * v17 - 0x220000000000LL;
    if ( v17 == v18 )
    {
      v22 = 0;
      goto LABEL_19;
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    {
      *(_QWORD *)(a5 + 40) = v20;
      v22 = 1;
      *(_QWORD *)(a5 + 32) = v17;
LABEL_19:
      *(_BYTE *)(a5 + 48) = v22;
      if ( *(_DWORD *)(v10 + 12) == 2 && !v12 && !v6 )
      {
        v23 = 48 * v11;
        v24 = 48 * v11 - 0x220000000000LL;
        v46 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v24 + 40) >> 43) & 0x3FFLL));
        v25 = dword_140E2DC04;
        if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
          || (v26 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v11 < *(_QWORD *)v26)
          || dword_140E2DC00 != dword_140E2DC04 && v11 >= *((_QWORD *)v26 + 2) )
        {
          for ( i = 0; ; i = v28 + 1 )
          {
            while ( 1 )
            {
              if ( v25 < i )
                KeBugCheckEx(0x1Au, 0x5180uLL, v11, 0LL, 0LL);
              v28 = (i + v25) >> 1;
              v26 = (char *)qword_140E2DC60 + 16 * v28;
              if ( v11 >= *(_QWORD *)v26 )
                break;
              if ( !v28 )
                KeBugCheckEx(0x1Au, 0x5180uLL, v11, (ULONG_PTR)qword_140E2DC60, 0LL);
              v25 = v28 - 1;
            }
            if ( v28 == dword_140E2DC04 || v11 < *((_QWORD *)v26 + 2) )
              break;
          }
          dword_140E2DC00 = (i + v25) >> 1;
        }
        v29 = *(_DWORD *)(v24 + 32);
        v48 = *((_DWORD *)v26 + 2);
        if ( (v29 & 0x8000000) == 0
          || v24 >= 0xFFFFDE0000000000uLL
          && v24 < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
          && ((v43 = 0xAAAAAAAAAAAAAAABuLL * (v23 >> 4), v43 < qword_140E35C40) || v43 >= qword_140E35C40 + 2048)
          && ((BYTE2(v29) & 7) == 6
           || byte_140E3CC26 && (v44 = *(_BYTE *)(qword_140E3D280 + 2 * (v43 >> 9))) != 0 && v44 != 10) )
        {
          v30 = HIBYTE(v29) & 7;
        }
        else
        {
          v30 = 5;
        }
        if ( qword_140E2DC68 )
          v31 = *((_BYTE *)MiSearchChannelTable(0xAAAAAAAAAAAAAAABuLL * (v23 >> 4)) + 12);
        else
          v31 = 0;
        v32 = *(_QWORD *)(v46 + 16) + 57216LL * v48;
        if ( (int)v7 < 9 )
        {
          if ( (_DWORD)v7 == 8 )
            v45 = *(_BYTE *)(qword_140E3D280 + 2 * ((0xAAAAAAAAAAAAAAABuLL * (v23 >> 4)) >> 9) + 1) & 0x7F;
          else
            v45 = 0;
          v33 = *(_QWORD *)(232 * v7 + v32 + 15768) + 88 * (v30 + 8LL * v45);
        }
        else
        {
          v33 = v32 + 88 * (v30 + 8LL * v31 + 59);
        }
        v47 = v33;
        v34 = (8LL * (*(_DWORD *)(v9 + 36) & 0xFFE00000)) | (((*(_QWORD *)v9 >> 20) | *(_QWORD *)(v9 + 40) & 0xF80000000000000uLL) >> 20);
        if ( v34 == 0x3FFFFFFFFFLL )
          v18 = v33 + 40;
        else
          v18 = 48 * v34 - 0x220000000000LL;
        v17 = (*(_QWORD *)(v9 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(v9 + 36) & 0x1FFFFF) << 19);
        if ( v17 == 0x3FFFFFFFFFLL )
          v35 = v47 + 40;
        else
          v35 = 48 * v17 - 0x220000000000LL;
        v5 = 0;
        v36 = a5 + 16;
        for ( j = 0LL; j < 4; ++j )
        {
          if ( *(_BYTE *)(v36 + 8) && v18 == *(_QWORD *)v36 )
            goto LABEL_46;
          v36 += 24LL;
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
          goto LABEL_52;
        *(_BYTE *)(a5 + 96) = 1;
LABEL_46:
        *(_QWORD *)(a5 + 88) = v18;
        v37 = 0LL;
        *(_QWORD *)(a5 + 80) = v34;
        while ( v37 < 4 )
        {
          if ( *(_BYTE *)(v21 + 8) && v35 == *(_QWORD *)v21 )
            return 1LL;
          ++v37;
          v21 += 24LL;
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
        {
LABEL_52:
          v10 = a1;
          goto LABEL_53;
        }
        *(_QWORD *)(a5 + 64) = v35;
        *(_QWORD *)(a5 + 56) = v17;
        *(_BYTE *)(a5 + 72) = 1;
      }
      return 1LL;
    }
LABEL_53:
    v8 = v51;
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
    v39 = (volatile signed __int32 *)(v10 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v39, 0xBFFFFFFF);
      _InterlockedDecrement(v39);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v39, retaddr);
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
    v40 = (volatile signed __int32 *)(v10 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset(v40, 0x1Fu) )
      {
        LOBYTE(j) = -1;
        v5 = ExpWaitForSpinLockExclusiveAndAcquire(v10 + 32, j);
      }
      v41 = *(unsigned int *)v40;
      for ( k = v41 & 0xFFFFFFFFBFFFFFFFuLL; (v41 & 0xBFFFFFFF) != 0x80000000; k = v41 & 0xFFFFFFFFBFFFFFFFuLL )
      {
        if ( (v41 & 0x40000000) == 0 )
          _InterlockedOr(v40, 0x40000000u);
        v52 = v5 + 1;
        if ( ((v5 + 1) & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(k, v41, v17, v18) )
        {
          HvlNotifyLongSpinWait(v52);
        }
        else
        {
          _mm_pause();
        }
        v41 = *(unsigned int *)v40;
        v5 = v52;
      }
    }
    else
    {
      LOBYTE(j) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v10 + 32, j);
    }
    return 1LL;
  }
  return 0LL;
}
