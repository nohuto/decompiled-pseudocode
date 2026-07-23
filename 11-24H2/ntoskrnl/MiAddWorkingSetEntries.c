/*
 * XREFs of MiAddWorkingSetEntries @ 0x140242260
 * Callers:
 *     MiEmptyDeferredWorkingSetEntries @ 0x14020C4A0 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiReleaseFaultState @ 0x1402418F0 (MiReleaseFaultState.c)
 *     MiUnlockFaultPageTable @ 0x140241ED0 (MiUnlockFaultPageTable.c)
 *     MiQueueCoreWorkingSetEntries @ 0x140243260 (MiQueueCoreWorkingSetEntries.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsDriverPage @ 0x1402BA964 (MiIsDriverPage.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertActivePageTableLinksTail @ 0x140392798 (MiInsertActivePageTableLinksTail.c)
 *     MiRemoveActivePageTableLinks @ 0x1403929A8 (MiRemoveActivePageTableLinks.c)
 *     MiRebuildPageTableAges @ 0x140392C6C (MiRebuildPageTableAges.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall MiAddWorkingSetEntries(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  char v4; // r15
  unsigned __int64 v5; // rbx
  int v8; // ebp
  unsigned __int64 v9; // rsi
  volatile signed __int32 *v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  signed __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r8
  __int64 v19; // r10
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  unsigned __int8 v25; // si
  unsigned int v26; // eax
  unsigned int v27; // r12d
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // r8
  unsigned __int8 v33; // al
  char result; // al
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // rbp
  unsigned __int64 v41; // rdx
  __int64 v42; // r12
  __int64 v43; // rbx
  __int64 *v44; // r15
  __int64 v45; // rax
  __int64 **v46; // rcx
  __int64 HasShadow; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // rtt
  unsigned __int64 v51; // r10
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rtt
  __int64 *v55; // rbx
  __int64 v56; // rax
  unsigned __int64 v57; // rtt
  char v58; // [rsp+20h] [rbp-78h]
  _OWORD v60[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  v4 = a4;
  v58 = a4;
  v5 = a3;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 4), a3);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    _InterlockedAdd(&dword_140E38900, a3);
  if ( !dword_140E37558 )
    dword_140E37558 = (unsigned __int8)((*(_DWORD *)(a1 + 184) & 0xF) - 1) <= 3u;
  __addgsdword(0x2E90u, a3);
  v8 = 0;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    v9 = a3;
  else
    v9 = 0LL;
  v10 = (volatile signed __int32 *)&unk_140E388C0;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v11 = (unsigned __int64)&unk_140E388C0;
  else
    v11 = a1 + 256;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw((const void *)v11);
    v13 = *(_DWORD *)v11 & 0x7FFFFFFF;
    while ( 1 )
    {
      v12 = (unsigned int)(v13 + 1);
      v14 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)v11, v12, v13);
      if ( v14 == v13 )
        break;
      if ( v13 < 0 )
      {
        LOBYTE(v12) = -1;
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)v11, v12, 0xFFFFF6FFFFFFFFFFuLL, a4);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented((_DWORD *)v11, 0xFFu);
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 144), v5);
  if ( v9 )
  {
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 128), v9);
    v16 = *(_QWORD *)(a1 + 160);
    v11 = v9 + v15;
    if ( v11 > v16 )
    {
      do
      {
        v50 = v16;
        v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 160), v11, v16);
      }
      while ( v50 != v16 && v11 > v16 );
    }
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
  {
    _InterlockedAdd64(&qword_140E38908, v5);
    if ( v9 )
    {
      v53 = qword_140E38918;
      v11 = v9 + _InterlockedExchangeAdd64(&qword_140E38910, v9);
      if ( v11 > qword_140E38918 )
      {
        do
        {
          v54 = v53;
          v53 = _InterlockedCompareExchange64(&qword_140E38918, v11, v53);
        }
        while ( v54 != v53 && v11 > v53 );
      }
    }
  }
  if ( (v4 & 2) != 0 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 152), v5);
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 136), v5);
  }
  v17 = *(unsigned int *)(a1 + 184);
  v18 = (unsigned __int8)v17;
  LOBYTE(v18) = v17 & 0xF;
  if ( (v17 & 0xF) != 0 )
  {
    v12 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 174));
    v51 = *(_QWORD *)(v12 + 7232) + *(_QWORD *)(a1 + 144);
    v11 = v12 + 8LL * ((*(_DWORD *)(a1 + 184) & 0xFu) - 1);
    v52 = *(_QWORD *)(v11 + 7240);
    if ( v51 > v52 )
    {
      do
      {
        v57 = v52;
        v52 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 7240), v51, v52);
      }
      while ( v57 != v52 && v51 > v52 );
    }
    if ( (_BYTE)v18 == 3 )
    {
      if ( PsNtosImageBase
        && (a2 >= (unsigned __int64)PsNtosImageBase && a2 < PsNtosImageEnd
         || a2 >= (unsigned __int64)PsHalImageBase && a2 < PsHalImageEnd) )
      {
        _InterlockedAdd((volatile signed __int32 *)&xmmword_140E2D9A8, v5);
      }
      else if ( (unsigned int)MiGetSystemRegionType(a2, v12, v18) == 11
             && MiIsDriverPage(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL) )
      {
        _InterlockedAdd((_DWORD *)&xmmword_140E2D9A8 + 1, v5);
      }
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 128);
    if ( v17 > *(_QWORD *)(a1 + 112) && (*(_DWORD *)(a1 + 188) & 1) == 0 )
    {
      v12 = *(_QWORD *)(a1 + 144);
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( v12 > v18 )
      {
        v19 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 174));
        v11 = *(_QWORD *)(v19 + 18512);
        if ( !v5 || ((v12 ^ (v5 + v12)) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        {
          v20 = *(_QWORD *)(v19 + 18688);
          v8 = 1;
          if ( v12 >= v11 >> 4 && v20 < v11 >> 4 )
            goto LABEL_109;
        }
        else
        {
          v20 = -1LL;
        }
        v11 >>= 2;
        v12 -= v18;
        if ( v12 >= 3 * v11 )
        {
          v11 = *(_QWORD *)(v19 + 17600);
          if ( *(_DWORD *)(v19 + 7204)
             + *(_DWORD *)(v19 + 7208)
             + *(_DWORD *)(v19 + 7212)
             + *(_DWORD *)(v19 + 7216)
             + *(_DWORD *)(v19 + 7220)
             + *(_DWORD *)(v19 + 7224)
             + *(_DWORD *)(v19 + 7228) != *(_DWORD *)(v11 + 44) )
          {
            if ( !v8 )
              v20 = *(_QWORD *)(v19 + 18688);
            if ( v20 < 8LL * *(_QWORD *)(v11 + 312) )
              goto LABEL_109;
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 184) & 0x40) != 0 && v17 > *(_QWORD *)(a1 + 120) )
LABEL_109:
        _InterlockedOr((volatile signed __int32 *)(a1 + 188), 1u);
    }
  }
  if ( (v4 & 4) != 0 )
  {
    v21 = 0xFFFFF6FB7DBED000uLL;
    v22 = 0xFFFFF6FB7DBED7F8uLL;
    v23 = a2;
    memset(v60, 0, sizeof(v60));
    if ( v5 )
    {
      do
      {
        if ( v23 < 0xFFFFF68000000000uLL || v23 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v18 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v24 = *(_QWORD *)v18;
          if ( v18 >= v21 && v18 <= v22 && (v24 & 1) != 0 )
          {
            LOBYTE(v11) = (v24 & 0x42) != 0;
            if ( ((unsigned __int8)v11 & ((v24 & 0x20) != 0)) == 0 )
            {
              HasShadow = MiPteHasShadow(v11, v24, v18, v17);
              if ( HasShadow )
              {
                v48 = *(_QWORD *)(HasShadow + 1288);
                if ( v48 )
                {
                  v18 = (v18 >> 3) & 0x1FF;
                  v49 = *(_QWORD *)(v48 + 8 * v18);
                  if ( (v49 & 0x20) != 0 )
                    v24 |= 0x20uLL;
                  v11 = v24;
                  v24 |= 0x42uLL;
                  if ( (v49 & 0x42) == 0 )
                    v24 = v11;
                }
              }
            }
          }
          v12 = HIBYTE(v24) & 0xF;
        }
        else
        {
          v12 = (*(_QWORD *)(48
                           * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(
                                                   ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                                                   v12,
                                                   v18) >> 12) & 0xFFFFFFFFFFLL)
                           - 0x220000000000LL) >> 42) & 7LL;
          v22 = 0xFFFFF6FB7DBED7F8uLL;
          v21 = 0xFFFFF6FB7DBED000uLL;
        }
        v23 += 4096LL;
        ++*((_DWORD *)v60 + (unsigned __int8)v12);
        --v5;
      }
      while ( v5 );
      v10 = (volatile signed __int32 *)&unk_140E388C0;
    }
    v25 = 8;
    while ( 1 )
    {
      v26 = *((_DWORD *)v60 + --v25);
      v27 = v26;
      if ( !v26 )
        goto LABEL_50;
      v28 = v26;
      v29 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v30 = *(_QWORD *)v29;
      if ( v29 >= v21
        && v29 <= v22
        && (v30 & 1) != 0
        && ((v30 & 0x42) == 0 || (v30 & 0x20) == 0)
        && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v37 = *(_QWORD *)(KernelWaitTime + 8 * ((v29 >> 3) & 0x1FF));
            if ( (v37 & 0x20) != 0 )
              v30 |= 0x20uLL;
            v38 = v30;
            v30 |= 0x42uLL;
            if ( (v37 & 0x42) == 0 )
              v30 = v38;
          }
        }
      }
      v31 = 48 * ((v30 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v32 = (*(_QWORD *)v31 >> 45) & 0x3FFLL;
      v33 = (*(_QWORD *)v31 >> 55) & 7;
      if ( (v58 & 8) == 0 )
      {
        if ( v25 == v33 )
        {
          v41 = (unsigned __int64)((unsigned int)v32 + v27) << 45;
          v42 = ((_WORD)v32 + (_WORD)v27) & 0x3FF;
          *(_QWORD *)v31 = v41 ^ (v41 ^ *(_QWORD *)v31) & 0xFF801FFFFFFFFFFFuLL;
          if ( !(v32 + v28) )
          {
            MiRebuildPageTableAges(a1, a2, 0LL);
            v21 = 0xFFFFF6FB7DBED000uLL;
            goto LABEL_49;
          }
          if ( (*(_DWORD *)(v31 + 36) & 0x4000000) == 0 )
          {
            v43 = *(_QWORD *)v31;
LABEL_69:
            *(_QWORD *)v31 = v43 & 0xFC001FFFFFFFFFFFuLL | ((v42 | ((unsigned __int64)(v25 & 7) << 10)) << 45);
            MiInsertActivePageTableLinksTail(a1, v31, v25, 0LL);
            v21 = 0xFFFFF6FB7DBED000uLL;
          }
        }
        else if ( v25 > v33 )
        {
          v43 = *(_QWORD *)v31;
          if ( (*(_DWORD *)(v31 + 36) & 0x4000000) != 0 )
            MiRemoveActivePageTableLinks(a1, v31, 0LL);
          v42 = v27 & 0x3FF;
          goto LABEL_69;
        }
      }
LABEL_49:
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 8LL * v25 + 40), v28);
      if ( v25 == 7 )
      {
        v22 = 0xFFFFF6FB7DBED7F8uLL;
        v39 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 174));
        v40 = *(_QWORD *)(v39 + 17600);
        if ( *(_QWORD *)(a1 + 96) >= *(_QWORD *)(v40 + 56) )
        {
          v44 = (__int64 *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 24) )
          {
            v22 = 0xFFFFF6FB7DBED7F8uLL;
            if ( *(__int64 **)(v39 + 17608) != v44 )
            {
              ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
              if ( *(_BYTE *)(v40 + 53) || (v45 = *v44) == 0 )
              {
                *(_BYTE *)(v40 + 54) = 1;
              }
              else
              {
                v46 = *(__int64 ***)(a1 + 32);
                if ( *(__int64 **)(v45 + 8) != v44
                  || *v46 != v44
                  || (v55 = (__int64 *)(v39 + 17608),
                      *v46 = (__int64 *)v45,
                      *(_QWORD *)(v45 + 8) = v46,
                      v56 = *v55,
                      *(__int64 **)(*v55 + 8) != v55) )
                {
                  __fastfail(3u);
                }
                *v44 = v56;
                *(_QWORD *)(a1 + 32) = v55;
                *(_QWORD *)(v56 + 8) = v44;
                *v55 = (__int64)v44;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
              v22 = 0xFFFFF6FB7DBED7F8uLL;
              v21 = 0xFFFFF6FB7DBED000uLL;
            }
          }
        }
      }
      else
      {
LABEL_50:
        if ( !v25 )
          break;
        v22 = 0xFFFFF6FB7DBED7F8uLL;
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
