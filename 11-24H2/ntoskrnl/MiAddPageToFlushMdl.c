/*
 * XREFs of MiAddPageToFlushMdl @ 0x140210ED0
 * Callers:
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiChargeForWriteInProgressPage @ 0x140211300 (MiChargeForWriteInProgressPage.c)
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiClearPfnImageVerified @ 0x14036C0C0 (MiClearPfnImageVerified.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiCanPfnOriginalPteBeLost @ 0x14039E1D0 (MiCanPfnOriginalPteBeLost.c)
 */

__int64 __fastcall MiAddPageToFlushMdl(__int64 a1, ULONG_PTR a2, __int64 a3, int a4, char a5)
{
  unsigned int v5; // r15d
  int v10; // r13d
  unsigned int v11; // ebp
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // r14d
  int v16; // eax
  unsigned int v17; // r11d
  int v18; // r8d
  unsigned int v19; // edx
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v22; // [rsp+70h] [rbp+28h]
  int v23; // [rsp+70h] [rbp+28h]

  v5 = 0;
  v10 = 0;
  v11 = 2;
  if ( !*(_DWORD *)(a1 + 40) )
  {
    v10 = 2;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a3 + 72), 0x1Fu) )
        v5 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(a3 + 72), 0xFFu, a3);
      v12 = *(_DWORD *)(a3 + 72);
      v13 = v12;
      for ( LODWORD(v13) = v12 & 0xBFFFFFFF; (v12 & 0xBFFFFFFF) != 0x80000000; v12 = *(_DWORD *)(a3 + 72) )
      {
        if ( (v12 & 0x40000000) == 0 )
          _InterlockedOr((volatile signed __int32 *)(a3 + 72), 0x40000000u);
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13) )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(a3 + 72), 0xFFu);
    }
    ++*(_DWORD *)(a3 + 76);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)(a3 + 72) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a3 + 72, retaddr);
    *(_QWORD *)a1 = 0LL;
    *(_WORD *)(a1 + 10) = 0;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 44) = a4;
  }
  v14 = (*(_DWORD *)(a2 + 16) >> 10) & 1 | 2u;
  if ( !v10 )
    v14 = (*(_DWORD *)(a2 + 16) >> 10) & 1;
  v15 = MiChargeForWriteInProgressPage(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)), v14);
  if ( v15 )
  {
    if ( (a5 & 1) == 0 )
    {
      MiUnlinkPageFromListEx(a2);
      *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
    }
    v16 = *(_DWORD *)(a2 + 32);
    LOWORD(v16) = v16 + 1;
    *(_DWORD *)(a2 + 32) = v16;
    v22 = *(_DWORD *)(a2 + 32);
    v17 = HIWORD(v22);
    if ( (v22 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(a2)
      && (((*(_QWORD *)(a2 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(a2 + 34) >> 4)) != 0 )
    {
      *(_QWORD *)(a2 + 16) &= ~4uLL;
    }
    BYTE2(v22) = v17 & 0xEF;
    *(_DWORD *)(a2 + 32) = v22;
    v23 = *(_DWORD *)(a2 + 32);
    BYTE2(v23) |= 8u;
    *(_DWORD *)(a2 + 32) = v23;
    if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(a2) & 0x10) != 0 )
      MiClearPfnImageVerified(a2, 28LL);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 40) + 48) = 0xAAAAAAAAAAAAAAABuLL
                                                            * ((__int64)(a2 + 0x220000000000LL) >> 4);
    v18 = *(_DWORD *)(a1 + 44);
    v19 = *(_DWORD *)(a1 + 40) + 1;
    *(_DWORD *)(a1 + 40) = v19;
    if ( v15 != 3 || v19 < 0x10 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
      return v19 == v18;
    return v11;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3LL;
  }
}
