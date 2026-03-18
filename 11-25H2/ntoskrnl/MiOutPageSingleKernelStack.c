/*
 * XREFs of MiOutPageSingleKernelStack @ 0x140228F50
 * Callers:
 *     KeEnumerateKernelStackSegments @ 0x140228B88 (KeEnumerateKernelStackSegments.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeTransitionPte @ 0x140339DF0 (MiMakeTransitionPte.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiGetWorkingSetSwapSupport @ 0x1403D82C4 (MiGetWorkingSetSwapSupport.c)
 *     MiOutSwapKernelStackPage @ 0x1403D9490 (MiOutSwapKernelStackPage.c)
 *     MiCreateKernelStackNode @ 0x1404F7278 (MiCreateKernelStackNode.c)
 */

__int64 __fastcall MiOutPageSingleKernelStack(__int64 a1, _QWORD *a2, __int64 a3)
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
  unsigned __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 *v19; // r14
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rdi
  __int64 v23; // rsi
  unsigned int v24; // ebp
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // edi
  __int64 v28; // rdx
  __int64 result; // rax
  __int64 v30; // [rsp+20h] [rbp-88h]
  unsigned __int64 v31; // [rsp+28h] [rbp-80h]
  unsigned __int64 v32; // [rsp+30h] [rbp-78h]
  __int64 v33; // [rsp+40h] [rbp-68h]
  unsigned __int64 v34; // [rsp+48h] [rbp-60h]
  __int64 DemandZeroPte; // [rsp+50h] [rbp-58h]
  unsigned __int64 v36; // [rsp+58h] [rbp-50h]
  char v38; // [rsp+B8h] [rbp+10h]
  unsigned int v40; // [rsp+C8h] [rbp+20h]

  v31 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v36 = v4;
  v30 = (__int64)(v4 << 25) >> 16;
  v5 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (_QWORD *)v4;
  v32 = v5;
  v40 = ((__int64)(v31 - v4) >> 3) + 1;
  DemandZeroPte = MiMakeDemandZeroPte(31LL);
  WorkingSetSwapSupport = 0LL;
  v11 = *(_QWORD *)(v10 + 544);
  v12 = *(unsigned __int16 *)(v11 + 1198);
  v13 = v11 + 1024;
  v14 = *((_QWORD *)qword_140E2FD48 + v12);
  if ( (ULONG *)v14 != &MiSystemPartition )
  {
    result = MiCreateKernelStackNode(*((_QWORD *)qword_140E2FD48 + v12), a2);
    if ( !result )
      return result;
    v7 = 0xFFFFF68000000000uLL;
    v8 = 0x7FFFFFFFF8LL;
  }
  v15 = v7 + (v8 & (v5 >> 9));
  v34 = (v8 & (v31 >> 9)) + v7;
  v33 = MiVaToFlushVm(v4);
  v38 = MiLockWorkingSetShared(v33);
  MiLockNestedPageTable(v33, v15);
  if ( v15 != v34 )
    MiLockNestedPageTable(v33, v15 + 8);
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
    MiLockAndDecrementShareCount(48 * v17 - 0x220000000000LL, 2);
    ++v6;
  }
  while ( (unsigned __int64)v6 <= v31 );
  v18 = v33;
  if ( WorkingSetSwapSupport )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 1184));
  v19 = (__int64 *)(v36 - 8);
  if ( v36 - 8 >= v32 )
  {
    do
    {
      if ( (*v19 & 1) == 0 )
        break;
      v20 = 0xFFFFFFFFFFLL;
      v21 = ((unsigned __int64)*v19 >> 12) & 0xFFFFFFFFFFLL;
      v22 = 48 * v21 - 0x220000000000LL;
      v23 = 48 * (*(_QWORD *)(v22 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v24 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v20) )
          {
            HvlNotifyLongSpinWait(v24);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v22 + 24) < 0 );
      }
      if ( (unsigned __int16)*(_DWORD *)(v22 + 32) == 1 )
      {
        *v19 = DemandZeroPte;
        *(_QWORD *)(v22 + 24) |= 0x4000000000000000uLL;
        MiSetPfnIdentity(v22, 0LL);
      }
      else
      {
        *v19 = MiMakeTransitionPte(v21, 31LL);
      }
      v25 = MiDecrementShareCountEx(v22, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v25 != 3 )
      {
        v27 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v27 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26) )
            {
              HvlNotifyLongSpinWait(v27);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v23 + 24) < 0 );
        }
        MiDecrementShareCountEx(v23, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      ++v40;
      --v19;
      v30 -= 4096LL;
    }
    while ( (unsigned __int64)v19 >= v32 );
    v18 = v33;
  }
  if ( v15 != v34 )
    MiUnlockPageTable(v18, v15 + 8);
  MiUnlockPageTable(v18, v15);
  LOBYTE(v28) = v38;
  MiUnlockWorkingSetShared(v18, v28);
  return MiInsertTbFlushEntry(a3, v30, v40, 0LL);
}
