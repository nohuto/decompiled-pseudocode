/*
 * XREFs of MiLockPageListAndLastPage @ 0x1402C46F0
 * Callers:
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __fastcall MiLockPageListAndLastPage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned int v6; // r12d
  __int64 v7; // r14
  __int64 v8; // rbp
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // rdx
  int i; // edx

  v3 = a1 + 40;
  v4 = a2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0x3FuLL) )
  {
    v6 = 0;
LABEL_21:
    if ( *(_BYTE *)(v4 + 24) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v4 + 16) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v4 + 24) = 0;
    }
    if ( *(_BYTE *)(v4 + 48) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v4 + 40) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v4 + 48) = 0;
    }
    if ( *(_BYTE *)(v4 + 72) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v4 + 64) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v4 + 72) = 0;
    }
    if ( *(_BYTE *)(v4 + 96) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v4 + 88) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v4 + 96) = 0;
    }
    *(_BYTE *)v4 = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 32), 0x1Fu) )
        v6 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(a1 + 32), 0xFFu, a3);
      for ( i = *(_DWORD *)(a1 + 32); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(a1 + 32) )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr((volatile signed __int32 *)(a1 + 32), 0x40000000u);
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(a1 + 32), 0xFFu);
    }
  }
  else
  {
    v6 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(a1 + 24);
        if ( v7 != 0x3FFFFFFFFFLL )
          break;
        v8 = 0LL;
        ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
        if ( *(_QWORD *)(a1 + 24) == 0x3FFFFFFFFFLL )
          goto LABEL_19;
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
      }
      v8 = 48 * v7 - 0x220000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_21;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw((const void *)(a1 + 32));
        v9 = *(_DWORD *)(a1 + 32) & 0x7FFFFFFF;
        while ( 1 )
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v9 + 1, v9);
          if ( v10 == v9 )
            break;
          if ( v9 < 0 )
          {
            LOBYTE(a2) = -1;
            ExpWaitForSpinLockSharedAndAcquire(a1 + 32, a2);
            break;
          }
        }
      }
      else
      {
        LOBYTE(a2) = -1;
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 32, a2);
      }
      if ( v7 == *(_QWORD *)(a1 + 24) )
        break;
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( 48 * v7 != 0x220000000000LL )
    {
      v11 = 48 * v7 - 0x220000000000LL;
      goto LABEL_14;
    }
LABEL_19:
    v7 = 0x3FFFFFFFFFLL;
    v11 = v3;
LABEL_14:
    *(_QWORD *)(v4 + 16) = v11;
    *(_QWORD *)(v4 + 8) = v7;
    *(_BYTE *)(v4 + 24) = 1;
    *(_QWORD *)(v4 + 40) = v3;
    *(_QWORD *)(v4 + 32) = 0x3FFFFFFFFFLL;
    if ( v8 )
      *(_BYTE *)(v4 + 48) = 1;
    *(_BYTE *)v4 = 1;
  }
}
