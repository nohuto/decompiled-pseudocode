/*
 * XREFs of MiGetPerfectColorHeadPage @ 0x14022C2A0
 * Callers:
 *     MiRemovePageAnyColor @ 0x14022B30C (MiRemovePageAnyColor.c)
 *     MiGetPerfectFreeOrZeroPage @ 0x14022BEE0 (MiGetPerfectFreeOrZeroPage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 * Callees:
 *     MiIsFreeZeroPfnCold @ 0x1402C80AC (MiIsFreeZeroPfnCold.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140344B60 (MiUnlinkFreeOrZeroedPage.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14034E284 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiGetColorHeadBase @ 0x1404342E0 (MiGetColorHeadBase.c)
 *     MiIssuePageHeatList @ 0x14044059C (MiIssuePageHeatList.c)
 *     MiReplenishPageSlist @ 0x1404EF270 (MiReplenishPageSlist.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v11; // edi
  __int64 v13; // rdx
  signed __int32 v14; // edx
  signed __int32 v15; // eax
  signed __int32 v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ecx
  unsigned int v21; // r8d
  unsigned __int64 *v22; // r11
  unsigned __int64 v23; // r9
  __int64 v24; // rcx
  unsigned int v25; // [rsp+20h] [rbp-E8h]
  __int64 v26; // [rsp+28h] [rbp-E0h]
  __int128 v28; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v29[8]; // [rsp+50h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+108h] [rbp+0h]

  v1 = (unsigned int *)a1[2];
  v2 = *((_DWORD *)a1 + 7);
  v3 = *a1;
  v4 = *((_DWORD *)a1 + 8);
  v28 = 0LL;
  memset(v29, 0, sizeof(v29));
  v26 = v3;
  v25 = *v1;
  v5 = MiGetColorHeadBase(v3, v2, *v1, (v2 >> 18) & 3) + 88LL * (unsigned __int8)v2;
  v6 = *(_QWORD *)(v5 + 16);
  if ( v6 == 0x3FFFFFFFFFLL )
    return 0LL;
  v7 = v4 >> 4;
  while ( 1 )
  {
    v8 = 2LL;
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
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
        if ( v6 > qword_140E2D9A0 || (*(_QWORD *)(v9 + 40) & 0x40000000000000LL) == 0 )
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
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8) )
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
    if ( (*(_BYTE *)(v9 + 34) & 7) == v25 )
    {
      v13 = *(_QWORD *)(v26 + 14984);
      if ( *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) == v13 )
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
      if ( !(unsigned int)MiUnlinkFreeOrZeroedPage(v6) )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *(_DWORD *)(v5 + 32) = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5 + 32, retaddr);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v4 & 2) == 0 && CurrentIrql < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        return 2LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v4 & 2) == 0 )
      {
        v20 = *((_DWORD *)a1 + 7);
        if ( (v20 & 0x30000) == 0x30000 && (v20 & 0xC0000) == 0x40000 && *(_QWORD *)(v5 + 16) != 0x3FFFFFFFFFLL )
        {
          LODWORD(v28) = 129;
          if ( (HvlEnlightenments & 0x200000) == 0
            || !(unsigned int)MiIsFreeZeroPfnCold(48 * v6 - 0x220000000000LL, v17, v18, v19) )
          {
            goto LABEL_88;
          }
          if ( DWORD1(v28) )
          {
            v21 = DWORD1(v28);
            v22 = (unsigned __int64 *)v29 + (unsigned int)(DWORD1(v28) - 1);
            if ( v22 )
            {
              v23 = *v22;
              if ( (*v22 & 0xC00) == 0 && (*v22 & 0x3FF) != 0x3FF )
              {
                v24 = (*v22 & 0x3FF) + 1;
                if ( v6 == v24 + (v23 >> 12) )
                {
                  *v22 = v24 ^ (v23 ^ v24) & 0xFFFFFFFFFFFFFC00uLL;
                  goto LABEL_88;
                }
                if ( v6 == (v23 >> 12) - 1 )
                {
                  *v22 = (v6 << 12) | v24 & 0x3FF;
                  goto LABEL_88;
                }
              }
            }
          }
          else
          {
            v21 = 0;
          }
          *((_QWORD *)v29 + v21) = v6 << 12;
          if ( ++DWORD1(v28) == (unsigned int)v28 >> 3 )
            MiIssuePageHeatList(&v28);
LABEL_88:
          MiReplenishPageSlist(v26, v25, *((unsigned int *)a1 + 7), &v28);
          if ( DWORD1(v28) )
            MiIssuePageHeatList(&v28);
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
