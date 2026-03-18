/*
 * XREFs of MiOutPageSingleKernelStack @ 0x14039F510
 * Callers:
 *     KeEnumerateKernelStackSegments @ 0x140269F48 (KeEnumerateKernelStackSegments.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiVaToFlushVm @ 0x1402293EC (MiVaToFlushVm.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x1402E67B0 (MiMakeTransitionPte.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiOutSwapKernelStackPage @ 0x14039E778 (MiOutSwapKernelStackPage.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     MiSetPfnIdentity @ 0x1403A00D0 (MiSetPfnIdentity.c)
 *     MiGetWorkingSetSwapSupport @ 0x140405F90 (MiGetWorkingSetSwapSupport.c)
 *     MiCreateKernelStackNode @ 0x1404F9A78 (MiCreateKernelStackNode.c)
 */

void __fastcall MiOutPageSingleKernelStack(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // r12
  unsigned __int64 v5; // r13
  _QWORD *v6; // r14
  unsigned __int64 v7; // r9
  __int64 v8; // r10
  __int64 WorkingSetSwapSupport; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rbp
  ULONG_PTR v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 *v19; // r14
  __int64 v20; // r15
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rsi
  unsigned int v23; // ebp
  int v24; // eax
  unsigned int v25; // edi
  unsigned __int64 v26; // [rsp+20h] [rbp-88h]
  unsigned __int64 v27; // [rsp+28h] [rbp-80h]
  unsigned __int64 v28; // [rsp+30h] [rbp-78h]
  void *v29; // [rsp+40h] [rbp-68h]
  unsigned __int64 v30; // [rsp+48h] [rbp-60h]
  __int64 DemandZeroPte; // [rsp+50h] [rbp-58h]
  __int64 v32; // [rsp+58h] [rbp-50h]
  unsigned __int8 v34; // [rsp+B8h] [rbp+10h]
  unsigned int v36; // [rsp+C8h] [rbp+20h]

  v27 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v32 = v4;
  v26 = v4 << 25 >> 16;
  v5 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (_QWORD *)v4;
  v28 = v5;
  v36 = ((__int64)(v27 - v4) >> 3) + 1;
  DemandZeroPte = MiMakeDemandZeroPte(31);
  WorkingSetSwapSupport = 0LL;
  v11 = *(_QWORD *)(v10 + 544);
  v12 = *(unsigned __int16 *)(v11 + 1198);
  v13 = v11 + 1024;
  v14 = *((_QWORD *)qword_140E2FF88 + v12);
  if ( (ULONG *)v14 != &MiSystemPartition )
  {
    if ( !MiCreateKernelStackNode(*((_QWORD *)qword_140E2FF88 + v12), a2) )
      return;
    v7 = 0xFFFFF68000000000uLL;
    v8 = 0x7FFFFFFFF8LL;
  }
  v15 = v7 + (v8 & (v5 >> 9));
  v30 = (v8 & (v27 >> 9)) + v7;
  v29 = MiVaToFlushVm(v4);
  v34 = MiLockWorkingSetShared((__int64)v29);
  MiLockNestedPageTable((__int64)v29, v15);
  if ( v15 != v30 )
    MiLockNestedPageTable((__int64)v29, v15 + 8);
  *(_QWORD *)(a2[2] - 8LL) = a1;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v13) > 2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v14 + 1184));
    if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v13) <= 2 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 1184));
    else
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v16);
  }
  do
  {
    v17 = (*v6 >> 12) & 0xFFFFFFFFFFLL;
    if ( WorkingSetSwapSupport )
      MiOutSwapKernelStackPage(WorkingSetSwapSupport, v14, (__int64)v6);
    *v6 = MiMakeTransitionPte(v17, 31);
    MiLockAndDecrementShareCount(48 * v17 - 0x220000000000LL, 2);
    ++v6;
  }
  while ( (unsigned __int64)v6 <= v27 );
  v18 = (__int64)v29;
  if ( WorkingSetSwapSupport )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 1184));
  v19 = (__int64 *)(v32 - 8);
  if ( v32 - 8 >= v28 )
  {
    do
    {
      if ( (*v19 & 1) == 0 )
        break;
      v20 = ((unsigned __int64)*v19 >> 12) & 0xFFFFFFFFFFLL;
      v21 = 48 * v20 - 0x220000000000LL;
      v22 = 48 * (*(_QWORD *)(v21 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v23 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v23 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v23);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v21 + 24) < 0 );
      }
      if ( (unsigned __int16)*(_DWORD *)(v21 + 32) == 1 )
      {
        *v19 = DemandZeroPte;
        *(_QWORD *)(v21 + 24) |= 0x4000000000000000uLL;
        MiSetPfnIdentity(v21, 0LL);
      }
      else
      {
        *v19 = MiMakeTransitionPte(v20, 31);
      }
      v24 = MiDecrementShareCountEx(v21, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v24 != 3 )
      {
        v25 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v25 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v25);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v22 + 24) < 0 );
        }
        MiDecrementShareCountEx(v22, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      ++v36;
      --v19;
      v26 -= 4096LL;
    }
    while ( (unsigned __int64)v19 >= v28 );
    v18 = (__int64)v29;
  }
  if ( v15 != v30 )
    MiUnlockPageTableInternal(v18, v15 + 8);
  MiUnlockPageTableInternal(v18, v15);
  MiUnlockWorkingSetShared(v18, v34);
  MiInsertTbFlushEntry(a3, v26, v36, 0);
}
