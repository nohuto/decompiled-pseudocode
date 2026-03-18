/*
 * XREFs of MiAddWorkingSetEntries @ 0x1402E0980
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 *     MiReleaseFaultState @ 0x1402E0010 (MiReleaseFaultState.c)
 *     MiUnlockFaultPageTable @ 0x1402E05F0 (MiUnlockFaultPageTable.c)
 *     MiQueueCoreWorkingSetEntries @ 0x1402E1980 (MiQueueCoreWorkingSetEntries.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402E1B00 (MiEmptyDeferredWorkingSetEntries.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPteHasShadow @ 0x1402141A0 (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiIsDriverPage @ 0x1402C80A4 (MiIsDriverPage.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiInsertActivePageTableLinksTail @ 0x1402E24F8 (MiInsertActivePageTableLinksTail.c)
 *     MiRemoveActivePageTableLinks @ 0x1402E2CB8 (MiRemoveActivePageTableLinks.c)
 *     MiRebuildPageTableAges @ 0x1402E3D14 (MiRebuildPageTableAges.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

char __fastcall MiAddWorkingSetEntries(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v5; // rbx
  int v8; // ebp
  unsigned __int64 v9; // rsi
  volatile signed __int32 *v10; // r14
  _DWORD *v11; // rcx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  signed __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  int v17; // r9d
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // r10
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rsi
  __int64 *v27; // r8
  __int64 v28; // rdx
  unsigned __int8 v29; // dl
  unsigned __int8 v30; // si
  unsigned int v31; // eax
  unsigned int v32; // r12d
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // r8
  unsigned __int8 v38; // al
  char result; // al
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // rbp
  unsigned __int64 v46; // rdx
  __int64 v47; // r12
  __int64 v48; // rbx
  __int64 *v49; // r15
  __int64 v50; // rax
  __int64 **v51; // rcx
  unsigned __int64 v52; // rtt
  __int64 v53; // rdx
  unsigned __int64 v54; // r10
  __int64 v55; // rcx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rtt
  __int64 *v60; // rbx
  __int64 v61; // rax
  unsigned __int64 v62; // rtt
  __int64 v63; // rcx
  _OWORD v66[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  v5 = a3;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 4), a3);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    _InterlockedAdd(&dword_140E387C0, a3);
  if ( !dword_140E37418 )
    dword_140E37418 = (unsigned __int8)((*(_DWORD *)(a1 + 184) & 0xF) - 1) <= 3u;
  __addgsdword(0x2E90u, a3);
  v8 = 0;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    v9 = a3;
  else
    v9 = 0LL;
  v10 = (volatile signed __int32 *)&unk_140E38780;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v11 = &unk_140E38780;
  else
    v11 = (_DWORD *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v11);
    v12 = *v11 & 0x7FFFFFFF;
    while ( 1 )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange(v11, v12 + 1, v12);
      if ( v13 == v12 )
        break;
      if ( v12 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire(v11, 0xFFu);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v11, 0xFFu);
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 144), v5);
  if ( v9 )
  {
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 128), v9);
    v15 = *(_QWORD *)(a1 + 160);
    v16 = v9 + v14;
    if ( v16 > v15 )
    {
      do
      {
        v52 = v15;
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 160), v16, v15);
      }
      while ( v52 != v15 && v16 > v15 );
    }
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
  {
    _InterlockedAdd64(&qword_140E387C8, v5);
    if ( v9 )
    {
      v57 = qword_140E387D8;
      v58 = v9 + _InterlockedExchangeAdd64(&qword_140E387D0, v9);
      if ( v58 > qword_140E387D8 )
      {
        do
        {
          v59 = v57;
          v57 = _InterlockedCompareExchange64(&qword_140E387D8, v58, v57);
        }
        while ( v59 != v57 && v58 > v57 );
      }
    }
  }
  if ( (a4 & 2) != 0 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 152), v5);
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 136), v5);
  }
  v17 = *(_DWORD *)(a1 + 184);
  if ( (v17 & 0xF) != 0 )
  {
    v53 = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(a1 + 174));
    v54 = *(_QWORD *)(v53 + 7232) + *(_QWORD *)(a1 + 144);
    v55 = v53 + 8LL * ((*(_DWORD *)(a1 + 184) & 0xFu) - 1);
    v56 = *(_QWORD *)(v55 + 7240);
    if ( v54 > v56 )
    {
      do
      {
        v62 = v56;
        v56 = _InterlockedCompareExchange64((volatile signed __int64 *)(v55 + 7240), v54, v56);
      }
      while ( v62 != v56 && v54 > v56 );
    }
    if ( (v17 & 0xF) == 3 )
    {
      if ( PsNtosImageBase
        && (a2 >= PsNtosImageBase && a2 < PsNtosImageEnd || a2 >= PsHalImageBase && a2 < PsHalImageEnd) )
      {
        _InterlockedAdd((volatile signed __int32 *)&xmmword_140E2D868, v5);
      }
      else if ( (unsigned int)MiGetSystemRegionType(a2) == 11
             && MiIsDriverPage(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1) )
      {
        _InterlockedAdd((_DWORD *)&xmmword_140E2D868 + 1, v5);
      }
    }
  }
  if ( (a4 & 1) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 128);
    if ( v18 > *(_QWORD *)(a1 + 112) && (*(_DWORD *)(a1 + 188) & 1) == 0 )
    {
      v19 = *(_QWORD *)(a1 + 144);
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( v19 > v20 )
      {
        v21 = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(a1 + 174));
        v22 = *(_QWORD *)(v21 + 18512);
        if ( !v5 || ((v19 ^ (v5 + v19)) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        {
          v23 = *(_QWORD *)(v21 + 18688);
          v8 = 1;
          if ( v19 >= v22 >> 4 && v23 < v22 >> 4 )
            goto LABEL_103;
        }
        else
        {
          v23 = -1LL;
        }
        if ( v19 - v20 >= 3 * (v22 >> 2) )
        {
          v63 = *(_QWORD *)(v21 + 17600);
          if ( *(_DWORD *)(v21 + 7204)
             + *(_DWORD *)(v21 + 7208)
             + *(_DWORD *)(v21 + 7212)
             + *(_DWORD *)(v21 + 7216)
             + *(_DWORD *)(v21 + 7220)
             + *(_DWORD *)(v21 + 7224)
             + *(_DWORD *)(v21 + 7228) != *(_DWORD *)(v63 + 44) )
          {
            if ( !v8 )
              v23 = *(_QWORD *)(v21 + 18688);
            if ( v23 < 8LL * *(_QWORD *)(v63 + 312) )
              goto LABEL_103;
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 184) & 0x40) != 0 && v18 > *(_QWORD *)(a1 + 120) )
LABEL_103:
        _InterlockedOr((volatile signed __int32 *)(a1 + 188), 1u);
    }
  }
  if ( (a4 & 4) != 0 )
  {
    v24 = 0xFFFFF6FB7DBED000uLL;
    v25 = 0xFFFFF6FB7DBED7F8uLL;
    v26 = a2;
    memset(v66, 0, sizeof(v66));
    if ( v5 )
    {
      do
      {
        if ( v26 < 0xFFFFF68000000000uLL || v26 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v27 = (__int64 *)(((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v28 = *v27;
          if ( (unsigned __int64)v27 >= v24
            && (unsigned __int64)v27 <= v25
            && (v28 & 1) != 0
            && ((v28 & 0x42) == 0 || (v28 & 0x20) == 0) )
          {
            MiPteHasShadow();
          }
          v29 = HIBYTE(v28) & 0xF;
        }
        else
        {
          v29 = (*(_QWORD *)(48
                           * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                           - 0x220000000000LL) >> 42) & 7;
          v25 = 0xFFFFF6FB7DBED7F8uLL;
          v24 = 0xFFFFF6FB7DBED000uLL;
        }
        v26 += 4096LL;
        ++*((_DWORD *)v66 + v29);
        --v5;
      }
      while ( v5 );
      v10 = (volatile signed __int32 *)&unk_140E38780;
    }
    v30 = 8;
    while ( 1 )
    {
      v31 = *((_DWORD *)v66 + --v30);
      v32 = v31;
      if ( !v31 )
        goto LABEL_51;
      v33 = v31;
      v34 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v35 = *(_QWORD *)v34;
      if ( v34 >= v24
        && v34 <= v25
        && (v35 & 1) != 0
        && ((v35 & 0x42) == 0 || (v35 & 0x20) == 0)
        && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v42 = *(_QWORD *)(KernelWaitTime + 8 * ((v34 >> 3) & 0x1FF));
            if ( (v42 & 0x20) != 0 )
              v35 |= 0x20uLL;
            v43 = v35;
            v35 |= 0x42uLL;
            if ( (v42 & 0x42) == 0 )
              v35 = v43;
          }
        }
      }
      v36 = 48 * ((v35 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v37 = (*(_QWORD *)v36 >> 45) & 0x3FFLL;
      v38 = (*(_QWORD *)v36 >> 55) & 7;
      if ( (a4 & 8) == 0 )
      {
        if ( v30 == v38 )
        {
          v46 = (unsigned __int64)((unsigned int)v37 + v32) << 45;
          v47 = ((_WORD)v37 + (_WORD)v32) & 0x3FF;
          *(_QWORD *)v36 = v46 ^ (v46 ^ *(_QWORD *)v36) & 0xFF801FFFFFFFFFFFuLL;
          if ( !(v37 + v33) )
          {
            MiRebuildPageTableAges(a1, a2, 0LL);
            v24 = 0xFFFFF6FB7DBED000uLL;
            goto LABEL_50;
          }
          if ( (*(_DWORD *)(v36 + 36) & 0x4000000) == 0 )
          {
            v48 = *(_QWORD *)v36;
LABEL_70:
            *(_QWORD *)v36 = v48 & 0xFC001FFFFFFFFFFFuLL | ((v47 | ((unsigned __int64)(v30 & 7) << 10)) << 45);
            MiInsertActivePageTableLinksTail(a1, v36, v30, 0LL);
            v24 = 0xFFFFF6FB7DBED000uLL;
          }
        }
        else if ( v30 > v38 )
        {
          v48 = *(_QWORD *)v36;
          if ( (*(_DWORD *)(v36 + 36) & 0x4000000) != 0 )
            MiRemoveActivePageTableLinks(a1, v36, 0LL);
          v47 = v32 & 0x3FF;
          goto LABEL_70;
        }
      }
LABEL_50:
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 8LL * v30 + 40), v33);
      if ( v30 == 7 )
      {
        v25 = 0xFFFFF6FB7DBED7F8uLL;
        v44 = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(a1 + 174));
        v45 = *(_QWORD *)(v44 + 17600);
        if ( *(_QWORD *)(a1 + 96) >= *(_QWORD *)(v45 + 56) )
        {
          v49 = (__int64 *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 24) )
          {
            v25 = 0xFFFFF6FB7DBED7F8uLL;
            if ( *(__int64 **)(v44 + 17608) != v49 )
            {
              ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E373C0);
              if ( *(_BYTE *)(v45 + 53) || (v50 = *v49) == 0 )
              {
                *(_BYTE *)(v45 + 54) = 1;
              }
              else
              {
                v51 = *(__int64 ***)(a1 + 32);
                if ( *(__int64 **)(v50 + 8) != v49
                  || *v51 != v49
                  || (v60 = (__int64 *)(v44 + 17608),
                      *v51 = (__int64 *)v50,
                      *(_QWORD *)(v50 + 8) = v51,
                      v61 = *v60,
                      *(__int64 **)(*v60 + 8) != v60) )
                {
                  __fastfail(3u);
                }
                *v49 = v61;
                *(_QWORD *)(a1 + 32) = v60;
                *(_QWORD *)(v61 + 8) = v49;
                *v60 = (__int64)v49;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E373C0);
              v25 = 0xFFFFF6FB7DBED7F8uLL;
              v24 = 0xFFFFF6FB7DBED000uLL;
            }
          }
        }
      }
      else
      {
LABEL_51:
        if ( !v30 )
          break;
        v25 = 0xFFFFF6FB7DBED7F8uLL;
      }
    }
  }
  result = *(_DWORD *)(a1 + 184) & 0xF;
  if ( result != 1 )
    v10 = (volatile signed __int32 *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = PopHibernateInProgress;
    if ( !PopHibernateInProgress )
      return ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
  }
  _InterlockedAnd(v10, 0xBFFFFFFF);
  _InterlockedDecrement(v10);
  return result;
}
