/*
 * XREFs of MiAddPageToFlushMdl @ 0x14033A230
 * Callers:
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiClearPfnImageVerified @ 0x1402EAB40 (MiClearPfnImageVerified.c)
 *     MiCanPfnOriginalPteBeLost @ 0x1402EE318 (MiCanPfnOriginalPteBeLost.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiChargeForWriteInProgressPage @ 0x14033A660 (MiChargeForWriteInProgressPage.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 */

__int64 __fastcall MiAddPageToFlushMdl(__int64 a1, ULONG_PTR a2, __int64 a3, int a4, char a5)
{
  unsigned int v5; // r15d
  int v10; // r13d
  unsigned int v11; // ebp
  int i; // edx
  __int64 v13; // rdx
  int v14; // r14d
  int v15; // eax
  unsigned int v16; // r11d
  int v17; // r8d
  unsigned int v18; // edx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v23; // [rsp+70h] [rbp+28h]
  int v24; // [rsp+70h] [rbp+28h]

  v5 = 0;
  v10 = 0;
  v11 = 2;
  if ( !*(_DWORD *)(a1 + 40) )
  {
    v10 = 2;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a3 + 72), 0x1Fu) )
        v5 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(a3 + 72), 0xFFu);
      for ( i = *(_DWORD *)(a3 + 72); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(a3 + 72) )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr((volatile signed __int32 *)(a3 + 72), 0x40000000u);
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
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
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a3 + 72), retaddr);
    *(_QWORD *)a1 = 0LL;
    *(_WORD *)(a1 + 10) = 0;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 44) = a4;
  }
  v13 = (*(_DWORD *)(a2 + 16) >> 10) & 1 | 2u;
  if ( !v10 )
    v13 = (*(_DWORD *)(a2 + 16) >> 10) & 1;
  v14 = MiChargeForWriteInProgressPage(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)), v13);
  if ( v14 )
  {
    if ( (a5 & 1) == 0 )
    {
      MiUnlinkPageFromListEx(a2);
      *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
    }
    v15 = *(_DWORD *)(a2 + 32);
    LOWORD(v15) = v15 + 1;
    *(_DWORD *)(a2 + 32) = v15;
    v23 = *(_DWORD *)(a2 + 32);
    v16 = HIWORD(v23);
    if ( (v23 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(a2)
      && (((*(_QWORD *)(a2 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(a2 + 34) >> 4)) != 0 )
    {
      *(_QWORD *)(a2 + 16) &= ~4uLL;
    }
    BYTE2(v23) = v16 & 0xEF;
    *(_DWORD *)(a2 + 32) = v23;
    v24 = *(_DWORD *)(a2 + 32);
    BYTE2(v24) |= 8u;
    *(_DWORD *)(a2 + 32) = v24;
    if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(a2, 1, 0LL) & 0x10) != 0 )
      MiClearPfnImageVerified(a2, 28LL, v20, v21);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 40) + 48) = 0xAAAAAAAAAAAAAAABuLL
                                                            * ((__int64)(a2 + 0x220000000000LL) >> 4);
    v17 = *(_DWORD *)(a1 + 44);
    v18 = *(_DWORD *)(a1 + 40) + 1;
    *(_DWORD *)(a1 + 40) = v18;
    if ( v14 != 3 || v18 < 0x10 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
      return v18 == v17;
    return v11;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3LL;
  }
}
