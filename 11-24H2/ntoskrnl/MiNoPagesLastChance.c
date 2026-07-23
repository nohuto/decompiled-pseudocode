/*
 * XREFs of MiNoPagesLastChance @ 0x140685ADC
 * Callers:
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 * Callees:
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     MiPfnReferenceCountIsZero @ 0x140300260 (MiPfnReferenceCountIsZero.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     ObFastReferenceObjectLocked @ 0x1403517CC (ObFastReferenceObjectLocked.c)
 *     MiSufficientAvailablePages @ 0x1403526D0 (MiSufficientAvailablePages.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall MiNoPagesLastChance(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  const void *v4; // r13
  unsigned int v6; // r9d
  int v7; // ecx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r11
  unsigned int v11; // eax
  int v12; // edx
  __int64 v13; // r9
  __int64 v14; // r10
  _DWORD *v15; // r8
  int v16; // r12d
  unsigned __int64 v17; // r14
  ULONG v18; // ebp
  __int64 v19; // rdi
  volatile LONG *v20; // rbx
  KIRQL v21; // al
  __int64 v22; // rdi
  int v23; // edx
  __int64 v24; // rdi
  volatile LONG *v25; // r14
  __int64 v26; // r12
  unsigned __int8 CurrentIrql; // bl
  __int64 v28; // r15
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r13
  int v32; // eax
  struct _WORK_QUEUE_ITEM *v33; // rbx
  int v34; // edx
  int v35; // [rsp+40h] [rbp-68h]
  unsigned int BugCheckParameter3; // [rsp+44h] [rbp-64h]
  ULONG_PTR BugCheckParameter3_4; // [rsp+48h] [rbp-60h]
  unsigned __int64 v38; // [rsp+50h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-50h]
  ULONG_PTR v40; // [rsp+68h] [rbp-40h]
  int v42; // [rsp+C8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 728);
  v3 = *(_DWORD *)(a1 + 724);
  v4 = *(const void **)(a1 + 19616);
  v6 = (unsigned int)v2 >> 31;
  v7 = v3;
  v8 = a2;
  BugCheckParameter2 = (ULONG_PTR)v4;
  if ( v2 >= 0 )
    v2 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( v3 >= 0 )
    v7 = v2;
  v11 = *(_DWORD *)(a1 + 18520);
  v12 = v6 | 2;
  v35 = v7;
  if ( v3 >= 0 )
    v12 = v6;
  if ( !v11 )
    goto LABEL_13;
  v13 = a1 + 18528;
  v14 = v11;
  do
  {
    v15 = *(_DWORD **)v13;
    if ( (*(_WORD *)(*(_QWORD *)v13 + 172LL) & 0x50) == 0 )
    {
      v9 += (unsigned int)(v15[1] - *v15);
      v10 += (unsigned int)v15[3];
    }
    v13 += 8LL;
    --v14;
  }
  while ( v14 );
  if ( v10 < 0x400 )
LABEL_13:
    v12 |= 4u;
  v16 = v12 | 8;
  v17 = *(_QWORD *)(a1 + 19392);
  if ( v9 >= 0x400 )
    v16 = v12;
  BugCheckParameter3 = v16;
  if ( dword_140E30184 )
  {
    v18 = 243;
  }
  else if ( *(_QWORD *)(a1 + 19520) < v17 >> 2 )
  {
    v18 = *(_QWORD *)(a1 + 19616) < v17 >> 2 ? 235 : 77;
  }
  else
  {
    v4 = *(const void **)(a1 + 19520);
    v18 = 253;
    BugCheckParameter2 = (ULONG_PTR)v4;
  }
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 120LL) + 672LL);
  if ( !v19
    || (v20 = (volatile LONG *)(v19 + 1688),
        v21 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v19 + 1688)),
        v22 = *(_QWORD *)(v19 + 1736),
        ExReleaseSpinLockShared(v20, v21),
        KiQueryUnbiasedInterruptTime() - v22 >= (unsigned __int64)-MiNoPagesTimeout) )
  {
    if ( KdPitchDebugger || (_BYTE)KdDebuggerNotPresent )
    {
      v42 = 0;
    }
    else
    {
      DbgPrintEx(
        0x66u,
        0,
        "Without a debugger attached, the following bugcheck would have occurred.\n%4lx %p %p %x %x\n",
        v18,
        (const void *)v17,
        v4,
        v16,
        v35);
      if ( (MiFlags & 8) != 0 )
        __debugbreak();
      v42 = 1;
    }
    if ( !(unsigned int)MiSufficientAvailablePages(a1, v8)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16156), 1, 0) )
    {
      v24 = 16LL;
      v38 = 0LL;
      v25 = (volatile LONG *)(a1 + 5664);
      BugCheckParameter3_4 = 16LL;
      v26 = 0LL;
      do
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v23) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v23);
        }
        ExAcquireSpinLockExclusiveAtDpcLevel(v25);
        v28 = *((_QWORD *)v25 - 2);
        if ( v28 != 0x3FFFFFFFFFLL )
        {
          do
          {
            v40 = v28;
            v29 = 48 * v28 - 0x220000000000LL;
            v28 = *(_QWORD *)v29 & 0xFFFFFFFFFFLL;
            v30 = *(_QWORD *)(v29 + 16);
            if ( qword_140E2DCC0 && (v30 & 0x10) == 0 )
              v30 &= ~qword_140E2DCC0;
            v31 = *(_QWORD *)(v30 >> 16);
            if ( (*(_DWORD *)(v31 + 56) & 0x28) == 0
              && (!v26 || v26 == v31)
              && !_interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
            {
              ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v31 + 72));
              v32 = *(_DWORD *)(v31 + 56);
              if ( (v32 & 8) != 0 )
              {
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v31 + 72));
                _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              else
              {
                if ( !v26 )
                {
                  v26 = v31;
                  if ( (v32 & 0x800) == 0 )
                  {
                    *(_DWORD *)(v31 + 56) = v32 | 0x800;
                    v38 = ObFastReferenceObjectLocked((_QWORD *)(v31 + 64), 0x644C6D4Du);
                  }
                }
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v31 + 72));
                MiUnlinkPageFromListEx(v29, 1);
                ExReleaseSpinLockExclusiveFromDpcLevel(v25);
                *(_QWORD *)(v29 + 24) &= 0xC000000000000000uLL;
                MiSetPfnModified(v29, 0);
                MiPfnReferenceCountIsZero(v29, v40);
                MiUnlockPage(v29, CurrentIrql);
                ++dword_140E2D834;
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                {
                  LOBYTE(v34) = 2;
                  KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v34);
                }
                ExAcquireSpinLockExclusiveAtDpcLevel(v25);
                v28 = *((_QWORD *)v25 - 2);
              }
            }
          }
          while ( v28 != 0x3FFFFFFFFFLL );
          v24 = BugCheckParameter3_4;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v25);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v25 += 22;
        BugCheckParameter3_4 = --v24;
      }
      while ( v24 );
      v33 = (struct _WORK_QUEUE_ITEM *)(a1 + 16112);
      if ( v26 )
      {
        if ( v38 )
        {
          *(_QWORD *)(a1 + 16144) = v38;
          *(_DWORD *)(a1 + 16152) = -1073741566;
          *(_QWORD *)(a1 + 16128) = MiLdwPopupWorker;
          *(_QWORD *)(a1 + 16136) = a1 + 16112;
          v33->List.Flink = 0LL;
          ExQueueWorkItem(v33, DelayedWorkQueue);
          ++dword_140E2D830;
        }
        else
        {
          _InterlockedAnd((volatile signed __int32 *)(a1 + 16156), 0);
        }
      }
      else
      {
        _InterlockedAnd((volatile signed __int32 *)(a1 + 16156), 0);
        if ( !v42 )
          KeBugCheckEx(v18, *(_QWORD *)(a1 + 19392), BugCheckParameter2, BugCheckParameter3, v35);
      }
    }
  }
}
