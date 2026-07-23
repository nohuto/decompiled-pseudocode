/*
 * XREFs of MmOutSwapWorkingSet @ 0x1403C6F10
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140ACFA40 (PspChangeProcessExecutionState.c)
 * Callees:
 *     SmStoreExistsForProcess @ 0x14020DF24 (SmStoreExistsForProcess.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiGetNextVad @ 0x140291ACC (MiGetNextVad.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiVadSupportsPrivateCommit @ 0x1403455B0 (MiVadSupportsPrivateCommit.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140362450 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiGetKernelStackSwapSupport @ 0x1403C3FE0 (MiGetKernelStackSwapSupport.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1403C4138 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1403C4190 (MiAllocateWorkingSetSwapSupport.c)
 *     MiGetFirstVad @ 0x1403C6358 (MiGetFirstVad.c)
 *     MiLockWsSwapExclusive @ 0x1403C637C (MiLockWsSwapExclusive.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403C63D8 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403C6458 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockWsSwapExclusive @ 0x1403C6778 (MiUnlockWsSwapExclusive.c)
 *     MiVadMapsLargeImage @ 0x1403C7440 (MiVadMapsLargeImage.c)
 *     MiOutSwapWorkingSet @ 0x1403C745C (MiOutSwapWorkingSet.c)
 *     MiGetWorkingSetSwapSupport @ 0x1403C84EC (MiGetWorkingSetSwapSupport.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1403C8D90 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiFindBestOutswapPagefile @ 0x1403C9188 (MiFindBestOutswapPagefile.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1406F71B4 (MiExtendWorkingSetSwapPagefile.c)
 *     VmCheckLargePageInswap @ 0x14079E658 (VmCheckLargePageInswap.c)
 *     EtwTraceWorkingSetSwap @ 0x140A03234 (EtwTraceWorkingSetSwap.c)
 *     MiFreeWorkingSetSwapContext @ 0x140A32EFC (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x140A32F68 (MiFreeReservationRuns.c)
 *     MiReserveWorkingSetSwapSpace @ 0x140A65EA0 (MiReserveWorkingSetSwapSpace.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmOutSwapWorkingSet(PEPROCESS Process, int a2)
{
  struct _LIST_ENTRY **p_Blink; // r14
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v6; // ebx
  unsigned __int64 v7; // r12
  __int64 v8; // r15
  int v9; // eax
  unsigned int BestOutswapPagefile; // edi
  __int64 Pool; // rsi
  int v12; // edi
  __int64 WorkingSetSwapSupport; // rax
  unsigned __int8 v15; // dl
  _QWORD *v16; // rax
  PEX_SPIN_LOCK v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  unsigned __int64 v20; // r15
  bool v21; // zf
  unsigned __int64 i; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  PEX_SPIN_LOCK v27; // r15
  unsigned __int8 v28; // dl
  unsigned int v29; // r15d
  _QWORD *v30; // rax
  int v31; // eax
  int v32; // ecx
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 *v35; // r14
  _QWORD *v36; // r14
  __int64 v38; // [rsp+40h] [rbp-C8h]
  __int64 v39; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B8h]
  PEX_SPIN_LOCK SpinLock; // [rsp+58h] [rbp-B0h]
  _QWORD v42[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v43; // [rsp+88h] [rbp-80h]
  _BYTE v44[80]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v45; // [rsp+E0h] [rbp-28h]
  __int128 v46; // [rsp+E8h] [rbp-20h]
  int v47; // [rsp+F8h] [rbp-10h]
  __int128 v48; // [rsp+108h] [rbp+0h]
  __int128 v49; // [rsp+118h] [rbp+10h]
  __int64 v50; // [rsp+128h] [rbp+20h]

  LODWORD(v39) = 0;
  p_Blink = &Process[2].ReadyListHead.Blink;
  v48 = 0LL;
  v50 = 0LL;
  v49 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v38 = (__int64)CurrentThread;
  v6 = 0;
  v7 = 0LL;
  memset_0(v42, 0, 0x98uLL);
  v8 = *((_QWORD *)qword_140E300C8 + *((unsigned __int16 *)p_Blink + 87));
  v9 = v48;
  if ( a2 )
    v9 = 1;
  v40 = *((_QWORD *)qword_140E300C8 + *((unsigned __int16 *)p_Blink + 87));
  LODWORD(v48) = v9;
  v42[3] = v8;
  if ( SmStoreExistsForProcess((__int64)Process) )
  {
    v43 = -1;
    v6 = 2;
    LODWORD(v48) = v48 | 4;
  }
  EtwTraceWorkingSetSwap(Process);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v8, &v39);
  if ( BestOutswapPagefile != 16 || v6 == 2 )
  {
    Pool = MiAllocatePool(0x40uLL, 0x50uLL, 1129540941);
    if ( Pool )
    {
      v6 |= 1u;
      MiLockWsSwapExclusive(v38, v8);
      SpinLock = (PEX_SPIN_LOCK)(v8 + 1184);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 1184));
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(p_Blink);
      if ( WorkingSetSwapSupport )
      {
        if ( WorkingSetSwapSupport == 1 )
        {
          v12 = -1073740682;
        }
        else
        {
          v12 = -1073741791;
          if ( WorkingSetSwapSupport == 2 )
            v12 = -1073741558;
        }
        MiReleaseSpinLockExclusive((_DWORD *)(v8 + 1184), v15);
      }
      else
      {
        v16 = &unk_140E38898;
        if ( ((_DWORD)p_Blink[23] & 0xF) != 1 )
          v16 = p_Blink + 27;
        v17 = SpinLock;
        *v16 = 1LL;
        MiReleaseSpinLockExclusive(v17, v15);
        while ( 1 )
        {
          v7 = (unsigned __int64)p_Blink[17];
          if ( !v7 )
          {
            v12 = -1073741779;
            goto LABEL_33;
          }
          if ( v43 == -1 )
            break;
          v29 = v39;
          v12 = MiReserveWorkingSetSwapSpace(v40, v44, v18, BestOutswapPagefile, v39, p_Blink[17]);
          if ( v12 >= 0 )
            break;
          if ( v29 >= 0x10 )
            goto LABEL_33;
          v12 = MiExtendWorkingSetSwapPagefile(v40, v7, v29);
          if ( v12 < 0 )
            goto LABEL_33;
          BestOutswapPagefile = v29;
        }
        v19 = MiAllocateWorkingSetSwapSupport(v7);
        *(_QWORD *)Pool = v19;
        if ( !v19 )
          goto LABEL_45;
        if ( v43 != -1 )
          *((_DWORD *)v19 + 8) |= 1u;
        v20 = 0LL;
        if ( !a2 )
          goto LABEL_22;
        v20 = (char *)p_Blink[18] - (char *)p_Blink[19];
        if ( v20 > (unsigned __int64)p_Blink[18] )
          v20 = (unsigned __int64)p_Blink[18];
        if ( v20 && (v30 = MiAllocateWorkingSetSwapSupport(v20), (*(_QWORD *)(Pool + 8) = v30) == 0LL) )
        {
LABEL_45:
          v12 = -1073741670;
        }
        else
        {
LABEL_22:
          v21 = Process[3].ProcessListEntry.Blink == 0LL;
          v42[0] = *(_QWORD *)Pool;
          v42[1] = *(_QWORD *)(Pool + 8);
          v42[2] = p_Blink;
          if ( !v21 )
          {
            v31 = VmCheckLargePageInswap(Process);
            v32 = v47;
            if ( v31 )
              v32 = 1;
            v47 = v32;
          }
          LOCK_ADDRESS_SPACE_SHARED(v38, (__int64)Process);
          if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED(v38, (__int64)Process);
            v12 = -1073741558;
          }
          else
          {
            LOCK_PAGE_TABLE_COMMITMENT(v38, Process);
            for ( i = (unsigned __int64)MiGetFirstVad((__int64)Process); ; i = MiGetNextVad(v23) )
            {
              v23 = i;
              if ( !i )
                break;
              if ( !(unsigned int)MiVadMapsLargeImage(i) && (unsigned int)MiVadSupportsPrivateCommit(v24) )
                MiOutSwapWorkingSet(
                  (_DWORD)p_Blink,
                  v23,
                  *(_DWORD *)(v23 + 24) << 12,
                  (*(_DWORD *)(v23 + 28) << 12) | 0xFFF,
                  (__int64)v42);
            }
            UNLOCK_PAGE_TABLE_COMMITMENT(v38, (__int64)Process);
            UNLOCK_ADDRESS_SPACE_SHARED(v38, (__int64)Process);
            if ( *(_QWORD *)(*(_QWORD *)Pool + 16LL) < v7 )
            {
              v33 = MiReAllocateWorkingSetSwapSupport(*(_QWORD *)Pool, v25);
              if ( v33 )
              {
                ExFreePoolWithTag(*(PVOID *)Pool, 0);
                *(_QWORD *)Pool = v33;
              }
            }
            v26 = *(_QWORD *)(Pool + 8);
            if ( v26 )
            {
              if ( *(_QWORD *)(v26 + 16) < v20 )
              {
                v34 = MiReAllocateWorkingSetSwapSupport(v26, v25);
                if ( v34 )
                {
                  ExFreePoolWithTag(*(PVOID *)(Pool + 8), 0);
                  *(_QWORD *)(Pool + 8) = v34;
                }
              }
            }
            v7 = *(_QWORD *)(*(_QWORD *)Pool + 24LL);
            MiGetKernelStackSwapSupport(Pool, (__int64)Process);
            v6 |= 4u;
            v12 = 0;
          }
        }
LABEL_33:
        v27 = SpinLock;
        ExAcquireSpinLockExclusive(SpinLock);
        if ( MiGetWorkingSetSwapSupport(p_Blink) == 1 )
        {
          if ( v6 < 4 )
          {
            if ( ((_DWORD)p_Blink[23] & 0xF) == 1 )
              v36 = &unk_140E38898;
            else
              v36 = p_Blink + 27;
            *v36 = 0LL;
          }
          else
          {
            if ( ((_DWORD)p_Blink[23] & 0xF) == 1 )
              v35 = (__int64 *)&unk_140E38898;
            else
              v35 = (__int64 *)(p_Blink + 27);
            *v35 = Pool;
            Pool = 0LL;
            v12 = 0;
          }
        }
        else
        {
          v12 = -1073741558;
        }
        MiReleaseSpinLockExclusive(v27, v28);
        v8 = v40;
        MiFreeReservationRuns(v40, v44);
        if ( !Pool )
          goto LABEL_8;
      }
      MiFreeWorkingSetSwapContext(v8, Pool);
    }
    else
    {
      v12 = -1073741670;
    }
LABEL_8:
    CurrentThread = (struct _KTHREAD *)v38;
    goto LABEL_9;
  }
  v12 = -1073741497;
LABEL_9:
  if ( (v6 & 1) != 0 )
    MiUnlockWsSwapExclusive((__int64)CurrentThread, v8);
  *((_QWORD *)&v48 + 1) = v45;
  v49 = v46;
  LODWORD(v50) = v12;
  *(_QWORD *)&v48 = v7;
  EtwTraceWorkingSetSwap(Process);
  return (unsigned int)v12;
}
