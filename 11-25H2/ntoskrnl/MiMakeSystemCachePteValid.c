/*
 * XREFs of MiMakeSystemCachePteValid @ 0x140225760
 * Callers:
 *     MmCopyToCachedPage @ 0x140223414 (MmCopyToCachedPage.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiAllocateWsle @ 0x14024B590 (MiAllocateWsle.c)
 *     MiUnlockWorkingSetOptimal @ 0x1402C04C8 (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402C0690 (MiLockWorkingSetOptimal.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402C2260 (ObFastDereferenceObjectDeferDelete.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     PfSnLogPageFault @ 0x1403041E0 (PfSnLogPageFault.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140323330 (MiReferenceControlAreaFileWithTag.c)
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiMakeSystemCachePteValid(__int64 a1, __int64 *a2, unsigned __int64 a3, int a4)
{
  __int64 v4; // r13
  unsigned __int64 ValidPte; // rbx
  __int64 v7; // rbp
  int v8; // r14d
  __int64 ContainingPageTable; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rbx
  unsigned int v17; // r15d
  unsigned __int64 v18; // rbx
  ULONG_PTR v19; // rax
  __int64 result; // rax
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  char v26; // [rsp+98h] [rbp+10h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+18h]
  int v28; // [rsp+A8h] [rbp+20h]

  v28 = a4;
  v26 = 0;
  v4 = (a3 >> 12) & 0xFFFFFFFFFFLL;
  ValidPte = a3;
  v7 = 48 * v4 - 0x220000000000LL;
  v8 = 0;
  v27 = MiLockWorkingSetOptimal(a1, a2, &v26);
  ContainingPageTable = MiGetContainingPageTable(a2);
  v11 = *a2;
  v12 = 48 * ContainingPageTable - 0x220000000000LL;
  if ( (*a2 & 1) != 0 )
  {
    v13 = 0LL;
    v14 = 0LL;
    MiLockAndDecrementShareCount(48 * v4 - 0x220000000000LL);
    v16 = a1;
  }
  else
  {
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
        {
          HvlNotifyLongSpinWait(v17);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    *(_QWORD *)(v12 + 24) = (*(_QWORD *)(v12 + 24) + 1LL) ^ (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) + 1LL)) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 = 0;
    if ( (v11 & 8) != 0 )
      ValidPte = MiMakeValidPte((unsigned __int64)a2, v4, 536870913);
    v18 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL;
    v19 = v18 | ((unsigned __int64)(word_140E2EB44 & 1) << 8);
    if ( (v28 & 8) != 0 && _bittest64((const signed __int64 *)(v7 + 40), 0x35u) )
      v19 = v18 & 0xFFFFFFFFFFFFFFBDuLL | ((unsigned __int64)(word_140E2EB44 & 1) << 8);
    v13 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
    v16 = a1;
    v14 = *(_QWORD *)(v7 + 16);
    MiAllocateWsle(a1, (_DWORD)a2, 48 * v4, 0, v19, 0, 0LL);
    if ( PfSnNumActiveTraces && (v14 & 0x400) != 0 )
      v8 = 1;
  }
  LOBYTE(v15) = v26;
  result = MiUnlockWorkingSetOptimal(v16, v27, v15);
  if ( v8 )
  {
    if ( qword_140E2D940 )
    {
      if ( (v14 & 0x10) == 0 )
        v14 &= ~qword_140E2D940;
    }
    v21 = v14 >> 16;
    v22 = *(_QWORD *)v21;
    v23 = MiReferenceControlAreaFileWithTag(*(_QWORD *)v21, 1666411853LL, 0LL);
    v24 = MiStartingOffset(v21, v13, 0xFFFFFFFFLL);
    PfSnLogPageFault(v23, v24, 4LL);
    return ObFastDereferenceObjectDeferDelete(v22 + 64, v23, 1666411853LL);
  }
  return result;
}
