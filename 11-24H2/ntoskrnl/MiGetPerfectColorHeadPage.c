/*
 * XREFs of MiGetPerfectColorHeadPage @ 0x1402F59B0
 * Callers:
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiGetPerfectFreeOrZeroPage @ 0x1402F55E0 (MiGetPerfectFreeOrZeroPage.c)
 *     MiRemovePageAnyColor @ 0x1402F65A4 (MiRemovePageAnyColor.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402213E0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiIsFreeZeroPfnCold @ 0x14022418C (MiIsFreeZeroPfnCold.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140315720 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiGetColorHeadBase @ 0x140424080 (MiGetColorHeadBase.c)
 *     MiIssuePageHeatList @ 0x14043F9FC (MiIssuePageHeatList.c)
 *     MiReplenishPageSlist @ 0x1404F40C0 (MiReplenishPageSlist.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
  __int64 v13; // rdx
  signed __int32 v14; // edx
  signed __int32 v15; // eax
  signed __int32 v16; // ecx
  unsigned int v17; // ebx
  int v18; // ecx
  unsigned int v19; // r8d
  unsigned __int64 *v20; // r11
  unsigned __int64 v21; // r9
  __int64 v22; // rcx
  unsigned int v23; // [rsp+20h] [rbp-E8h]
  __int64 v24; // [rsp+28h] [rbp-E0h]
  __int128 v26; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v27[8]; // [rsp+50h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+108h] [rbp+0h]

  v1 = (unsigned int *)a1[2];
  v2 = *((_DWORD *)a1 + 7);
  v3 = *a1;
  v4 = *((_DWORD *)a1 + 8);
  v26 = 0LL;
  memset(v27, 0, sizeof(v27));
  v24 = v3;
  v23 = *v1;
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
        if ( v6 > qword_140E2DBE0 || (*(_QWORD *)(v9 + 40) & 0x40000000000000LL) == 0 )
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
    if ( (*(_BYTE *)(v9 + 34) & 7) == v23 )
    {
      v13 = *(_QWORD *)(v24 + 14984);
      if ( *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) == v13 )
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
    v14 = 0x80000000;
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 32), 0x80000000, 0);
    if ( v15 )
    {
      do
      {
        if ( v15 )
        {
          if ( v15 != 0x40000000 )
            goto LABEL_35;
          v14 |= 0x40000000u;
        }
        else
        {
          v14 &= ~0x40000000u;
        }
        v16 = v15;
        v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 32), v14, v15);
      }
      while ( v15 != v16 );
    }
    goto LABEL_44;
  }
  if ( (unsigned int)ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(
                       v5 + 32,
                       v13,
                       0x7FFFFFFFFFFFFFFFLL,
                       0x80000000LL) )
  {
LABEL_44:
    if ( v6 == *(_QWORD *)(v5 + 16) )
    {
      v17 = v4 | 0x100;
      if ( !(unsigned int)MiUnlinkFreeOrZeroedPage(v6, v5, v17) )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *(_DWORD *)(v5 + 32) = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5 + 32, retaddr);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v17 & 2) == 0 && CurrentIrql < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        return 2LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v17 & 2) == 0 )
      {
        v18 = *((_DWORD *)a1 + 7);
        if ( (v18 & 0x30000) == 0x30000 && (v18 & 0xC0000) == 0x40000 && *(_QWORD *)(v5 + 16) != 0x3FFFFFFFFFLL )
        {
          LODWORD(v26) = 129;
          if ( (HvlEnlightenments & 0x200000) == 0 || !(unsigned int)MiIsFreeZeroPfnCold(48 * v6 - 0x220000000000LL) )
            goto LABEL_88;
          if ( DWORD1(v26) )
          {
            v19 = DWORD1(v26);
            v20 = (unsigned __int64 *)v27 + (unsigned int)(DWORD1(v26) - 1);
            if ( v20 )
            {
              v21 = *v20;
              if ( (*v20 & 0xC00) == 0 && (*v20 & 0x3FF) != 0x3FF )
              {
                v22 = (*v20 & 0x3FF) + 1;
                if ( v6 == v22 + (v21 >> 12) )
                {
                  *v20 = v22 ^ (v21 ^ v22) & 0xFFFFFFFFFFFFFC00uLL;
                  goto LABEL_88;
                }
                if ( v6 == (v21 >> 12) - 1 )
                {
                  *v20 = (v6 << 12) | v22 & 0x3FF;
                  goto LABEL_88;
                }
              }
            }
          }
          else
          {
            v19 = 0;
          }
          *((_QWORD *)v27 + v19) = v6 << 12;
          if ( ++DWORD1(v26) == (unsigned int)v26 >> 3 )
            MiIssuePageHeatList(&v26);
LABEL_88:
          MiReplenishPageSlist(v24, v23, *((unsigned int *)a1 + 7), &v26);
          if ( DWORD1(v26) )
            MiIssuePageHeatList(&v26);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(v5 + 32) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5 + 32, retaddr);
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
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5 + 32, retaddr);
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
