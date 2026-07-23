/*
 * XREFs of MiGetPerfectColorHeadPage @ 0x14033D740
 * Callers:
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiGetPerfectFreeOrZeroPage @ 0x14033D370 (MiGetPerfectFreeOrZeroPage.c)
 *     MiRemovePageAnyColor @ 0x14033E6B4 (MiRemovePageAnyColor.c)
 * Callees:
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiIsFreeZeroPfnCold @ 0x140250EDC (MiIsFreeZeroPfnCold.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetColorHeadBase @ 0x140417F30 (MiGetColorHeadBase.c)
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1404627C0 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiReplenishPageSlist @ 0x1404F1A70 (MiReplenishPageSlist.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetPerfectColorHeadPage(__int64 *a1)
{
  unsigned int *v1; // rax
  unsigned int v2; // edi
  __int64 v3; // r10
  unsigned int v4; // ebx
  __int64 v5; // r13
  ULONG_PTR v6; // r14
  unsigned int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v11; // edi
  signed __int32 v13; // edx
  signed __int32 v14; // eax
  signed __int32 v15; // ecx
  __int16 v16; // bx
  int v17; // ecx
  unsigned int v18; // r8d
  unsigned __int64 *v19; // r11
  unsigned __int64 v20; // r9
  __int64 v21; // rcx
  unsigned int v22; // [rsp+20h] [rbp-E8h]
  __int64 v23; // [rsp+28h] [rbp-E0h]
  __int128 v25; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v26[8]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 retaddr; // [rsp+108h] [rbp+0h]

  v1 = (unsigned int *)a1[2];
  v2 = *((_DWORD *)a1 + 7);
  v3 = *a1;
  v4 = *((_DWORD *)a1 + 8);
  v25 = 0LL;
  memset(v26, 0, sizeof(v26));
  v23 = v3;
  v22 = *v1;
  v5 = MiGetColorHeadBase(v3, v2, *v1, (v2 >> 18) & 3) + 88LL * (unsigned __int8)v2;
  v6 = *(_QWORD *)(v5 + 16);
  if ( v6 == 0x3FFFFFFFFFLL )
    return 0LL;
  v7 = v4 >> 4;
  while ( 1 )
  {
    v8 = 0x40000000000000LL;
    v9 = 48 * v6 - 0x220000000000LL;
    if ( (v4 & 2) != 0 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        return 0LL;
      CurrentIrql = 17;
    }
    else
    {
      if ( (v4 & 1) != 0 )
      {
        CurrentIrql = 17;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v8) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v8);
        }
        if ( v6 > qword_140E2DD20 || (*(_QWORD *)(v9 + 40) & 0x40000000000000LL) == 0 )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          v7 = v4 >> 4;
          goto LABEL_57;
        }
      }
      if ( (v4 & 0x440) != 0 )
      {
        v11 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v11 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v11);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v9 + 24) < 0 );
        }
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        if ( CurrentIrql == 17 )
          return 0LL;
        goto LABEL_24;
      }
    }
    if ( (*(_BYTE *)(v9 + 34) & 7) == v22
      && *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) == *(_QWORD *)(v23 + 14984) )
    {
      break;
    }
LABEL_49:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v4 & 2) != 0 || CurrentIrql >= 2u )
      goto LABEL_58;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
LABEL_57:
    __writecr8(CurrentIrql);
LABEL_58:
    v6 = *(_QWORD *)(v5 + 16);
    if ( v6 == 0x3FFFFFFFFFLL )
      return 0LL;
  }
  if ( (((unsigned __int8)v4 | (unsigned __int8)v7) & 0x40) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 32));
    goto LABEL_44;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v13 = 0x80000000;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 32), 0x80000000, 0);
    if ( v14 )
    {
      do
      {
        if ( v14 )
        {
          if ( v14 != 0x40000000 )
            goto LABEL_35;
          v13 |= 0x40000000u;
        }
        else
        {
          v13 &= ~0x40000000u;
        }
        v15 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 32), v13, v14);
      }
      while ( v14 != v15 );
    }
    goto LABEL_44;
  }
  if ( (unsigned int)ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5 + 32) )
  {
LABEL_44:
    if ( v6 == *(_QWORD *)(v5 + 16) )
    {
      v16 = v4 | 0x100;
      if ( !(unsigned int)MiUnlinkFreeOrZeroedPage(v6, v5, v16) )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *(_DWORD *)(v5 + 32) = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v5 + 32), retaddr);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v16 & 2) == 0 && CurrentIrql < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        return 2LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v16 & 2) == 0 )
      {
        v17 = *((_DWORD *)a1 + 7);
        if ( (v17 & 0x30000) == 0x30000 && (v17 & 0xC0000) == 0x40000 && *(_QWORD *)(v5 + 16) != 0x3FFFFFFFFFLL )
        {
          LODWORD(v25) = 129;
          if ( (HvlEnlightenments & 0x200000) == 0 || !(unsigned int)MiIsFreeZeroPfnCold(48 * v6 - 0x220000000000LL) )
            goto LABEL_88;
          if ( DWORD1(v25) )
          {
            v18 = DWORD1(v25);
            v19 = (unsigned __int64 *)v26 + (unsigned int)(DWORD1(v25) - 1);
            if ( v19 )
            {
              v20 = *v19;
              if ( (*v19 & 0xC00) == 0 && (*v19 & 0x3FF) != 0x3FF )
              {
                v21 = (*v19 & 0x3FF) + 1;
                if ( v6 == v21 + (v20 >> 12) )
                {
                  *v19 = v21 ^ (v20 ^ v21) & 0xFFFFFFFFFFFFFC00uLL;
                  goto LABEL_88;
                }
                if ( v6 == (v20 >> 12) - 1 )
                {
                  *v19 = (v6 << 12) | v21 & 0x3FF;
                  goto LABEL_88;
                }
              }
            }
          }
          else
          {
            v18 = 0;
          }
          *((_QWORD *)v26 + v18) = v6 << 12;
          if ( ++DWORD1(v25) == (unsigned int)v25 >> 3 )
            MiIssuePageHeatList(&v25);
LABEL_88:
          MiReplenishPageSlist(v23, v22, *((unsigned int *)a1 + 7), &v25);
          if ( DWORD1(v25) )
            MiIssuePageHeatList(&v25);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(v5 + 32) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v5 + 32), retaddr);
      if ( CurrentIrql != 17 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      return 48 * v6 - 0x220000000000LL;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)(v5 + 32) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v5 + 32), retaddr);
    goto LABEL_49;
  }
LABEL_35:
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 || CurrentIrql >= 2u )
    return 0LL;
LABEL_24:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return 0LL;
}
