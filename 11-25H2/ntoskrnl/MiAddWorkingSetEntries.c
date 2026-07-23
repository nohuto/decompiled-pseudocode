/*
 * XREFs of MiAddWorkingSetEntries @ 0x1402BA2B0
 * Callers:
 *     MiAllocateWsle @ 0x14024B590 (MiAllocateWsle.c)
 *     MiQueueCoreWorkingSetEntries @ 0x1402B9360 (MiQueueCoreWorkingSetEntries.c)
 *     MiReleaseFaultState @ 0x1402B9970 (MiReleaseFaultState.c)
 *     MiUnlockFaultPageTable @ 0x1402B9F30 (MiUnlockFaultPageTable.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402BB160 (MiEmptyDeferredWorkingSetEntries.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiIsDriverPage @ 0x14036D6BC (MiIsDriverPage.c)
 *     MiVolunteerForTrimFirst @ 0x140385450 (MiVolunteerForTrimFirst.c)
 *     MiInsertActivePageTableLinksTail @ 0x14038556C (MiInsertActivePageTableLinksTail.c)
 *     MiRemoveActivePageTableLinks @ 0x14038573C (MiRemoveActivePageTableLinks.c)
 *     MiSetPfnOldestWsleLeafAge @ 0x140385A24 (MiSetPfnOldestWsleLeafAge.c)
 *     MiRebuildPageTableAges @ 0x140385AC4 (MiRebuildPageTableAges.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall MiAddWorkingSetEntries(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r14
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  volatile signed __int32 *v9; // rbp
  _DWORD *v10; // rcx
  signed __int32 v11; // eax
  __int64 v12; // rdx
  signed __int32 v13; // ett
  signed __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  int v17; // r9d
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  int v21; // r11d
  __int64 v22; // r10
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  char result; // al
  unsigned __int64 v26; // rsi
  unsigned __int8 v27; // al
  unsigned __int8 v28; // si
  __int64 v29; // r9
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // r8
  unsigned __int8 v35; // al
  unsigned __int64 v36; // rtt
  __int64 v37; // rdx
  unsigned __int64 v38; // r10
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rtt
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rtt
  __int64 v50; // rcx
  _OWORD v53[2]; // [rsp+40h] [rbp-68h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h]

  v5 = a3;
  v6 = a2;
  v7 = a1;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 4), a3);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    _InterlockedAdd(&dword_140E38580, a3);
  if ( !dword_140E371D8 )
    dword_140E371D8 = (unsigned __int8)((*(_DWORD *)(a1 + 184) & 0xF) - 1) <= 3u;
  __addgsdword(0x2E90u, a3);
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    v8 = a3;
  else
    v8 = 0LL;
  v9 = (volatile signed __int32 *)&unk_140E38540;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v10 = &unk_140E38540;
  else
    v10 = (_DWORD *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v10);
    v11 = *v10 & 0x7FFFFFFF;
    while ( 1 )
    {
      v12 = (unsigned int)(v11 + 1);
      v13 = v11;
      v11 = _InterlockedCompareExchange(v10, v12, v11);
      if ( v13 == v11 )
        break;
      if ( v11 < 0 )
      {
        LOBYTE(v12) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v10, v12);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, 0xFFu);
  }
  _InterlockedAdd64((volatile signed __int64 *)(v7 + 144), v5);
  if ( v8 )
  {
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 128), v8);
    v15 = *(_QWORD *)(v7 + 160);
    v16 = v8 + v14;
    if ( v16 > v15 )
    {
      do
      {
        v36 = v15;
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 160), v16, v15);
      }
      while ( v36 != v15 && v16 > v15 );
    }
  }
  if ( (*(_DWORD *)(v7 + 184) & 0xF) == 1 )
  {
    _InterlockedAdd64(&qword_140E38588, v5);
    if ( v8 )
    {
      v42 = qword_140E38598;
      v43 = v8 + _InterlockedExchangeAdd64(&qword_140E38590, v8);
      if ( v43 > qword_140E38598 )
      {
        do
        {
          v44 = v42;
          v42 = _InterlockedCompareExchange64(&qword_140E38598, v43, v42);
        }
        while ( v44 != v42 && v43 > v42 );
      }
    }
  }
  if ( (a4 & 2) != 0 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(v7 + 152), v5);
    if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
      _InterlockedAdd64((volatile signed __int64 *)(v7 + 136), v5);
  }
  v17 = *(_DWORD *)(v7 + 184);
  if ( (v17 & 0xF) != 0 )
  {
    v37 = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(v7 + 174));
    v38 = *(_QWORD *)(v37 + 7232) + *(_QWORD *)(v7 + 144);
    v39 = v37 + 8LL * ((*(_DWORD *)(v7 + 184) & 0xFu) - 1);
    v40 = *(_QWORD *)(v39 + 7240);
    if ( v38 > v40 )
    {
      do
      {
        v49 = v40;
        v40 = _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 7240), v38, v40);
      }
      while ( v49 != v40 && v38 > v40 );
    }
    if ( (v17 & 0xF) == 3 )
    {
      v41 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
      if ( v41 && (v6 >= v41 && v6 < PsNtosImageEnd || v6 >= (unsigned __int64)PsHalImageBase && v6 < PsHalImageEnd) )
      {
        _InterlockedAdd((volatile signed __int32 *)&xmmword_140E2D628, v5);
      }
      else if ( (unsigned int)MiGetSystemRegionType(v6) == 11
             && MiIsDriverPage(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL) )
      {
        _InterlockedAdd((_DWORD *)&xmmword_140E2D628 + 1, v5);
      }
    }
  }
  if ( (a4 & 1) == 0 )
    goto LABEL_28;
  v18 = *(_QWORD *)(v7 + 128);
  if ( v18 <= *(_QWORD *)(v7 + 112) || (*(_DWORD *)(v7 + 188) & 1) != 0 )
    goto LABEL_28;
  v19 = *(_QWORD *)(v7 + 144);
  v20 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 32LL);
  if ( v19 <= v20 )
    goto LABEL_27;
  v21 = 0;
  v22 = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(v7 + 174));
  v23 = *(_QWORD *)(v22 + 18512);
  if ( v5 && ((v19 ^ (v5 + v19)) & 0xFFFFFFFFFFFFFFC0uLL) == 0 )
  {
    v24 = -1LL;
LABEL_26:
    if ( v19 - v20 >= 3 * (v23 >> 2) )
    {
      v50 = *(_QWORD *)(v22 + 17600);
      if ( *(_DWORD *)(v22 + 7204)
         + *(_DWORD *)(v22 + 7208)
         + *(_DWORD *)(v22 + 7212)
         + *(_DWORD *)(v22 + 7216)
         + *(_DWORD *)(v22 + 7220)
         + *(_DWORD *)(v22 + 7224)
         + *(_DWORD *)(v22 + 7228) != *(_DWORD *)(v50 + 44) )
      {
        if ( !v21 )
          v24 = *(_QWORD *)(v22 + 18688);
        if ( v24 < 8LL * *(_QWORD *)(v50 + 312) )
          goto LABEL_80;
      }
    }
LABEL_27:
    if ( (*(_DWORD *)(v7 + 184) & 0x40) == 0 || v18 <= *(_QWORD *)(v7 + 120) )
      goto LABEL_28;
    goto LABEL_80;
  }
  v24 = *(_QWORD *)(v22 + 18688);
  v21 = 1;
  if ( v19 < v23 >> 4 || v24 >= v23 >> 4 )
    goto LABEL_26;
LABEL_80:
  _InterlockedOr((volatile signed __int32 *)(v7 + 188), 1u);
LABEL_28:
  if ( (a4 & 4) == 0 )
    goto LABEL_29;
  v26 = v6;
  memset(v53, 0, sizeof(v53));
  if ( v5 )
  {
    do
    {
      if ( v26 < 0xFFFFF68000000000uLL || v26 > 0xFFFFF6FFFFFFFFFFuLL )
        v27 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 56) & 0xF;
      else
        v27 = (*(_QWORD *)(48
                         * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                         - 0x220000000000LL) >> 42) & 7;
      v26 += 4096LL;
      ++*((_DWORD *)v53 + v27);
      --v5;
    }
    while ( v5 );
    v7 = a1;
    v6 = a2;
  }
  v28 = 8;
  do
  {
    while ( 1 )
    {
      v29 = *((unsigned int *)v53 + --v28);
      if ( !(_DWORD)v29 )
        break;
      v30 = *((unsigned int *)v53 + v28);
      v31 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v32 = *(_QWORD *)v31;
      if ( v31 >= 0xFFFFF6FB7DBED000uLL
        && v31 <= 0xFFFFF6FB7DBED7F8uLL
        && (v32 & 1) != 0
        && ((v32 & 0x42) == 0 || (v32 & 0x20) == 0)
        && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v47 = *(_QWORD *)(KernelWaitTime + 8 * ((v31 >> 3) & 0x1FF));
            if ( (v47 & 0x20) != 0 )
              v32 |= 0x20uLL;
            v48 = v32;
            v32 |= 0x42uLL;
            if ( (v47 & 0x42) == 0 )
              v32 = v48;
          }
        }
      }
      v33 = 48 * ((v32 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v34 = (*(_QWORD *)v33 >> 45) & 0x3FFLL;
      v35 = (*(_QWORD *)v33 >> 55) & 7;
      if ( (a4 & 8) != 0 )
        goto LABEL_47;
      if ( v28 != v35 )
      {
        if ( v28 > v35 )
          MiSetPfnOldestWsleLeafAge(v7, v33, v28, v29, 0);
LABEL_47:
        v6 = a2;
        goto LABEL_48;
      }
      *(_QWORD *)v33 = ((unsigned __int64)(unsigned int)(v29 + v34) << 45) ^ (*(_QWORD *)v33 ^ ((unsigned __int64)(unsigned int)(v29 + v34) << 45)) & 0xFF801FFFFFFFFFFFuLL;
      if ( v34 + v29 )
      {
        if ( (*(_DWORD *)(v33 + 36) & 0x4000000) == 0 )
        {
          *(_QWORD *)v33 = *(_QWORD *)v33 & 0xFC001FFFFFFFFFFFuLL | ((((_WORD)v29 + (_WORD)v34) & 0x3FF | ((unsigned __int64)(v28 & 7) << 10)) << 45);
          MiInsertActivePageTableLinksTail(v7, v33, v28, 0LL);
        }
        goto LABEL_47;
      }
      v6 = a2;
      MiRebuildPageTableAges(v7, a2, 0LL);
LABEL_48:
      _InterlockedAdd64((volatile signed __int64 *)(v7 + 8LL * v28 + 40), v30);
      if ( v28 != 7 )
        break;
      MiVolunteerForTrimFirst(v7, v30, v34);
    }
  }
  while ( v28 );
  v9 = (volatile signed __int32 *)&unk_140E38540;
LABEL_29:
  result = *(_DWORD *)(v7 + 184) & 0xF;
  if ( result != 1 )
    v9 = (volatile signed __int32 *)(v7 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = PopHibernateInProgress;
    if ( !PopHibernateInProgress )
      return ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v9, retaddr);
  }
  _InterlockedAnd(v9, 0xBFFFFFFF);
  _InterlockedDecrement(v9);
  return result;
}
