/*
 * XREFs of MiOutPageSingleKernelStack @ 0x140215F40
 * Callers:
 *     KeEnumerateKernelStackSegments @ 0x14021F4D8 (KeEnumerateKernelStackSegments.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiMakeTransitionPte @ 0x140347DF0 (MiMakeTransitionPte.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiOutSwapKernelStackPage @ 0x1403C6E14 (MiOutSwapKernelStackPage.c)
 *     MiGetWorkingSetSwapSupport @ 0x1403C84EC (MiGetWorkingSetSwapSupport.c)
 *     MiCreateKernelStackNode @ 0x1404F7358 (MiCreateKernelStackNode.c)
 */

void __fastcall MiOutPageSingleKernelStack(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v4; // r12
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
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r12
  __int64 *v22; // r14
  __int64 v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rdi
  __int64 v26; // rsi
  unsigned int v27; // ebp
  int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // edi
  __int64 v31; // rdx
  unsigned __int64 v32; // [rsp+20h] [rbp-88h]
  unsigned __int64 v33; // [rsp+28h] [rbp-80h]
  unsigned __int64 v34; // [rsp+30h] [rbp-78h]
  __int64 v35; // [rsp+40h] [rbp-68h]
  unsigned __int64 v36; // [rsp+48h] [rbp-60h]
  __int64 DemandZeroPte; // [rsp+50h] [rbp-58h]
  unsigned __int64 v38; // [rsp+58h] [rbp-50h]
  char v40; // [rsp+B8h] [rbp+10h]
  unsigned int v42; // [rsp+C8h] [rbp+20h]

  v33 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v38 = v4;
  v32 = (__int64)(v4 << 25) >> 16;
  v5 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (_QWORD *)v4;
  v34 = v5;
  v42 = ((__int64)(v33 - v4) >> 3) + 1;
  DemandZeroPte = MiMakeDemandZeroPte(31LL, a1, v32, 0xFFFFF68000000000uLL);
  WorkingSetSwapSupport = 0LL;
  v11 = *(_QWORD *)(v10 + 544);
  v12 = *(unsigned __int16 *)(v11 + 1198);
  v13 = v11 + 1024;
  v14 = *((_QWORD *)qword_140E300C8 + v12);
  if ( (ULONG *)v14 != &MiSystemPartition )
  {
    if ( !MiCreateKernelStackNode(*((_QWORD *)qword_140E300C8 + v12), a2) )
      return;
    v7 = 0xFFFFF68000000000uLL;
    v8 = 0x7FFFFFFFF8LL;
  }
  v15 = v7 + (v8 & (v5 >> 9));
  v36 = (v8 & (v33 >> 9)) + v7;
  v35 = MiVaToFlushVm(v4);
  v40 = MiLockWorkingSetShared(v35);
  MiLockNestedPageTable(v35, v15);
  if ( v15 != v36 )
    MiLockNestedPageTable(v35, v15 + 8);
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
      MiOutSwapKernelStackPage(WorkingSetSwapSupport, v14, v6);
    *v6 = MiMakeTransitionPte(v17, 31LL);
    MiLockAndDecrementShareCount(48 * v17 - 0x220000000000LL);
    ++v6;
  }
  while ( (unsigned __int64)v6 <= v33 );
  v21 = v35;
  if ( WorkingSetSwapSupport )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 1184));
  v22 = (__int64 *)(v38 - 8);
  if ( v38 - 8 >= v34 )
  {
    do
    {
      if ( (*v22 & 1) == 0 )
        break;
      v23 = 0xFFFFFFFFFFLL;
      v24 = ((unsigned __int64)*v22 >> 12) & 0xFFFFFFFFFFLL;
      v25 = 48 * v24 - 0x220000000000LL;
      v26 = 48 * (*(_QWORD *)(v25 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v27 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v27 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v23, v18, v19, v20) )
          {
            HvlNotifyLongSpinWait(v27);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v25 + 24) < 0 );
      }
      if ( (unsigned __int16)*(_DWORD *)(v25 + 32) == 1 )
      {
        *v22 = DemandZeroPte;
        *(_QWORD *)(v25 + 24) |= 0x4000000000000000uLL;
        MiSetPfnIdentity(v25, 0LL);
      }
      else
      {
        *v22 = MiMakeTransitionPte(v24, 31LL);
      }
      v28 = MiDecrementShareCountEx(v25, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v28 != 3 )
      {
        v30 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v30 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v29, v18, v19, v20) )
            {
              HvlNotifyLongSpinWait(v30);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v26 + 24) < 0 );
        }
        MiDecrementShareCountEx(v26, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      ++v42;
      --v22;
      v32 -= 4096LL;
    }
    while ( (unsigned __int64)v22 >= v34 );
    v21 = v35;
  }
  if ( v15 != v36 )
    MiUnlockPageTableInternal(v21, v15 + 8);
  MiUnlockPageTableInternal(v21, v15);
  LOBYTE(v31) = v40;
  MiUnlockWorkingSetShared(v21, v31);
  MiInsertTbFlushEntry(a3, v32, v42, 0);
}
