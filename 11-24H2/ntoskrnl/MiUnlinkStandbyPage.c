/*
 * XREFs of MiUnlinkStandbyPage @ 0x140225CF0
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiSearchChannelTable @ 0x140224664 (MiSearchChannelTable.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x140224F70 (MiUnlinkProtectedStandbyPfn.c)
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402277A0 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiObtainFreePages @ 0x1402616B4 (MiObtainFreePages.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x140261770 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x140261834 (MiUpdateAvailableEventsAtDpc.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

_BOOL8 __fastcall MiUnlinkStandbyPage(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned __int64 a4, __int16 a5)
{
  __int64 v5; // rsi
  ULONG_PTR v9; // r14
  int v10; // r15d
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  volatile signed __int32 *v13; // r9
  unsigned int v14; // eax
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // r8
  volatile signed __int64 *v18; // r10
  volatile signed __int64 v19; // rdx
  signed __int64 v20; // r8
  signed __int64 v21; // rcx
  unsigned __int64 v22; // r10
  ULONG_PTR v23; // rsi
  __int64 v24; // r11
  unsigned __int64 v25; // r8
  int v26; // edx
  char *v27; // rax
  int i; // r9d
  int v29; // r10d
  unsigned int v30; // esi
  unsigned int v31; // esi
  unsigned __int8 v32; // cl
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r10
  __int64 v35; // r9
  signed __int64 v36; // rdx
  signed __int64 v37; // rax
  __int64 v38; // r9
  int v39; // eax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // r8
  signed __int64 v42; // rdx
  signed __int64 v43; // rax
  signed __int64 v44; // rdx
  volatile signed __int32 *v45; // rcx
  unsigned __int64 v46; // rdi
  BOOL v47; // ebx
  __int64 v48; // rcx
  _BOOL8 result; // rax
  signed __int64 v50; // rdx
  ULONG_PTR v51; // rcx
  __int64 v52; // rax
  struct _KTHREAD *CurrentThread; // rcx
  int v54; // eax
  unsigned __int64 v55; // rcx
  __int64 v56; // [rsp+30h] [rbp-B8h]
  __int64 v57; // [rsp+40h] [rbp-A8h]
  unsigned int v58; // [rsp+48h] [rbp-A0h]
  __int64 retaddr; // [rsp+E8h] [rbp+0h]
  int v61; // [rsp+108h] [rbp+20h]
  int v62; // [rsp+108h] [rbp+20h]

  v5 = 48 * a4;
  v9 = 48 * a4 - 0x220000000000LL;
  if ( !*(_QWORD *)a3 )
    KeBugCheckEx(0x4Eu, 1uLL, a3, *(_QWORD *)(a1 + 18688), 0LL);
  _InterlockedDecrement64((volatile signed __int64 *)a3);
  v10 = 1;
  if ( dword_140E3018C == 1 )
  {
    v11 = a4 & 0x1F;
    LOBYTE(v12) = 1;
    v13 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E301E0 + 1) + 4 * (a4 >> 5));
    if ( (unsigned __int64)(v11 + 1) <= 0x20 )
    {
      v14 = 1 << v11;
LABEL_5:
      _InterlockedOr(v13, v14);
      goto LABEL_6;
    }
    if ( (a4 & 0x1F) == 0 )
      goto LABEL_63;
    _InterlockedOr(v13++, ((1 << (32 - (a4 & 0x1F))) - 1) << v11);
    v12 = 1LL - (32 - (unsigned int)(a4 & 0x1F));
    if ( v12 >= 0x20 )
    {
      v55 = v12 >> 5;
      v12 += -32LL * (v12 >> 5);
      do
      {
        *v13++ = -1;
        --v55;
      }
      while ( v55 );
    }
    if ( v12 )
    {
LABEL_63:
      v14 = (1 << v12) - 1;
      goto LABEL_5;
    }
  }
LABEL_6:
  if ( (*(_DWORD *)(v9 + 32) & 0x8000000) != 0 )
  {
    MiUnlinkProtectedStandbyPfn((_QWORD *)v9);
    v61 = 1;
  }
  else
  {
    v15 = *(_QWORD *)(v9 + 24);
    v61 = 0;
    v16 = *(_QWORD *)v9 & 0xFFFFFFFFFFLL;
    v17 = v15 & 0xFFFFFFFFFFLL;
    if ( (v15 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFFLL )
      *(_QWORD *)(a3 + 16) = v16;
    else
      *(_QWORD *)(48 * v17 - 0x220000000000LL) = *(_QWORD *)v9 ^ (*(_QWORD *)(48 * v17 - 0x220000000000LL) ^ *(_QWORD *)v9) & 0xFFFFFF0000000000uLL;
    if ( v16 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(a3 + 24) = v17;
    }
    else
    {
      v18 = (volatile signed __int64 *)(48 * v16 - 0x21FFFFFFFFE8LL);
      v19 = *v18;
      v20 = _InterlockedCompareExchange64(v18, v15 ^ (v15 ^ *v18) & 0xFFFFFF0000000000uLL, *v18);
      if ( v19 != v20 )
      {
        do
        {
          v21 = v20;
          v20 = _InterlockedCompareExchange64(v18, v15 ^ (v15 ^ v20) & 0xFFFFFF0000000000uLL, v20);
        }
        while ( v21 != v20 );
      }
    }
  }
  v22 = 0xAAAAAAAAAAAAAAABuLL;
  v23 = 0xAAAAAAAAAAAAAAABuLL * (v5 >> 4);
  v24 = 48 * v23;
  v25 = 48 * v23 - 0x220000000000LL;
  v56 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v25 + 40) >> 43) & 0x3FFLL));
  v26 = dword_140E2DC04;
  if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
    || (v27 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v23 < *(_QWORD *)v27)
    || dword_140E2DC00 != dword_140E2DC04 && v23 >= *((_QWORD *)v27 + 2) )
  {
    for ( i = 0; ; i = v29 + 1 )
    {
      while ( 1 )
      {
        if ( v26 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, v23, 0LL, 0LL);
        v29 = (i + v26) >> 1;
        v27 = (char *)qword_140E2DC60 + 16 * v29;
        if ( v23 >= *(_QWORD *)v27 )
          break;
        if ( !v29 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v23, (ULONG_PTR)v27, 0LL);
        v26 = v29 - 1;
      }
      if ( v29 == dword_140E2DC04 || v23 < *((_QWORD *)v27 + 2) )
        break;
    }
    dword_140E2DC00 = (i + v26) >> 1;
    v22 = 0xAAAAAAAAAAAAAAABuLL;
  }
  v30 = *(_DWORD *)(v25 + 32);
  v58 = *((_DWORD *)v27 + 2);
  if ( (v30 & 0x8000000) != 0
    && (v25 < 0xFFFFDE0000000000uLL
     || v25 >= 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
     || (v51 = 0xAAAAAAAAAAAAAAABuLL * (v24 >> 4), v51 >= qword_140E35C40) && v51 < qword_140E35C40 + 2048
     || (BYTE2(v30) & 7) != 6 && (unsigned int)MiGetPfnSlabType(v25) == 9) )
  {
    v31 = 5;
  }
  else
  {
    v31 = HIBYTE(v30) & 7;
  }
  if ( qword_140E2DC68 )
    v32 = *((_BYTE *)MiSearchChannelTable(v22 * (v24 >> 4)) + 12);
  else
    v32 = 0;
  v57 = *(_QWORD *)(v56 + 16) + 57216LL * v58 + 88 * (v31 + 8LL * v32 + 59);
  v33 = (8LL * (*(_DWORD *)(v9 + 36) & 0xFFE00000)) | (((*(_QWORD *)v9 >> 20) | *(_QWORD *)(v9 + 40) & 0xF80000000000000uLL) >> 20);
  v34 = (*(_QWORD *)(v9 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(v9 + 36) & 0x1FFFFF) << 19);
  if ( v33 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(v57 + 24) = v34;
  }
  else
  {
    v35 = 48 * v33 - 0x220000000000LL;
    v36 = *(_QWORD *)(v35 + 24);
    v37 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v35 + 24),
            (v34 << 40) ^ (v36 ^ (v34 << 40)) & 0xF80000FFFFFFFFFFuLL,
            v36);
    if ( v36 != v37 )
    {
      do
      {
        v50 = v37;
        v37 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v35 + 24),
                (v34 << 40) ^ (v37 ^ (v34 << 40)) & 0xF80000FFFFFFFFFFuLL,
                v37);
      }
      while ( v50 != v37 );
    }
    *(_DWORD *)(v35 + 36) = *(_DWORD *)(v35 + 36) & 0xFFE00000 | (v34 >> 19);
  }
  if ( v34 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(v57 + 16) = v33;
  }
  else
  {
    v38 = 48 * v34 - 0x220000000000LL;
    v39 = *(_DWORD *)(v38 + 36);
    *(_QWORD *)v38 = *(_QWORD *)v38 & 0xFFFFFFFFFFLL | (v33 << 40);
    v40 = v33;
    v41 = v33 << 20;
    *(_DWORD *)(v38 + 36) = v39 & 0x1FFFFF | ((unsigned int)(v40 >> 24) << 21);
    v42 = *(_QWORD *)(v38 + 40);
    v43 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v38 + 40),
            v41 ^ (v41 ^ v42) & 0xF07FFFFFFFFFFFFFuLL,
            v42);
    if ( v42 != v43 )
    {
      do
      {
        v44 = v43;
        v43 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v38 + 40),
                v41 ^ (v41 ^ v43) & 0xF07FFFFFFFFFFFFFuLL,
                v43);
      }
      while ( v44 != v43 );
    }
  }
  _InterlockedDecrement64((volatile signed __int64 *)v57);
  if ( v61 )
  {
    v62 = *(_DWORD *)(v9 + 32);
    HIBYTE(v62) &= ~8u;
    *(_DWORD *)(v9 + 32) = v62;
  }
  if ( *(_BYTE *)a2 )
  {
    if ( *(_BYTE *)(a2 + 24) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a2 + 16) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 24) = 0;
    }
    if ( *(_BYTE *)(a2 + 48) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a2 + 40) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 48) = 0;
    }
    if ( *(_BYTE *)(a2 + 72) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a2 + 64) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 72) = 0;
    }
    if ( *(_BYTE *)(a2 + 96) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a2 + 88) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 96) = 0;
    }
    v45 = (volatile signed __int32 *)(a3 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v45, 0xBFFFFFFF);
      _InterlockedDecrement(v45);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v45, retaddr);
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a3 + 32));
  }
  MiUpdateLargePageCandidateValue(a1, a4, 3LL, 2LL, 0LL);
  v46 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 18688));
  if ( v46 == *(_QWORD *)(a1 + 16640) || v46 == *(_QWORD *)(a1 + 16648) )
    MiUpdateAvailableEventsAtDpc(a1);
  if ( v46 <= 0x420 )
  {
    v52 = *(_QWORD *)(a1 + 17600);
    if ( !v52 || !*(_BYTE *)(v52 + 52) )
      MiObtainFreePages(a1);
    if ( v46 < 0xA0 && v46 + 1 >= 0xA0 )
    {
      MiSlabDemotionLowMemoryConditionUpdate(a1, 1LL);
      if ( *(_DWORD *)(a1 + 1204) != -1 )
        KeSetEvent((PRKEVENT)(a1 + 1056), 0, 0);
    }
  }
  if ( v46 >= 0x9F )
    goto LABEL_48;
  if ( (a5 & 0x200) != 0 )
    goto LABEL_48;
  CurrentThread = KeGetCurrentThread();
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) == 8 )
    goto LABEL_48;
  v54 = *(_DWORD *)(a1 + 4);
  if ( v46 >= 0x20 || (v54 & 4) == 0 )
  {
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0 || v46 < 0x21 )
    {
      v47 = (v54 & 0x10) != 0;
      goto LABEL_49;
    }
LABEL_48:
    v47 = 1;
    goto LABEL_49;
  }
  v47 = 0;
LABEL_49:
  *(_QWORD *)(v9 + 24) &= 0xFFFFFF0000000000uLL;
  MiRestoreTransitionPte(v9);
  v48 = 7232LL;
  if ( *(__int64 *)(v9 + 40) >= 0 )
    v10 = 0;
  if ( !v10 )
    v48 = 16320LL;
  result = v47;
  _InterlockedDecrement64((volatile signed __int64 *)(v48 + a1));
  return result;
}
