/*
 * XREFs of MiMakeSystemCachePteValid @ 0x14046F7A8
 * Callers:
 *     MmCopyToCachedPage @ 0x1402EDA94 (MmCopyToCachedPage.c)
 * Callees:
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140240FA0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiUnlockWorkingSetOptimal @ 0x14024231C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402424F0 (MiLockWorkingSetOptimal.c)
 *     MiStartingOffset @ 0x140244020 (MiStartingOffset.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402440D0 (MiReferenceControlAreaFileWithTag.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     PfSnLogPageFault @ 0x1402ECF60 (PfSnLogPageFault.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 */

__int64 __fastcall MiMakeSystemCachePteValid(__int64 a1, __int64 *a2, unsigned __int64 a3, int a4)
{
  __int64 v4; // r13
  unsigned __int64 ValidPte; // rbx
  __int64 v7; // rbp
  int v8; // r14d
  __int64 ContainingPageTable; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rbx
  unsigned int v15; // r15d
  unsigned __int64 v16; // rbx
  ULONG_PTR v17; // rax
  __int64 result; // rax
  __int64 v19; // rsi
  __int64 v20; // rdi
  ULONG_PTR v21; // rbx
  unsigned __int64 v22; // rax
  char v24; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v25; // [rsp+A0h] [rbp+18h]
  int v26; // [rsp+A8h] [rbp+20h]

  v26 = a4;
  v24 = 0;
  v4 = (a3 >> 12) & 0xFFFFFFFFFFLL;
  ValidPte = a3;
  v7 = 48 * v4 - 0x220000000000LL;
  v8 = 0;
  v25 = MiLockWorkingSetOptimal(a1, (unsigned __int64)a2, (unsigned __int8 *)&v24);
  ContainingPageTable = MiGetContainingPageTable((unsigned __int64)a2);
  v10 = *a2;
  v11 = 48 * ContainingPageTable - 0x220000000000LL;
  if ( (*a2 & 1) != 0 )
  {
    v12 = 0LL;
    v13 = 0LL;
    MiLockAndDecrementShareCount(48 * v4 - 0x220000000000LL, 2);
    v14 = a1;
  }
  else
  {
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
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
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
    *(_QWORD *)(v11 + 24) = (*(_QWORD *)(v11 + 24) + 1LL) ^ (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + 1LL)) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 = 0;
    if ( (v10 & 8) != 0 )
      ValidPte = MiMakeValidPte((unsigned __int64)a2, v4, 536870913);
    v16 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL;
    v17 = v16 | ((unsigned __int64)(word_140E2ED84 & 1) << 8);
    if ( (v26 & 8) != 0 && _bittest64((const signed __int64 *)(v7 + 40), 0x35u) )
      v17 = v16 & 0xFFFFFFFFFFFFFFBDuLL | ((unsigned __int64)(word_140E2ED84 & 1) << 8);
    v12 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
    v14 = a1;
    v13 = *(_QWORD *)(v7 + 16);
    MiAllocateWsle(a1, (ULONG_PTR)a2, 48 * v4 - 0x220000000000LL, 0, v17, 0, 0LL);
    if ( PfSnNumActiveTraces && (v13 & 0x400) != 0 )
      v8 = 1;
  }
  result = MiUnlockWorkingSetOptimal(v14, v25, v24);
  if ( v8 )
  {
    if ( qword_140E2DB80 )
    {
      if ( (v13 & 0x10) == 0 )
        v13 &= ~qword_140E2DB80;
    }
    v19 = v13 >> 16;
    v20 = *(_QWORD *)v19;
    v21 = MiReferenceControlAreaFileWithTag(*(_QWORD *)v19, 0x63536D4Du, 0);
    v22 = MiStartingOffset((__int64 *)v19, v12, 0xFFFFFFFF);
    PfSnLogPageFault(v21, v22, 4);
    return ObFastDereferenceObjectDeferDelete((__int64 *)(v20 + 64), v21);
  }
  return result;
}
