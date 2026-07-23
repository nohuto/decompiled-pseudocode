/*
 * XREFs of PfSnPrefetchSections @ 0x140938134
 * Callers:
 *     PfSnAsyncPrefetchStep @ 0x140937D74 (PfSnAsyncPrefetchStep.c)
 * Callees:
 *     ExfWaitForRundownProtectionRelease @ 0x1402BB63C (ExfWaitForRundownProtectionRelease.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x1402E24A0 (KeQueryPriorityThread.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PfSnLogPrefetchSectionsStop @ 0x140938394 (PfSnLogPrefetchSectionsStop.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1409384F0 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnLogPrefetchSectionsStart @ 0x1409385FC (PfSnLogPrefetchSectionsStart.c)
 *     PfSnLogGetReadListsStart @ 0x140938730 (PfSnLogGetReadListsStart.c)
 *     PfSnLogGetReadListsStop @ 0x14093883C (PfSnLogGetReadListsStop.c)
 *     MmPrefetchPagesEx @ 0x140938DE0 (MmPrefetchPagesEx.c)
 */

__int64 __fastcall PfSnPrefetchSections(_QWORD *a1, unsigned int a2, int a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v5; // r12
  int v7; // r14d
  __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned int v11; // esi
  int v12; // r9d
  __int64 v13; // rsi
  unsigned int *v14; // rbx
  unsigned int *v15; // rbx
  unsigned __int64 v16; // rtt
  unsigned __int64 v17; // rax
  int v18; // ebx
  __int64 v19; // r8
  void *v21; // [rsp+30h] [rbp-40h]
  struct _EX_RUNDOWN_REF RunRef[2]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v23; // [rsp+48h] [rbp-28h]
  __int128 v24; // [rsp+58h] [rbp-18h]
  __int64 v25; // [rsp+B0h] [rbp+40h]
  WORK_QUEUE_TYPE QueueType; // [rsp+C8h] [rbp+58h]

  v5 = *a1;
  v25 = *a1;
  v7 = a2;
  v9 = *a1;
  v10 = 0;
  *(_OWORD *)&RunRef[0].Count = 0LL;
  v11 = 0;
  v23 = 0LL;
  v24 = 0LL;
  PfSnLogPrefetchSectionsStart(v9, (unsigned int)a3, a2);
  if ( v7 >= 2 || a3 >= 1 << *(_DWORD *)(*a1 + 124LL) )
    goto LABEL_29;
  if ( !v7 )
    goto LABEL_4;
  if ( v7 != 1 )
  {
LABEL_29:
    v18 = -1073741811;
    goto LABEL_24;
  }
  v10 = 1;
LABEL_4:
  v13 = *(unsigned int *)(v5 + 88);
  v21 = (void *)a1[8];
  memset_0(v21, 0, 8 * v13);
  v14 = (unsigned int *)a1[11];
  memset_0(v14, 0, 0x600uLL);
  RunRef[1].Count = (unsigned __int64)a1;
  *(_QWORD *)((char *)&v24 + 4) = 0LL;
  HIDWORD(v24) = 0;
  v23 = a5;
  LODWORD(v24) = v13;
  QueueType = KeQueryPriorityThread(KeGetCurrentThread()) + 32;
  if ( (unsigned int)v13 > 0x20 )
    v13 = 32LL;
  PfSnLogGetReadListsStart(v5, (unsigned int)v13);
  if ( (_DWORD)v13 )
  {
    v15 = v14 + 11;
    do
    {
      *(v15 - 1) = a3;
      *(_QWORD *)(v15 - 3) = RunRef;
      *v15 = v10 | *v15 & 0xFFFFFFFE;
      *(_QWORD *)(v15 - 7) = PfSnPopulateReadList;
      *(_QWORD *)(v15 - 11) = 0LL;
      *(_QWORD *)(v15 - 5) = v15 - 11;
      _m_prefetchw(RunRef);
      v16 = RunRef[0].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v16 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)RunRef,
                    (RunRef[0].Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                    RunRef[0].Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfAcquireRundownProtection(RunRef);
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v15 - 11), QueueType);
      v15 += 12;
      --v13;
    }
    while ( v13 );
    v7 = a2;
    v5 = v25;
  }
  v17 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, 1LL, 0LL);
  if ( v17 >= 2 )
    ExfWaitForRundownProtectionRelease((volatile signed __int64 *)RunRef, v17);
  PfSnLogGetReadListsStop(v5);
  v10 = DWORD2(v23);
  v18 = DWORD2(v24);
  if ( SDWORD2(v24) < 0 )
  {
    v11 = 0;
    if ( !DWORD2(v23) )
      goto LABEL_24;
  }
  else
  {
    v11 = DWORD1(v24);
    if ( !DWORD2(v23) )
    {
      v18 = 0;
      goto LABEL_24;
    }
    if ( DWORD1(v24) )
    {
      LODWORD(v5) = v25;
      v18 = MmPrefetchPagesEx(DWORD2(v23), v21, a1 + 13);
      if ( v18 >= 0 && !a1[13] )
        v18 = -2147483622;
    }
    else
    {
      v18 = -1073741823;
    }
  }
  v19 = v10;
  if ( v10 > 0x20 )
    v19 = 32LL;
  PfSnPrefetchSectionsCleanup(a1, v10, v19, a5);
LABEL_24:
  PfSnLogPrefetchSectionsStop(v5, a3, v7, v12, v11, v10);
  return (unsigned int)v18;
}
