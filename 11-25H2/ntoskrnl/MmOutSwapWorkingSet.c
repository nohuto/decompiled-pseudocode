/*
 * XREFs of MmOutSwapWorkingSet @ 0x1403D8E1C
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140AC7CBC (PspChangeProcessExecutionState.c)
 * Callees:
 *     MiVadSupportsPrivateCommit @ 0x140239D80 (MiVadSupportsPrivateCommit.c)
 *     MiGetNextVad @ 0x1402A96D8 (MiGetNextVad.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140320330 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     SmStoreExistsForProcess @ 0x140324354 (SmStoreExistsForProcess.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140384DF0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiGetWorkingSetSwapSupport @ 0x1403D82C4 (MiGetWorkingSetSwapSupport.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403D887C (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403D88FC (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiFindBestOutswapPagefile @ 0x1403D896C (MiFindBestOutswapPagefile.c)
 *     MiVadMapsLargeImage @ 0x1403D9300 (MiVadMapsLargeImage.c)
 *     MiOutSwapWorkingSet @ 0x1403D958C (MiOutSwapWorkingSet.c)
 *     MiGetKernelStackSwapSupport @ 0x1403D9714 (MiGetKernelStackSwapSupport.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1403D986C (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1403D98C4 (MiAllocateWorkingSetSwapSupport.c)
 *     MiLockWsSwapExclusive @ 0x1403DBAE8 (MiLockWsSwapExclusive.c)
 *     MiUnlockWsSwapExclusive @ 0x1403DBB44 (MiUnlockWsSwapExclusive.c)
 *     MiGetFirstVad @ 0x14047FEF0 (MiGetFirstVad.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1406ED804 (MiExtendWorkingSetSwapPagefile.c)
 *     VmCheckLargePageInswap @ 0x14078F188 (VmCheckLargePageInswap.c)
 *     EtwTraceWorkingSetSwap @ 0x140A04C08 (EtwTraceWorkingSetSwap.c)
 *     MiFreeWorkingSetSwapContext @ 0x140A39390 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x140A393FC (MiFreeReservationRuns.c)
 *     MiReserveWorkingSetSwapSpace @ 0x140A6A128 (MiReserveWorkingSetSwapSpace.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmOutSwapWorkingSet(PEPROCESS Process, int a2)
{
  struct _LIST_ENTRY **p_Blink; // r14
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v6; // ebx
  struct _LIST_ENTRY *v7; // r12
  __int64 v8; // r15
  int v9; // eax
  unsigned int BestOutswapPagefile; // edi
  PVOID *Pool; // rsi
  __int64 WorkingSetSwapSupport; // rax
  unsigned __int8 v13; // dl
  _QWORD *v14; // rax
  PEX_SPIN_LOCK v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  struct _LIST_ENTRY *v18; // r15
  bool v19; // zf
  unsigned __int64 i; // rax
  unsigned __int64 v21; // rdi
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  int v24; // edi
  PEX_SPIN_LOCK v25; // r15
  unsigned __int8 v26; // dl
  __int64 v28; // rax
  int v29; // eax
  int v30; // ecx
  __int64 v31; // rdi
  __int64 v32; // rdi
  PVOID **v33; // r14
  unsigned int v34; // r15d
  _QWORD *v35; // r14
  __int64 v37; // [rsp+40h] [rbp-C8h]
  __int64 v38; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B8h]
  PEX_SPIN_LOCK SpinLock; // [rsp+58h] [rbp-B0h]
  _QWORD v41[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v42; // [rsp+88h] [rbp-80h]
  _BYTE v43[80]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v44; // [rsp+E0h] [rbp-28h]
  __int128 v45; // [rsp+E8h] [rbp-20h]
  int v46; // [rsp+F8h] [rbp-10h]
  __int128 v47; // [rsp+108h] [rbp+0h]
  __int128 v48; // [rsp+118h] [rbp+10h]
  __int64 v49; // [rsp+128h] [rbp+20h]

  LODWORD(v38) = 0;
  p_Blink = &Process[2].ReadyListHead.Blink;
  v47 = 0LL;
  v49 = 0LL;
  v48 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v37 = (__int64)CurrentThread;
  v6 = 0;
  v7 = 0LL;
  memset_0(v41, 0, 0x98uLL);
  v8 = *((_QWORD *)qword_140E2FD48 + *((unsigned __int16 *)p_Blink + 87));
  v9 = v47;
  if ( a2 )
    v9 = 1;
  v39 = *((_QWORD *)qword_140E2FD48 + *((unsigned __int16 *)p_Blink + 87));
  LODWORD(v47) = v9;
  v41[3] = v8;
  if ( SmStoreExistsForProcess((__int64)Process) )
  {
    v42 = -1;
    v6 = 2;
    LODWORD(v47) = v47 | 4;
  }
  EtwTraceWorkingSetSwap(Process);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v8, (unsigned int *)&v38);
  if ( BestOutswapPagefile != 16 || v6 == 2 )
  {
    Pool = (PVOID *)MiAllocatePool(0x40uLL, 0x50uLL, 1129540941);
    if ( Pool )
    {
      v6 |= 1u;
      MiLockWsSwapExclusive(v37, v8);
      SpinLock = (PEX_SPIN_LOCK)(v8 + 1184);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 1184));
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport((__int64)p_Blink);
      if ( WorkingSetSwapSupport )
      {
        if ( WorkingSetSwapSupport == 1 )
        {
          v24 = -1073740682;
        }
        else
        {
          v24 = -1073741791;
          if ( WorkingSetSwapSupport == 2 )
            v24 = -1073741558;
        }
        MiReleaseSpinLockExclusive((_DWORD *)(v8 + 1184), v13);
      }
      else
      {
        v14 = &unk_140E38518;
        if ( ((_DWORD)p_Blink[23] & 0xF) != 1 )
          v14 = p_Blink + 27;
        v15 = SpinLock;
        *v14 = 1LL;
        MiReleaseSpinLockExclusive(v15, v13);
        while ( 1 )
        {
          v7 = p_Blink[17];
          if ( !v7 )
          {
            v24 = -1073741779;
            goto LABEL_28;
          }
          if ( v42 == -1 )
            break;
          v34 = v38;
          v24 = MiReserveWorkingSetSwapSpace(v39, v43, v16, BestOutswapPagefile, v38, p_Blink[17]);
          if ( v24 >= 0 )
            break;
          if ( v34 >= 0x10 )
            goto LABEL_28;
          v24 = MiExtendWorkingSetSwapPagefile(v39, v7, v34);
          if ( v24 < 0 )
            goto LABEL_28;
          BestOutswapPagefile = v34;
        }
        v17 = MiAllocateWorkingSetSwapSupport(v7);
        *Pool = (PVOID)v17;
        if ( !v17 )
          goto LABEL_40;
        if ( v42 != -1 )
          *(_DWORD *)(v17 + 32) |= 1u;
        v18 = 0LL;
        if ( !a2 )
          goto LABEL_17;
        v18 = (struct _LIST_ENTRY *)((char *)p_Blink[18] - (char *)p_Blink[19]);
        if ( v18 > p_Blink[18] )
          v18 = p_Blink[18];
        if ( v18 && (v28 = MiAllocateWorkingSetSwapSupport(v18), (Pool[1] = (PVOID)v28) == 0LL) )
        {
LABEL_40:
          v24 = -1073741670;
        }
        else
        {
LABEL_17:
          v19 = Process[3].ProcessListEntry.Blink == 0LL;
          v41[0] = *Pool;
          v41[1] = Pool[1];
          v41[2] = p_Blink;
          if ( !v19 )
          {
            v29 = VmCheckLargePageInswap(Process);
            v30 = v46;
            if ( v29 )
              v30 = 1;
            v46 = v30;
          }
          LOCK_ADDRESS_SPACE_SHARED(v37, (__int64)Process);
          if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED(v37, (__int64)Process);
            v24 = -1073741558;
          }
          else
          {
            LOCK_PAGE_TABLE_COMMITMENT(v37, (__int64)Process);
            for ( i = MiGetFirstVad(Process); ; i = MiGetNextVad(v21) )
            {
              v21 = i;
              if ( !i )
                break;
              if ( !(unsigned int)MiVadMapsLargeImage(i) )
              {
                if ( (unsigned int)MiVadSupportsPrivateCommit(v22) )
                  MiOutSwapWorkingSet(
                    (_DWORD)p_Blink,
                    v21,
                    *(_DWORD *)(v21 + 24) << 12,
                    (*(_DWORD *)(v21 + 28) << 12) | 0xFFF,
                    (__int64)v41);
              }
            }
            UNLOCK_PAGE_TABLE_COMMITMENT(v37, (__int64)Process);
            UNLOCK_ADDRESS_SPACE_SHARED(v37, (__int64)Process);
            if ( *((_QWORD *)*Pool + 2) < (unsigned __int64)v7 )
            {
              v31 = MiReAllocateWorkingSetSwapSupport(*Pool);
              if ( v31 )
              {
                ExFreePoolWithTag(*Pool, 0);
                *Pool = (PVOID)v31;
              }
            }
            v23 = Pool[1];
            if ( v23 )
            {
              if ( v23[2] < (unsigned __int64)v18 )
              {
                v32 = MiReAllocateWorkingSetSwapSupport(v23);
                if ( v32 )
                {
                  ExFreePoolWithTag(Pool[1], 0);
                  Pool[1] = (PVOID)v32;
                }
              }
            }
            v7 = (struct _LIST_ENTRY *)*((_QWORD *)*Pool + 3);
            MiGetKernelStackSwapSupport(Pool, Process);
            v6 |= 4u;
            v24 = 0;
          }
        }
LABEL_28:
        v25 = SpinLock;
        ExAcquireSpinLockExclusive(SpinLock);
        if ( MiGetWorkingSetSwapSupport((__int64)p_Blink) == 1 )
        {
          if ( v6 < 4 )
          {
            if ( ((_DWORD)p_Blink[23] & 0xF) == 1 )
              v35 = &unk_140E38518;
            else
              v35 = p_Blink + 27;
            *v35 = 0LL;
          }
          else
          {
            if ( ((_DWORD)p_Blink[23] & 0xF) == 1 )
              v33 = (PVOID **)&unk_140E38518;
            else
              v33 = (PVOID **)(p_Blink + 27);
            *v33 = Pool;
            Pool = 0LL;
            v24 = 0;
          }
        }
        else
        {
          v24 = -1073741558;
        }
        MiReleaseSpinLockExclusive(v25, v26);
        v8 = v39;
        MiFreeReservationRuns(v39, v43);
        if ( !Pool )
          goto LABEL_31;
      }
      MiFreeWorkingSetSwapContext(v8, Pool);
    }
    else
    {
      v24 = -1073741670;
    }
LABEL_31:
    CurrentThread = (struct _KTHREAD *)v37;
    goto LABEL_32;
  }
  v24 = -1073741497;
LABEL_32:
  if ( (v6 & 1) != 0 )
    MiUnlockWsSwapExclusive(CurrentThread, v8);
  *((_QWORD *)&v47 + 1) = v44;
  v48 = v45;
  LODWORD(v49) = v24;
  *(_QWORD *)&v47 = v7;
  EtwTraceWorkingSetSwap(Process);
  return (unsigned int)v24;
}
