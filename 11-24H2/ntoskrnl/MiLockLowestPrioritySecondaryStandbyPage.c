/*
 * XREFs of MiLockLowestPrioritySecondaryStandbyPage @ 0x1403F8350
 * Callers:
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiRepurposeStandbySlabPage @ 0x1403F80A4 (MiRepurposeStandbySlabPage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockLowestPrioritySecondaryStandbyPage(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int8 *a4)
{
  unsigned __int8 *v4; // r15
  unsigned __int64 *v5; // rax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v7; // rdi
  __int64 v8; // r12
  bool v9; // zf
  __int64 *v10; // r14
  volatile LONG *v11; // rsi
  __int64 v12; // rcx
  __int64 v14; // rbp
  unsigned int v15; // r13d
  unsigned __int64 v16; // [rsp+60h] [rbp+8h]

  *a3 = 0LL;
  v4 = a4;
  v5 = a3;
  if ( a4 )
  {
    *a4 = 17;
    CurrentIrql = 0;
  }
  else
  {
    CurrentIrql = 17;
  }
  v7 = a1 + 3264;
  v8 = 0LL;
  v16 = a1 + 3968;
  v9 = a1 + 3264 == a1 + 3968;
  if ( a1 + 3264 < (unsigned __int64)(a1 + 3968) )
  {
    v10 = (__int64 *)(a2 + 16);
    v11 = (volatile LONG *)(a1 + 3296);
    v12 = 2LL;
    while ( 1 )
    {
      if ( *v10 != 0x3FFFFFFFFFLL )
      {
        if ( CurrentIrql != 17 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(a2) = 2;
            LOBYTE(v12) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(v12, a2);
          }
        }
        ExAcquireSpinLockExclusiveAtDpcLevel(v11);
        v8 = *v10;
        if ( *v10 == 0x3FFFFFFFFFLL )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(v11);
          if ( CurrentIrql != 17 )
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(a2) = CurrentIrql;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
            }
            __writecr8(CurrentIrql);
          }
        }
        else
        {
          v14 = 48 * v8 - 0x220000000000LL;
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
            goto LABEL_7;
          ExReleaseSpinLockExclusiveFromDpcLevel(v11);
          v15 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v15 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v15);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v14 + 24) < 0 );
          }
          v12 = 2LL;
          if ( (*(_BYTE *)(v14 + 34) & 7) != 2 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( CurrentIrql != 17 )
            {
              if ( KiIrqlFlags )
              {
                LOBYTE(a2) = CurrentIrql;
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
                v12 = 2LL;
              }
              __writecr8(CurrentIrql);
            }
            v7 -= 88LL;
            v11 -= 22;
            v10 -= 11;
            goto LABEL_6;
          }
          ExAcquireSpinLockExclusiveAtDpcLevel(v11);
          if ( v8 == *v10 )
          {
LABEL_7:
            v4 = a4;
            v9 = v7 == v16;
            v5 = a3;
            break;
          }
          ExReleaseSpinLockExclusiveFromDpcLevel(v11);
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( CurrentIrql != 17 )
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(a2) = CurrentIrql;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
            }
            __writecr8(CurrentIrql);
          }
          v7 -= 88LL;
          v11 -= 22;
          v10 -= 11;
        }
        v12 = 2LL;
      }
LABEL_6:
      v7 += 88LL;
      v11 += 22;
      v10 += 11;
      if ( v7 >= v16 )
        goto LABEL_7;
    }
  }
  if ( v9 )
    return -1LL;
  *v5 = v7;
  if ( v4 )
    *v4 = CurrentIrql;
  return v8;
}
