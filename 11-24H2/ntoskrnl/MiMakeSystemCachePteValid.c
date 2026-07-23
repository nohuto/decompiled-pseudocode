/*
 * XREFs of MiMakeSystemCachePteValid @ 0x14021C440
 * Callers:
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiUnlockWorkingSetOptimal @ 0x14020A46C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x14020A640 (MiLockWorkingSetOptimal.c)
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14020C860 (MiReferenceControlAreaFileWithTag.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     PfSnLogPageFault @ 0x14034E5A0 (PfSnLogPageFault.c)
 */

__int64 __fastcall MiMakeSystemCachePteValid(__int64 a1, __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned __int64 ValidPte; // rbx
  __int64 v7; // rbp
  int v8; // r14d
  __int64 ContainingPageTable; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rbx
  unsigned int v19; // r15d
  unsigned __int64 v20; // rbx
  ULONG_PTR BugCheckParameter3; // rax
  __int64 result; // rax
  __int64 v23; // rsi
  __int64 v24; // rdi
  ULONG_PTR v25; // rbx
  unsigned __int64 v26; // rax
  char v28; // [rsp+98h] [rbp+10h] BYREF
  ULONG_PTR v29; // [rsp+A0h] [rbp+18h]
  int v30; // [rsp+A8h] [rbp+20h]

  v30 = a4;
  v28 = 0;
  v4 = (a3 >> 12) & 0xFFFFFFFFFFLL;
  ValidPte = a3;
  v7 = 48 * v4 - 0x220000000000LL;
  v8 = 0;
  v29 = MiLockWorkingSetOptimal(a1, (unsigned __int64)a2, (unsigned __int8 *)&v28, a4);
  ContainingPageTable = MiGetContainingPageTable(a2);
  v13 = 0xFFFFDE0000000000uLL;
  v14 = *a2;
  v15 = 48 * ContainingPageTable - 0x220000000000LL;
  if ( (*a2 & 1) != 0 )
  {
    v16 = 0LL;
    v17 = 0LL;
    MiLockAndDecrementShareCount(48 * v4 - 0x220000000000LL);
    v18 = a1;
  }
  else
  {
    v19 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v19 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10, v13, v11, v12) )
        {
          HvlNotifyLongSpinWait(v19);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v15 + 24) < 0 );
    }
    *(_QWORD *)(v15 + 24) = (*(_QWORD *)(v15 + 24) + 1LL) ^ (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) + 1LL)) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 = 0;
    if ( (v14 & 8) != 0 )
      ValidPte = MiMakeValidPte((unsigned __int64)a2, v4, 536870913);
    v20 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL;
    BugCheckParameter3 = v20 | ((unsigned __int64)(word_140E2EEC4 & 1) << 8);
    if ( (v30 & 8) != 0 && _bittest64((const signed __int64 *)(v7 + 40), 0x35u) )
      BugCheckParameter3 = v20 & 0xFFFFFFFFFFFFFFBDuLL | ((unsigned __int64)(word_140E2EEC4 & 1) << 8);
    v16 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
    v18 = a1;
    v17 = *(_QWORD *)(v7 + 16);
    MiAllocateWsle(a1, (int)a2, 48 * v4, 0, BugCheckParameter3, 0, 0LL);
    if ( PfSnNumActiveTraces && (v17 & 0x400) != 0 )
      v8 = 1;
  }
  result = MiUnlockWorkingSetOptimal(v18, v29, v28);
  if ( v8 )
  {
    if ( qword_140E2DCC0 )
    {
      if ( (v17 & 0x10) == 0 )
        v17 &= ~qword_140E2DCC0;
    }
    v23 = v17 >> 16;
    v24 = *(_QWORD *)v23;
    v25 = MiReferenceControlAreaFileWithTag(*(_QWORD *)v23, 0x63536D4Du, 0);
    v26 = MiStartingOffset((__int64 *)v23, v16, 0xFFFFFFFF);
    PfSnLogPageFault(v25, v26, 4LL);
    return ObFastDereferenceObjectDeferDelete((__int64 *)(v24 + 64), v25);
  }
  return result;
}
