/*
 * XREFs of MiLockPageListAndFirstPage @ 0x1403A1A7C
 * Callers:
 *     MiGetRepurposedSlabStandbyPage @ 0x1403A18E8 (MiGetRepurposedSlabStandbyPage.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiLockPageListAndFirstPage(__int64 a1, __int64 a2)
{
  char v4; // di
  __int64 v5; // r14
  __int64 v6; // rsi
  unsigned int v7; // ebp
  _BYTE *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8

  v4 = 0;
  while ( 1 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( v5 == 0x3FFFFFFFFFLL )
      return -1LL;
    v6 = 48 * v5 - 0x220000000000LL;
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v7);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
    if ( v5 == *(_QWORD *)(a1 + 16) )
    {
      v8 = (_BYTE *)(a2 + 24);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0x3FuLL) )
      {
LABEL_9:
        *(_BYTE *)a2 = 1;
        v12 = 4LL;
        do
        {
          if ( *v8 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)v8 - 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
            *v8 = 0;
          }
          v8 += 24;
          --v12;
        }
        while ( v12 );
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
        *(_BYTE *)a2 = 0;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
      }
      else
      {
        v9 = *(_QWORD *)v6;
        *(_QWORD *)(a2 + 16) = a1 + 40;
        v10 = v9 & 0xFFFFFFFFFFLL;
        *(_QWORD *)(a2 + 8) = 0x3FFFFFFFFFLL;
        *v8 = 1;
        if ( v10 != 0x3FFFFFFFFFLL )
        {
          v11 = 48 * v10 - 0x220000000000LL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
            goto LABEL_9;
          *(_QWORD *)(a2 + 40) = v11;
          v4 = 1;
          *(_QWORD *)(a2 + 32) = v10;
        }
        *(_BYTE *)(a2 + 48) = v4;
        *(_BYTE *)a2 = 1;
      }
      return v5;
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
}
