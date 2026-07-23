/*
 * XREFs of MiLockPageListAndLastPage @ 0x140219C30
 * Callers:
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall MiLockPageListAndLastPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int v7; // r12d
  __int64 v8; // r14
  __int64 v9; // rbp
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx

  v4 = a1 + 40;
  v5 = a2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0x3FuLL) )
  {
    v7 = 0;
LABEL_21:
    if ( *(_BYTE *)(v5 + 24) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v5 + 16) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v5 + 24) = 0;
    }
    if ( *(_BYTE *)(v5 + 48) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v5 + 40) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v5 + 48) = 0;
    }
    if ( *(_BYTE *)(v5 + 72) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v5 + 64) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v5 + 72) = 0;
    }
    if ( *(_BYTE *)(v5 + 96) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v5 + 88) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v5 + 96) = 0;
    }
    *(_BYTE *)v5 = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 32), 0x1Fu) )
      {
        LOBYTE(a2) = -1;
        v7 = ExpWaitForSpinLockExclusiveAndAcquire(a1 + 32, a2);
      }
      v13 = *(unsigned int *)(a1 + 32);
      v14 = v13 & 0xFFFFFFFFBFFFFFFFuLL;
      if ( (v13 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v13 & 0x40000000) == 0 )
            _InterlockedOr((volatile signed __int32 *)(a1 + 32), 0x40000000u);
          if ( (++v7 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14, v13, a3, a4) )
          {
            HvlNotifyLongSpinWait(v7);
          }
          else
          {
            _mm_pause();
          }
          v13 = *(unsigned int *)(a1 + 32);
        }
        while ( (*(_DWORD *)(a1 + 32) & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    else
    {
      LOBYTE(a2) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 32, a2);
    }
  }
  else
  {
    v7 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(a1 + 24);
        if ( v8 != 0x3FFFFFFFFFLL )
          break;
        v9 = 0LL;
        ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
        if ( *(_QWORD *)(a1 + 24) == 0x3FFFFFFFFFLL )
          goto LABEL_19;
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
      }
      v9 = 48 * v8 - 0x220000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_21;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw((const void *)(a1 + 32));
        v10 = *(_DWORD *)(a1 + 32) & 0x7FFFFFFF;
        while ( 1 )
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v10 + 1, v10);
          if ( v11 == v10 )
            break;
          if ( v10 < 0 )
          {
            LOBYTE(a2) = -1;
            ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)(a1 + 32), a2, a3, a4);
            break;
          }
        }
      }
      else
      {
        LOBYTE(a2) = -1;
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 32, a2);
      }
      if ( v8 == *(_QWORD *)(a1 + 24) )
        break;
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( 48 * v8 != 0x220000000000LL )
    {
      v12 = 48 * v8 - 0x220000000000LL;
      goto LABEL_14;
    }
LABEL_19:
    v8 = 0x3FFFFFFFFFLL;
    v12 = v4;
LABEL_14:
    *(_QWORD *)(v5 + 16) = v12;
    *(_QWORD *)(v5 + 8) = v8;
    *(_BYTE *)(v5 + 24) = 1;
    *(_QWORD *)(v5 + 40) = v4;
    *(_QWORD *)(v5 + 32) = 0x3FFFFFFFFFLL;
    if ( v9 )
      *(_BYTE *)(v5 + 48) = 1;
    *(_BYTE *)v5 = 1;
  }
}
