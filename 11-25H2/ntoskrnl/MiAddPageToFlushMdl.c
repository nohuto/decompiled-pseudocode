/*
 * XREFs of MiAddPageToFlushMdl @ 0x14022FA30
 * Callers:
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiChargeForWriteInProgressPage @ 0x14022E660 (MiChargeForWriteInProgressPage.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MiClearPfnImageVerified @ 0x1402CC5F0 (MiClearPfnImageVerified.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140388D44 (MiCanPfnOriginalPteBeLost.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiAddPageToFlushMdl(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // r14d
  int v6; // r12d
  unsigned int v10; // ebp
  int v11; // r13d
  unsigned int v12; // edx
  __int64 v13; // rcx
  int v14; // eax
  char v15; // dl
  int v16; // r14d
  int v17; // eax
  unsigned int v18; // r11d
  int v19; // r8d
  unsigned int v20; // edx
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v23; // [rsp+70h] [rbp+28h]
  int v24; // [rsp+70h] [rbp+28h]

  v5 = 0;
  v6 = a4;
  v10 = 2;
  v11 = 0;
  if ( !*(_DWORD *)(a1 + 40) )
  {
    v11 = 2;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a3 + 72), 0x1Fu) )
        v5 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(a3 + 72), 0xFFu);
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
    *(_DWORD *)(a1 + 44) = v6;
  }
  v14 = (*(_DWORD *)(a2 + 16) >> 10) & 1;
  v15 = v14 | 2;
  if ( !v11 )
    v15 = v14;
  v16 = MiChargeForWriteInProgressPage(
          *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)),
          v15,
          a3,
          a4);
  if ( v16 )
  {
    if ( (a5 & 1) == 0 )
    {
      MiUnlinkPageFromListEx(a2, 0);
      *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
    }
    v17 = *(_DWORD *)(a2 + 32);
    LOWORD(v17) = v17 + 1;
    *(_DWORD *)(a2 + 32) = v17;
    v23 = *(_DWORD *)(a2 + 32);
    v18 = HIWORD(v23);
    if ( (v23 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(a2)
      && (((*(_QWORD *)(a2 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(a2 + 34) >> 4)) != 0 )
    {
      *(_QWORD *)(a2 + 16) &= ~4uLL;
    }
    BYTE2(v23) = v18 & 0xEF;
    *(_DWORD *)(a2 + 32) = v23;
    v24 = *(_DWORD *)(a2 + 32);
    BYTE2(v24) |= 8u;
    *(_DWORD *)(a2 + 32) = v24;
    if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(a2) & 0x10) != 0 )
      MiClearPfnImageVerified(a2, 28LL);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 40) + 48) = 0xAAAAAAAAAAAAAAABuLL
                                                            * ((__int64)(a2 + 0x220000000000LL) >> 4);
    v19 = *(_DWORD *)(a1 + 44);
    v20 = *(_DWORD *)(a1 + 40) + 1;
    *(_DWORD *)(a1 + 40) = v20;
    if ( v16 != 3 || v20 < 0x10 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
      return v20 == v19;
    return v10;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3LL;
  }
}
