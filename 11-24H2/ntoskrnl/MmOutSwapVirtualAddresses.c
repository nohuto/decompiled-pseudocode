/*
 * XREFs of MmOutSwapVirtualAddresses @ 0x140404108
 * Callers:
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14037FE90 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     MiOutSwapWorkingSet @ 0x1402345FC (MiOutSwapWorkingSet.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1402BAD10 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x140367B34 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x140367B8C (MiAllocateWorkingSetSwapSupport.c)
 *     MiLockWsSwapExclusive @ 0x1404043DC (MiLockWsSwapExclusive.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140404438 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1404044B8 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiFindBestOutswapPagefile @ 0x140404CF0 (MiFindBestOutswapPagefile.c)
 *     MiUnlockWsSwapExclusive @ 0x140404DE4 (MiUnlockWsSwapExclusive.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1404065E0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1406F9574 (MiExtendWorkingSetSwapPagefile.c)
 *     MiValidateMemoryRangeEntries @ 0x1409FFD38 (MiValidateMemoryRangeEntries.c)
 *     EtwTraceWorkingSetSwap @ 0x140A06D04 (EtwTraceWorkingSetSwap.c)
 *     MiFreeReservationRuns @ 0x140A3D658 (MiFreeReservationRuns.c)
 *     MiReserveWorkingSetSwapSpace @ 0x140A6C658 (MiReserveWorkingSetSwapSpace.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmOutSwapVirtualAddresses(PEPROCESS Process, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Blink_high; // rcx
  __int64 v9; // r13
  __int64 v11; // r8
  unsigned __int64 v12; // rsi
  unsigned int v13; // r15d
  int v14; // ebx
  __int64 v15; // r15
  _QWORD *WorkingSetSwapSupport; // rax
  _QWORD *v17; // rbx
  unsigned __int64 *i; // r12
  struct _LIST_ENTRY *Address; // rax
  int Flink; // ecx
  __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned int v23; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int BestOutswapPagefile; // [rsp+34h] [rbp-CCh]
  struct _KTHREAD *v25; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v27; // [rsp+48h] [rbp-B8h]
  _QWORD v28[5]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v29[80]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v30; // [rsp+C8h] [rbp-38h]
  __int128 v31; // [rsp+D0h] [rbp-30h]
  __int128 v32; // [rsp+F0h] [rbp-10h]
  __int128 v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+110h] [rbp+10h]

  v26 = 0LL;
  v23 = 0;
  v34 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Blink_high = HIWORD(Process[2].ProcessListEntry.Blink);
  v27 = a4;
  v25 = CurrentThread;
  v9 = *((_QWORD *)qword_140E2FF88 + Blink_high);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v9, &v23);
  if ( BestOutswapPagefile == 16 )
    return 3221225799LL;
  LODWORD(v32) = 2;
  EtwTraceWorkingSetSwap(Process);
  MiValidateMemoryRangeEntries(a2, a3, &v26);
  memset_0(v28, 0, 0x98uLL);
  MiLockWsSwapExclusive(CurrentThread, v9);
  v12 = v26;
  v13 = v23;
  while ( 1 )
  {
    v14 = MiReserveWorkingSetSwapSpace(v9, v29, v11, BestOutswapPagefile, v13, v12);
    if ( v14 >= 0 )
      break;
    if ( v13 < 0x10 )
    {
      BestOutswapPagefile = v13;
      v14 = MiExtendWorkingSetSwapPagefile(v9, v12, v13);
      if ( v14 >= 0 )
        continue;
    }
    v15 = (__int64)v25;
    goto LABEL_8;
  }
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(v12);
  v15 = (__int64)v25;
  v17 = WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    v28[0] = WorkingSetSwapSupport;
    v28[2] = (char *)Process + 1024;
    v28[3] = v9;
    LOCK_ADDRESS_SPACE_SHARED(v25, Process);
    LOCK_PAGE_TABLE_COMMITMENT(v15, Process);
    for ( i = &a2[2 * a3]; a2 < i; a2 += 2 )
    {
      Address = MiLocateAddress(*a2);
      if ( Address )
      {
        Flink = (int)Address[3].Flink;
        if ( (Flink & 0x70) == 0
          && (Flink & 0x200000) != 0
          && (Flink & 0x800000) == 0
          && (Flink & 0x180000u) < 0x100000
          && (HIDWORD(Address[1].Blink) | ((unsigned __int64)BYTE1(Address[2].Flink) << 32)) >= (*a2 + a2[1] - 1) >> 12 )
        {
          MiOutSwapWorkingSet(
            (__int64)&Process[2].ReadyListHead.Blink,
            (__int64)Address,
            *a2,
            *a2 + a2[1] - 1,
            (__int64)v28);
        }
      }
    }
    UNLOCK_PAGE_TABLE_COMMITMENT(v15, (__int64)Process);
    UNLOCK_ADDRESS_SPACE_SHARED(v15, Process);
    if ( v17[2] < v12 )
    {
      v22 = MiReAllocateWorkingSetSwapSupport((__int64)v17, v21);
      if ( v22 )
      {
        ExFreePoolWithTag(v17, 0);
        v17 = (_QWORD *)v22;
      }
    }
    v12 = v17[3];
    *v27 = v17;
    v14 = 0;
  }
  else
  {
    v14 = -1073741670;
  }
LABEL_8:
  MiFreeReservationRuns(v9, v29);
  MiUnlockWsSwapExclusive(v15, v9);
  *((_QWORD *)&v32 + 1) = v30;
  v33 = v31;
  LODWORD(v34) = v14;
  *(_QWORD *)&v32 = v12;
  EtwTraceWorkingSetSwap(Process);
  return (unsigned int)v14;
}
