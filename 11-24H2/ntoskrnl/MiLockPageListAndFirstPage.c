/*
 * XREFs of MiLockPageListAndFirstPage @ 0x1402185DC
 * Callers:
 *     MiGetRepurposedSlabStandbyPage @ 0x140218448 (MiGetRepurposedSlabStandbyPage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall MiLockPageListAndFirstPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // di
  __int64 v7; // r14
  __int64 v8; // rsi
  unsigned int v9; // ebp
  _BYTE *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8

  v6 = 0;
  while ( 1 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( v7 == 0x3FFFFFFFFFLL )
      return -1LL;
    v8 = 48 * v7 - 0x220000000000LL;
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
    if ( v7 == *(_QWORD *)(a1 + 16) )
    {
      v10 = (_BYTE *)(a2 + 24);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0x3FuLL) )
      {
LABEL_9:
        *(_BYTE *)a2 = 1;
        v14 = 4LL;
        do
        {
          if ( *v10 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)v10 - 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
            *v10 = 0;
          }
          v10 += 24;
          --v14;
        }
        while ( v14 );
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
        *(_BYTE *)a2 = 0;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
      }
      else
      {
        v11 = *(_QWORD *)v8;
        *(_QWORD *)(a2 + 16) = a1 + 40;
        v12 = v11 & 0xFFFFFFFFFFLL;
        *(_QWORD *)(a2 + 8) = 0x3FFFFFFFFFLL;
        *v10 = 1;
        if ( v12 != 0x3FFFFFFFFFLL )
        {
          v13 = 48 * v12 - 0x220000000000LL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
            goto LABEL_9;
          *(_QWORD *)(a2 + 40) = v13;
          v6 = 1;
          *(_QWORD *)(a2 + 32) = v12;
        }
        *(_BYTE *)(a2 + 48) = v6;
        *(_BYTE *)a2 = 1;
      }
      return v7;
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
}
