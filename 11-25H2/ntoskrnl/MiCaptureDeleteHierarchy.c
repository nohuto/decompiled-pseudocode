/*
 * XREFs of MiCaptureDeleteHierarchy @ 0x1402B5FE0
 * Callers:
 *     MiRemoveVad @ 0x1402A7E14 (MiRemoveVad.c)
 *     MiDeleteEmptyPageTableCommit @ 0x14047A134 (MiDeleteEmptyPageTableCommit.c)
 * Callees:
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     MiFastLockLeafPageTable @ 0x1402AF390 (MiFastLockLeafPageTable.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402BBC90 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall MiCaptureDeleteHierarchy(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct _LIST_ENTRY **p_Blink; // r15
  __int64 CurrentThread; // rax
  unsigned int v7; // ebx
  int v8; // esi
  unsigned __int64 *v9; // r14
  ULONG_PTR v10; // rdi
  int SystemAddressValid; // r9d
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebp
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  volatile signed __int32 *v17; // rcx
  struct _KPRCB *v18; // rdx
  char v19; // al
  __int64 v20; // rcx
  volatile signed __int64 **v21; // rdi
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  volatile signed __int64 *v25; // rdx
  unsigned __int64 v26; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  char v28; // al
  __int64 v29; // rcx
  char v30; // r8
  __int64 v31; // r8
  __int64 v32; // r10
  __int64 v33; // r8
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r9
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned __int64 v39; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-60h]
  unsigned __int64 v41; // [rsp+40h] [rbp-58h]
  __int64 v42; // [rsp+48h] [rbp-50h]
  unsigned __int64 v43; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v44; // [rsp+58h] [rbp-40h]
  unsigned __int64 v45; // [rsp+60h] [rbp-38h]
  __int64 v46; // [rsp+68h] [rbp-30h]
  void *retaddr; // [rsp+98h] [rbp+0h]

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  *(_DWORD *)a4 = 0;
  v39 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v40 = ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v41 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v42 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v44 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LOBYTE(CurrentThread) = 0;
  v45 = ((v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 0;
  v46 = ((v45 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_2:
  if ( v7 < 2 )
  {
    CurrentThread = 32LL * v7;
    v8 = 3;
    v9 = (unsigned __int64 *)((char *)&v39 + CurrentThread);
    while ( 1 )
    {
      if ( v8 < 1 )
      {
LABEL_26:
        ++v7;
        goto LABEL_2;
      }
      v10 = v9[v8];
      if ( v8 == 3 )
      {
        v24 = MiFastLockLeafPageTable((__int64)p_Blink, (__int64)(*v9 << 25) >> 16, 8u);
        if ( v24 )
        {
          if ( v24 == 3 )
          {
            v8 = 2;
            SystemAddressValid = 0;
            v10 = v9[2];
            goto LABEL_7;
          }
          v25 = (volatile signed __int64 *)v9[v24];
          if ( v25 == (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v28 = (_DWORD)p_Blink[23] & 0xF;
            if ( !v28 )
            {
              v29 = 2LL;
LABEL_63:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v29]);
              goto LABEL_6;
            }
            if ( v28 != 7 )
            {
              v29 = 3LL;
              if ( v28 == 5 )
                v29 = 0LL;
              goto LABEL_63;
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
          }
          else if ( ((_DWORD)p_Blink[23] & 0xF) != 0
                 || (unsigned __int64)v25 < 0xFFFFF6FB7DBED000uLL
                 || (unsigned __int64)v25 > 0xFFFFF6FB7DBEDFFFuLL
                 || (v26 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
          {
            if ( ((_DWORD)p_Blink[23] & 0xF) != 0
              && (unsigned __int64)v25 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)v25 <= 0xFFFFF6FB7DBEDFFFuLL )
            {
              _InterlockedAnd(
                (volatile signed __int32 *)&MiState
              + ((unsigned __int64)(2 * (unsigned int)((__int64)(v25 + 0x12090482600LL) >> 3)) >> 5)
              + 2459,
                ~(3 << ((2 * ((__int64)(v25 + 0x12090482600LL) >> 3)) & 0x1F)));
            }
            else
            {
              _InterlockedAnd64(v25, 0xCFFFFFFFFFFFFFFFuLL);
            }
          }
          else
          {
            ExReleaseSpinLockRegardlessFromDpcLevel(v26 + 4LL * (((unsigned int)v25 >> 3) & 0x1FF));
          }
        }
      }
LABEL_6:
      SystemAddressValid = MiMakeSystemAddressValid(v10);
      if ( SystemAddressValid < 0 )
      {
        v12 = 0LL;
        goto LABEL_65;
      }
LABEL_7:
      v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      LOBYTE(CurrentThread) = 0;
      v13 = *(_QWORD *)v10;
      if ( v10 >= 0xFFFFF6FB7DBED000uLL )
      {
        LOBYTE(CurrentThread) = -8;
        if ( v10 <= 0xFFFFF6FB7DBED7F8uLL && (v13 & 1) != 0 )
        {
          LOBYTE(CurrentThread) = (v13 & 0x20) != 0;
          if ( (((v13 & 0x42) != 0) & (unsigned __int8)CurrentThread) == 0 && (MiFlags & 0x600000) != 0 )
          {
            CurrentThread = (__int64)KeGetCurrentThread();
            v31 = *(_QWORD *)(CurrentThread + 184);
            if ( *(_BYTE *)(v31 + 352) != 1 )
            {
              v32 = *(_QWORD *)(v31 + 1288);
              if ( v32 )
              {
                CurrentThread = *(_QWORD *)(v32 + 8 * ((v10 >> 3) & 0x1FF));
                if ( (CurrentThread & 0x20) != 0 )
                  v13 |= 0x20uLL;
                v33 = v13;
                v13 |= 0x42uLL;
                if ( (CurrentThread & 0x42) == 0 )
                  v13 = v33;
              }
            }
          }
        }
      }
      if ( v13 )
      {
        v14 = 0;
        if ( v7 )
          goto LABEL_16;
        goto LABEL_10;
      }
LABEL_65:
      LOBYTE(CurrentThread) = v7;
      v14 = 1;
      v30 = 1 << (v8 - 1);
      *(_BYTE *)(v7 + a4) = v30;
      if ( v7 )
        goto LABEL_16;
      if ( !v12 )
      {
        LOBYTE(CurrentThread) = v8;
        if ( ((*(&v43 + v8) ^ v10) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        {
          *(_BYTE *)(a4 + 1) = v30;
          return CurrentThread;
        }
      }
LABEL_10:
      if ( v8 == 1 )
      {
        LOBYTE(CurrentThread) = v10 ^ v44;
        if ( ((v10 ^ v44) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        {
          v9 = &v43;
          v7 = 1;
          if ( SystemAddressValid < 0 )
            goto LABEL_15;
          CurrentThread = *(_QWORD *)v44;
          if ( v44 >= 0xFFFFF6FB7DBED000uLL
            && v44 <= 0xFFFFF6FB7DBED7F8uLL
            && ((unsigned __int8)CurrentThread & (unsigned __int8)v8) != 0
            && ((CurrentThread & 0x42) == 0 || (CurrentThread & 0x20) == 0)
            && (MiFlags & 0x600000) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process->AddressPolicy != (_BYTE)v8 )
            {
              KernelWaitTime = Process[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v36 = *(_QWORD *)(KernelWaitTime + 8 * ((v44 >> 3) & 0x1FF));
                if ( (v36 & 0x20) != 0 )
                  CurrentThread |= 0x20uLL;
                v37 = CurrentThread;
                CurrentThread |= 0x42uLL;
                if ( (v36 & 0x42) == 0 )
                  CurrentThread = v37;
              }
            }
          }
          if ( !CurrentThread )
LABEL_15:
            *(_BYTE *)(a4 + 1) = v8;
        }
      }
LABEL_16:
      if ( !v12 )
        goto LABEL_24;
      if ( v12 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v18 = KeGetCurrentPrcb();
        v19 = (_DWORD)p_Blink[23] & 0xF;
        if ( v19 )
        {
          if ( v19 == 7 )
          {
            v20 = 1LL;
          }
          else
          {
            v20 = 3LL;
            if ( v19 == 5 )
              v20 = 0LL;
          }
        }
        else
        {
          v20 = 2LL;
        }
        v21 = (volatile signed __int64 **)&v18->SelfmapLockHandle[v20];
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _m_prefetchw(v21);
          CurrentThread = (__int64)*v21;
          if ( !*v21 )
          {
            CurrentThread = _InterlockedCompareExchange64(v21[1], 0LL, (signed __int64)v21);
            if ( v21 == (volatile signed __int64 **)CurrentThread )
              goto LABEL_24;
            CurrentThread = KxWaitForLockChainValid((__int64 *)v21);
          }
          v22 = CurrentThread + 8;
          *v21 = 0LL;
          v23 = (__int64)v21[1];
          LOBYTE(CurrentThread) = v23 ^ _InterlockedExchange64((volatile __int64 *)(CurrentThread + 8), v23);
          if ( (CurrentThread & 4) != 0 )
            LOBYTE(CurrentThread) = KeWakeAddressAll(v22, v23);
        }
        else
        {
          LOBYTE(CurrentThread) = KiReleaseQueuedSpinLockInstrumented(v21, retaddr);
        }
      }
      else if ( ((_DWORD)p_Blink[23] & 0xF) != 0
             || v12 < 0xFFFFF6FB7DBED000uLL
             || v12 > 0xFFFFF6FB7DBEDFFFuLL
             || (v15 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
      {
        if ( ((_DWORD)p_Blink[23] & 0xF) != 0 && v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          CurrentThread = (unsigned __int64)(2 * (unsigned int)((__int64)(v12 + 0x90482413000LL) >> 3)) >> 5;
          _InterlockedAnd(
            (volatile signed __int32 *)&MiState + CurrentThread + 2459,
            ~(2 << ((2 * ((__int64)(v12 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                    * ((__int64)(v12 + 0x90482413000LL) >> 3)) & 0x1F)));
        }
        else
        {
          LOBYTE(CurrentThread) = -1;
          _InterlockedAnd64((volatile signed __int64 *)v12, 0xCFFFFFFFFFFFFFFFuLL);
        }
      }
      else
      {
        v16 = (v12 >> 3) & 0x1FF;
        LODWORD(CurrentThread) = *(_DWORD *)(v15 + 4 * v16);
        v17 = (volatile signed __int32 *)(v15 + 4 * v16);
        if ( (CurrentThread & 0x3FFFFFFF) != 0 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
            || (LOBYTE(CurrentThread) = PopHibernateInProgress, PopHibernateInProgress) )
          {
            _InterlockedAnd(v17, 0xBFFFFFFF);
            _InterlockedDecrement(v17);
          }
          else
          {
            LOBYTE(CurrentThread) = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v17, retaddr);
          }
        }
        else
        {
          if ( (int)CurrentThread >= 0 )
            KeBugCheckEx(0x10u, (ULONG_PTR)v17, 0x100uLL, 0LL, 0LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
            || (LOBYTE(CurrentThread) = PopHibernateInProgress, PopHibernateInProgress) )
          {
            *v17 = 0;
          }
          else
          {
            LOBYTE(CurrentThread) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v17, retaddr);
          }
        }
      }
LABEL_24:
      if ( v14 )
        goto LABEL_26;
      --v8;
    }
  }
  return CurrentThread;
}
