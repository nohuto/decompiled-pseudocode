/*
 * XREFs of MmOutSwapVirtualAddresses @ 0x1403C64C8
 * Callers:
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403797D0 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140362450 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1403C4138 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1403C4190 (MiAllocateWorkingSetSwapSupport.c)
 *     MiLockWsSwapExclusive @ 0x1403C637C (MiLockWsSwapExclusive.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403C63D8 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403C6458 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockWsSwapExclusive @ 0x1403C6778 (MiUnlockWsSwapExclusive.c)
 *     MiOutSwapWorkingSet @ 0x1403C745C (MiOutSwapWorkingSet.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1403C8D90 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiFindBestOutswapPagefile @ 0x1403C9188 (MiFindBestOutswapPagefile.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1406F71B4 (MiExtendWorkingSetSwapPagefile.c)
 *     MiValidateMemoryRangeEntries @ 0x1409F8F28 (MiValidateMemoryRangeEntries.c)
 *     EtwTraceWorkingSetSwap @ 0x140A03234 (EtwTraceWorkingSetSwap.c)
 *     MiFreeReservationRuns @ 0x140A32F68 (MiFreeReservationRuns.c)
 *     MiReserveWorkingSetSwapSpace @ 0x140A65EA0 (MiReserveWorkingSetSwapSpace.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdi
  unsigned int v24; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int BestOutswapPagefile; // [rsp+34h] [rbp-CCh]
  struct _KTHREAD *v26; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v28; // [rsp+48h] [rbp-B8h]
  _QWORD v29[5]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v30[80]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-38h]
  __int128 v32; // [rsp+D0h] [rbp-30h]
  __int128 v33; // [rsp+F0h] [rbp-10h]
  __int128 v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+110h] [rbp+10h]

  v27 = 0LL;
  v24 = 0;
  v35 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Blink_high = HIWORD(Process[2].ProcessListEntry.Blink);
  v28 = a4;
  v26 = CurrentThread;
  v9 = *((_QWORD *)qword_140E300C8 + Blink_high);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v9, &v24);
  if ( BestOutswapPagefile == 16 )
    return 3221225799LL;
  LODWORD(v33) = 2;
  EtwTraceWorkingSetSwap(Process);
  MiValidateMemoryRangeEntries(a2, a3, &v27);
  memset_0(v29, 0, 0x98uLL);
  MiLockWsSwapExclusive((__int64)CurrentThread, v9);
  v12 = v27;
  v13 = v24;
  while ( 1 )
  {
    v14 = MiReserveWorkingSetSwapSpace(v9, v30, v11, BestOutswapPagefile, v13, v12);
    if ( v14 >= 0 )
      break;
    if ( v13 < 0x10 )
    {
      BestOutswapPagefile = v13;
      v14 = MiExtendWorkingSetSwapPagefile(v9, v12, v13);
      if ( v14 >= 0 )
        continue;
    }
    v15 = (__int64)v26;
    goto LABEL_8;
  }
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(v12);
  v15 = (__int64)v26;
  v17 = WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    v29[0] = WorkingSetSwapSupport;
    v29[2] = (char *)Process + 1024;
    v29[3] = v9;
    LOCK_ADDRESS_SPACE_SHARED((__int64)v26, (__int64)Process);
    LOCK_PAGE_TABLE_COMMITMENT(v15, Process);
    for ( i = &a2[2 * a3]; a2 < i; a2 += 2 )
    {
      Address = MiLocateAddress(*a2);
      if ( Address )
      {
        Flink = (int)Address[3].Flink;
        if ( (Flink & 0x70) == 0 && (Flink & 0x200000) != 0 && (Flink & 0x800000) == 0 && (Flink & 0x180000u) < 0x100000 )
        {
          v21 = *a2 + a2[1] - 1;
          if ( (HIDWORD(Address[1].Blink) | ((unsigned __int64)BYTE1(Address[2].Flink) << 32)) >= v21 >> 12 )
            MiOutSwapWorkingSet((_DWORD)Process + 1024, (_DWORD)Address, *a2, v21, (__int64)v29);
        }
      }
    }
    UNLOCK_PAGE_TABLE_COMMITMENT(v15, (__int64)Process);
    UNLOCK_ADDRESS_SPACE_SHARED(v15, (__int64)Process);
    if ( v17[2] < v12 )
    {
      v23 = MiReAllocateWorkingSetSwapSupport((__int64)v17, v22);
      if ( v23 )
      {
        ExFreePoolWithTag(v17, 0);
        v17 = (_QWORD *)v23;
      }
    }
    v12 = v17[3];
    *v28 = v17;
    v14 = 0;
  }
  else
  {
    v14 = -1073741670;
  }
LABEL_8:
  MiFreeReservationRuns(v9, v30);
  MiUnlockWsSwapExclusive(v15, v9);
  *((_QWORD *)&v33 + 1) = v31;
  v34 = v32;
  LODWORD(v35) = v14;
  *(_QWORD *)&v33 = v12;
  EtwTraceWorkingSetSwap(Process);
  return (unsigned int)v14;
}
