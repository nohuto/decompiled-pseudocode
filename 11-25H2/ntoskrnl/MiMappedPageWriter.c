/*
 * XREFs of MiMappedPageWriter @ 0x14040C760
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     MiChargeForWriteInProgressPage @ 0x14022E660 (MiChargeForWriteInProgressPage.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     KeSetPriorityThread @ 0x1403778B0 (KeSetPriorityThread.c)
 *     MiDeleteMappedMdls @ 0x14040A9BC (MiDeleteMappedMdls.c)
 *     MiUnlockPartitionMappedWriter @ 0x14040AAF0 (MiUnlockPartitionMappedWriter.c)
 *     MiLockPartitionMappedWriter @ 0x14040AB54 (MiLockPartitionMappedWriter.c)
 *     MiFreeModWriterEntry @ 0x14040ABB0 (MiFreeModWriterEntry.c)
 *     MiGatherMappedPages @ 0x14040CB20 (MiGatherMappedPages.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 Pool; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // rax
  unsigned __int32 v17; // eax
  __int64 *v19; // rax
  int v20; // [rsp+48h] [rbp-4A0h]
  PVOID v21[2]; // [rsp+50h] [rbp-498h] BYREF
  struct _KWAIT_BLOCK v22; // [rsp+60h] [rbp-488h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-428h] BYREF
  _QWORD v24[17]; // [rsp+C8h] [rbp-420h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+150h] [rbp-398h] BYREF

  memset_0(v24, 0, sizeof(v24));
  CurrentThread = KeGetCurrentThread();
  *(_OWORD *)v21 = 0LL;
  v3 = KeSetPriorityThread(CurrentThread, 18);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  p_Object = &Object;
  v20 = v3;
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
  v24[15] = a1 + 88;
  v24[16] = a1 + 840;
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
        Pool = MiAllocatePool(0x40uLL, 0x118uLL, 1700228429);
        if ( Pool )
        {
          if ( (unsigned int)MiChargeForWriteInProgressPage(a1, 1, v12, v13) )
          {
            *(_QWORD *)Pool = 97LL;
            v14 = (_QWORD *)(a1 + 680);
            *(_QWORD *)(Pool + 56) = a1;
LABEL_19:
            v17 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 672));
            if ( v17 > *(_DWORD *)(a1 + 676) )
              *(_DWORD *)(a1 + 676) = v17;
            *(_QWORD *)(Pool + 96) = 0LL;
            if ( !(unsigned int)MiGatherMappedPages(a1, v7, Pool) )
            {
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 672));
              if ( (*(_DWORD *)(Pool + 40) & 1) != 0 )
              {
                MiLockPartitionMappedWriter(a1, (__int64)CurrentThread);
                v19 = (__int64 *)v14[1];
                if ( (_QWORD *)*v19 != v14 )
LABEL_33:
                  __fastfail(3u);
                *(_QWORD *)Pool = v14;
                *(_QWORD *)(Pool + 8) = v19;
                *v19 = Pool;
                v14[1] = Pool;
                MiUnlockPartitionMappedWriter(a1, (__int64)CurrentThread);
              }
              else
              {
                *(_QWORD *)Pool = 0LL;
                MiFreeModWriterEntry((_QWORD *)Pool, 1u);
              }
            }
            goto LABEL_4;
          }
          ExFreePoolWithTag((PVOID)Pool, 0);
        }
      }
      Pool = 0LL;
      MiLockPartitionMappedWriter(a1, (__int64)CurrentThread);
      v14 = (_QWORD *)(a1 + 680);
      v15 = *(__int64 **)(a1 + 680);
      if ( v15 == (__int64 *)(a1 + 680) )
      {
        *(_BYTE *)(a1 + 720) = 1;
      }
      else
      {
        Pool = *(_QWORD *)(a1 + 680);
        if ( (_QWORD *)v15[1] != v14 )
          goto LABEL_33;
        v16 = *v15;
        if ( *(_QWORD *)(v16 + 8) != Pool )
          goto LABEL_33;
        *v14 = v16;
        *(_QWORD *)(v16 + 8) = v14;
      }
      MiUnlockPartitionMappedWriter(a1, (__int64)CurrentThread);
      if ( Pool )
        goto LABEL_19;
      v21[0] = (PVOID)(a1 + 88);
      v21[1] = (PVOID)(a1 + 696);
      v7 = KeWaitForMultipleObjects(2u, v21, WaitAny, WrPageOut, 0, 0, 0LL, &v22);
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
  return KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v20);
}
