/*
 * XREFs of PfSnPrefetchSectionsCleanup @ 0x140954B40
 * Callers:
 *     PfSnPrefetchSections @ 0x140954784 (PfSnPrefetchSections.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x140247210 (ExfAcquireRundownProtection.c)
 *     KeQueryPriorityThread @ 0x140248260 (KeQueryPriorityThread.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1402C6ABC (ExfWaitForRundownProtectionRelease.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

int __fastcall PfSnPrefetchSectionsCleanup(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  struct _WORK_QUEUE_ITEM *v4; // r15
  __int64 v8; // r12
  KPRIORITY PriorityThread; // edi
  void (__fastcall **p_WorkerRoutine)(void *); // rbx
  unsigned __int64 v12; // rtt
  unsigned __int64 v13; // rax
  struct _EX_RUNDOWN_REF RunRef; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+28h] [rbp-28h]
  __int64 v17; // [rsp+30h] [rbp-20h]
  __int64 v18; // [rsp+38h] [rbp-18h]
  int v19; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+44h] [rbp-Ch]
  int v21; // [rsp+4Ch] [rbp-4h]

  v4 = *(struct _WORK_QUEUE_ITEM **)(a1 + 88);
  v8 = a3;
  memset_0(v4, 0, 48LL * a3);
  v18 = 0LL;
  v20 = 0LL;
  v21 = 0;
  RunRef.Count = 0LL;
  v16 = a1;
  v19 = a2;
  v17 = a4;
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  if ( a3 )
  {
    p_WorkerRoutine = &v4->WorkerRoutine;
    do
    {
      p_WorkerRoutine[2] = (void (__fastcall *)(void *))&RunRef;
      *(p_WorkerRoutine - 2) = 0LL;
      *p_WorkerRoutine = (void (__fastcall *)(void *))PfSnSectionInfoCleanupWorkItem;
      p_WorkerRoutine[1] = (void (__fastcall *)(void *))v4;
      _m_prefetchw(&RunRef);
      v12 = RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v12 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&RunRef,
                    (RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                    RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfAcquireRundownProtection(&RunRef);
      ExQueueWorkItem(v4, (WORK_QUEUE_TYPE)(PriorityThread + 32));
      v4 = (struct _WORK_QUEUE_ITEM *)((char *)v4 + 48);
      p_WorkerRoutine += 6;
      --v8;
    }
    while ( v8 );
  }
  v13 = _InterlockedCompareExchange64((volatile signed __int64 *)&RunRef, 1LL, 0LL);
  if ( v13 >= 2 )
    LODWORD(v13) = ExfWaitForRundownProtectionRelease((volatile signed __int64 *)&RunRef, v13);
  return v13;
}
