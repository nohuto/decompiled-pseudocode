/*
 * XREFs of MiMappedPageWriter @ 0x140369760
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     MiChargeForWriteInProgressPage @ 0x140211300 (MiChargeForWriteInProgressPage.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     MiGatherMappedPages @ 0x140369B20 (MiGatherMappedPages.c)
 *     KeSetPriorityThread @ 0x1403F96D0 (KeSetPriorityThread.c)
 *     MiFreeModWriterEntry @ 0x14043A49C (MiFreeModWriterEntry.c)
 *     MiDeleteMappedMdls @ 0x140469D6C (MiDeleteMappedMdls.c)
 *     MiUnlockPartitionMappedWriter @ 0x140469EA0 (MiUnlockPartitionMappedWriter.c)
 *     MiLockPartitionMappedWriter @ 0x140469F04 (MiLockPartitionMappedWriter.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMappedPageWriter(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  KPRIORITY v3; // eax
  PVOID *p_Object; // rcx
  char *v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // r14d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  int v10; // edx
  _QWORD *Pool; // rdi
  _QWORD *v12; // rsi
  __int64 *v13; // rax
  __int64 v14; // rax
  unsigned __int32 v15; // eax
  __int64 v16; // r8
  _QWORD *v18; // rax
  int v19; // [rsp+48h] [rbp-4A0h]
  PVOID v20[2]; // [rsp+50h] [rbp-498h] BYREF
  struct _KWAIT_BLOCK v21; // [rsp+60h] [rbp-488h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-428h] BYREF
  _QWORD v23[17]; // [rsp+C8h] [rbp-420h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+150h] [rbp-398h] BYREF

  memset_0(v23, 0, sizeof(v23));
  CurrentThread = KeGetCurrentThread();
  *(_OWORD *)v20 = 0LL;
  v3 = KeSetPriorityThread(CurrentThread, 18);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  p_Object = &Object;
  v19 = v3;
  v5 = (char *)(a1 + 7312);
  v6 = 16LL;
  do
  {
    *p_Object = v5;
    v5 += 24;
    ++p_Object;
    --v6;
  }
  while ( v6 );
  v7 = -1;
  v23[15] = a1 + 88;
  v23[16] = a1 + 840;
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)3;
LABEL_4:
  if ( v7 == -1
    || (v8 = *(_QWORD *)(a1 + 19392), v9 = *(_QWORD *)(a1 + 19616), v8 <= v9)
    || v8 - v9 < 0x10 && !*(_DWORD *)(a1 + 836) )
  {
LABEL_25:
    v7 = KeWaitForMultipleObjects(0x12u, &Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
    goto LABEL_7;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_7:
      v10 = *(_DWORD *)(a1 + 92);
      if ( !v10 && v7 < 0x10 && *(_QWORD *)(88LL * v7 + a1 + 5648) == 0x3FFFFFFFFFLL )
        goto LABEL_25;
      if ( *(_QWORD *)(a1 + 19392) == *(_QWORD *)(a1 + 19616) )
        break;
      if ( *(_DWORD *)(a1 + 672) < *(_DWORD *)(a1 + 664) )
      {
        Pool = (_QWORD *)MiAllocatePool(0x40uLL, 0x118uLL, 1700228429);
        if ( Pool )
        {
          if ( (unsigned int)MiChargeForWriteInProgressPage(a1, 1) )
          {
            *Pool = 97LL;
            v12 = (_QWORD *)(a1 + 680);
            Pool[7] = a1;
LABEL_19:
            v15 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 672));
            if ( v15 > *(_DWORD *)(a1 + 676) )
              *(_DWORD *)(a1 + 676) = v15;
            Pool[12] = 0LL;
            if ( !(unsigned int)MiGatherMappedPages(a1, v7, Pool) )
            {
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 672));
              if ( (Pool[5] & 1) != 0 )
              {
                MiLockPartitionMappedWriter(a1, CurrentThread);
                v18 = (_QWORD *)v12[1];
                if ( (_QWORD *)*v18 != v12 )
LABEL_33:
                  __fastfail(3u);
                *Pool = v12;
                Pool[1] = v18;
                *v18 = Pool;
                v12[1] = Pool;
                MiUnlockPartitionMappedWriter(a1, CurrentThread);
              }
              else
              {
                *Pool = 0LL;
                MiFreeModWriterEntry(Pool);
              }
            }
            goto LABEL_4;
          }
          ExFreePoolWithTag(Pool, 0);
        }
      }
      Pool = 0LL;
      MiLockPartitionMappedWriter(a1, CurrentThread);
      v12 = (_QWORD *)(a1 + 680);
      v13 = *(__int64 **)(a1 + 680);
      if ( v13 == (__int64 *)(a1 + 680) )
      {
        *(_BYTE *)(a1 + 720) = 1;
      }
      else
      {
        Pool = *(_QWORD **)(a1 + 680);
        if ( (_QWORD *)v13[1] != v12 )
          goto LABEL_33;
        v14 = *v13;
        if ( *(_QWORD **)(v14 + 8) != Pool )
          goto LABEL_33;
        *v12 = v14;
        *(_QWORD *)(v14 + 8) = v12;
      }
      MiUnlockPartitionMappedWriter(a1, CurrentThread);
      if ( Pool )
        goto LABEL_19;
      v20[0] = (PVOID)(a1 + 88);
      v20[1] = (PVOID)(a1 + 696);
      v7 = KeWaitForMultipleObjects(2u, v20, WaitAny, WrPageOut, 0, 0, 0LL, &v21);
    }
    if ( !v10 )
      goto LABEL_25;
    if ( !*(_DWORD *)(a1 + 672) )
      break;
    do
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    while ( *(_DWORD *)(a1 + 672) );
  }
  MiDeleteMappedMdls(a1);
  return KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v19, v16);
}
