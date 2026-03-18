/*
 * XREFs of ?BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z @ 0x1403F4570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14027A168 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall __noreturn BLTQUEUE::BltQueueWorkerThread(BLTQUEUE *StartContext)
{
  unsigned int v2; // eax

  v2 = (*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)StartContext + 16) + 8LL))(*((_QWORD **)StartContext + 16));
  KeSetActualBasePriorityThread(KeGetCurrentThread(), v2);
  BLTQUEUE::BltQueueWorker(StartContext);
}
