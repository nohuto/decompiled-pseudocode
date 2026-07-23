/*
 * XREFs of MiMappedPageWriter @ 0x1402EB500
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiGatherMappedPages @ 0x1402EB8C0 (MiGatherMappedPages.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     MiChargeForWriteInProgressPage @ 0x14033A660 (MiChargeForWriteInProgressPage.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     MiFreeModWriterEntry @ 0x14042CCD0 (MiFreeModWriterEntry.c)
 *     MiDeleteMappedMdls @ 0x140462C9C (MiDeleteMappedMdls.c)
 *     MiUnlockPartitionMappedWriter @ 0x140462DD0 (MiUnlockPartitionMappedWriter.c)
 *     MiLockPartitionMappedWriter @ 0x140462E34 (MiLockPartitionMappedWriter.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMappedPageWriter(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  PVOID *p_Object; // rcx
  char *v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // r14d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  int v9; // edx
  _QWORD *Pool; // rdi
  _QWORD *v11; // rsi
  __int64 *v12; // rax
  __int64 v13; // rax
  unsigned __int32 v14; // eax
  _QWORD *v16; // rax
  PVOID v17[2]; // [rsp+50h] [rbp-498h] BYREF
  struct _KWAIT_BLOCK v18; // [rsp+60h] [rbp-488h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-428h] BYREF
  _QWORD v20[17]; // [rsp+C8h] [rbp-420h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+150h] [rbp-398h] BYREF

  memset_0(v20, 0, sizeof(v20));
  CurrentThread = KeGetCurrentThread();
  *(_OWORD *)v17 = 0LL;
  KeSetPriorityThread(CurrentThread, 18);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  p_Object = &Object;
  v4 = (char *)(a1 + 7312);
  v5 = 16LL;
  do
  {
    *p_Object = v4;
    v4 += 24;
    ++p_Object;
    --v5;
  }
  while ( v5 );
  v6 = -1;
  v20[15] = a1 + 88;
  v20[16] = a1 + 840;
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)3;
LABEL_4:
  if ( v6 == -1
    || (v7 = *(_QWORD *)(a1 + 19392), v8 = *(_QWORD *)(a1 + 19616), v7 <= v8)
    || v7 - v8 < 0x10 && !*(_DWORD *)(a1 + 836) )
  {
LABEL_25:
    v6 = KeWaitForMultipleObjects(0x12u, &Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
    goto LABEL_7;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_7:
      v9 = *(_DWORD *)(a1 + 92);
      if ( !v9 && v6 < 0x10 && *(_QWORD *)(88LL * v6 + a1 + 5648) == 0x3FFFFFFFFFLL )
        goto LABEL_25;
      if ( *(_QWORD *)(a1 + 19392) == *(_QWORD *)(a1 + 19616) )
        break;
      if ( *(_DWORD *)(a1 + 672) < *(_DWORD *)(a1 + 664) )
      {
        Pool = (_QWORD *)MiAllocatePool(0x40uLL, 0x118uLL, 1700228429);
        if ( Pool )
        {
          if ( (unsigned int)MiChargeForWriteInProgressPage(a1, 1LL) )
          {
            *Pool = 97LL;
            v11 = (_QWORD *)(a1 + 680);
            Pool[7] = a1;
LABEL_19:
            v14 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 672));
            if ( v14 > *(_DWORD *)(a1 + 676) )
              *(_DWORD *)(a1 + 676) = v14;
            Pool[12] = 0LL;
            if ( !(unsigned int)MiGatherMappedPages(a1, v6, Pool) )
            {
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 672));
              if ( (Pool[5] & 1) != 0 )
              {
                MiLockPartitionMappedWriter(a1, CurrentThread);
                v16 = (_QWORD *)v11[1];
                if ( (_QWORD *)*v16 != v11 )
LABEL_33:
                  __fastfail(3u);
                *Pool = v11;
                Pool[1] = v16;
                *v16 = Pool;
                v11[1] = Pool;
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
      v11 = (_QWORD *)(a1 + 680);
      v12 = *(__int64 **)(a1 + 680);
      if ( v12 == (__int64 *)(a1 + 680) )
      {
        *(_BYTE *)(a1 + 720) = 1;
      }
      else
      {
        Pool = *(_QWORD **)(a1 + 680);
        if ( (_QWORD *)v12[1] != v11 )
          goto LABEL_33;
        v13 = *v12;
        if ( *(_QWORD **)(v13 + 8) != Pool )
          goto LABEL_33;
        *v11 = v13;
        *(_QWORD *)(v13 + 8) = v11;
      }
      MiUnlockPartitionMappedWriter(a1, CurrentThread);
      if ( Pool )
        goto LABEL_19;
      v17[0] = (PVOID)(a1 + 88);
      v17[1] = (PVOID)(a1 + 696);
      v6 = KeWaitForMultipleObjects(2u, v17, WaitAny, WrPageOut, 0, 0, 0LL, &v18);
    }
    if ( !v9 )
      goto LABEL_25;
    if ( !*(_DWORD *)(a1 + 672) )
      break;
    do
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    while ( *(_DWORD *)(a1 + 672) );
  }
  MiDeleteMappedMdls(a1);
  return KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread);
}
