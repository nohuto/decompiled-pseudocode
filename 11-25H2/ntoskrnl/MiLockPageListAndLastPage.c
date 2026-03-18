/*
 * XREFs of MiLockPageListAndLastPage @ 0x1402FCA40
 * Callers:
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall MiLockPageListAndLastPage(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned int v5; // r12d
  __int64 v6; // r14
  __int64 v7; // rbp
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  __int64 v10; // rdx
  unsigned int v11; // edx
  __int64 v12; // rcx

  v2 = a1 + 40;
  v3 = a2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0x3FuLL) )
  {
    v5 = 0;
LABEL_18:
    if ( *(_BYTE *)(v3 + 24) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v3 + 16) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v3 + 24) = 0;
    }
    if ( *(_BYTE *)(v3 + 48) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v3 + 40) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v3 + 48) = 0;
    }
    if ( *(_BYTE *)(v3 + 72) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v3 + 64) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v3 + 72) = 0;
    }
    if ( *(_BYTE *)(v3 + 96) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v3 + 88) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v3 + 96) = 0;
    }
    *(_BYTE *)v3 = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 32), 0x1Fu) )
        v5 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(a1 + 32), 0xFFu);
      v11 = *(_DWORD *)(a1 + 32);
      v12 = v11;
      for ( LODWORD(v12) = v11 & 0xBFFFFFFF; (v11 & 0xBFFFFFFF) != 0x80000000; v11 = *(_DWORD *)(a1 + 32) )
      {
        if ( (v11 & 0x40000000) == 0 )
          _InterlockedOr((volatile signed __int32 *)(a1 + 32), 0x40000000u);
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12) )
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
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(a1 + 32), 0xFFu);
    }
  }
  else
  {
    v5 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(a1 + 24);
        if ( v6 != 0x3FFFFFFFFFLL )
          break;
        v7 = 0LL;
        ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
        if ( *(_QWORD *)(a1 + 24) == 0x3FFFFFFFFFLL )
          goto LABEL_16;
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
      }
      v7 = 48 * v6 - 0x220000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_18;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw((const void *)(a1 + 32));
        v8 = *(_DWORD *)(a1 + 32) & 0x7FFFFFFF;
        while ( 1 )
        {
          v9 = v8;
          v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v8 + 1, v8);
          if ( v9 == v8 )
            break;
          if ( v8 < 0 )
          {
            LOBYTE(a2) = -1;
            ExpWaitForSpinLockSharedAndAcquire(a1 + 32, a2);
            break;
          }
        }
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented((_DWORD *)(a1 + 32), 0xFFu);
      }
      if ( v6 == *(_QWORD *)(a1 + 24) )
        break;
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( 48 * v6 != 0x220000000000LL )
    {
      v10 = 48 * v6 - 0x220000000000LL;
      goto LABEL_11;
    }
LABEL_16:
    v6 = 0x3FFFFFFFFFLL;
    v10 = v2;
LABEL_11:
    *(_QWORD *)(v3 + 16) = v10;
    *(_QWORD *)(v3 + 8) = v6;
    *(_BYTE *)(v3 + 24) = 1;
    *(_QWORD *)(v3 + 40) = v2;
    *(_QWORD *)(v3 + 32) = 0x3FFFFFFFFFLL;
    if ( v7 )
      *(_BYTE *)(v3 + 48) = 1;
    *(_BYTE *)v3 = 1;
  }
}
