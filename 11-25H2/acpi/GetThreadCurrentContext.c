/*
 * XREFs of GetThreadCurrentContext @ 0x1400147AC
 * Callers:
 *     SyncEvalObject @ 0x1400143C8 (SyncEvalObject.c)
 *     NestAsyncEvalObject @ 0x14006D32C (NestAsyncEvalObject.c)
 *     SyncLoadDDB @ 0x1400C90F8 (SyncLoadDDB.c)
 * Callees:
 *     <none>
 */

__int64 GetThreadCurrentContext()
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v1; // rcx
  __int64 i; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  for ( i = RunningContextListHead - 392; &RunningContextListHead != (__int64 *)(i + 392); i = *(_QWORD *)(i + 392)
                                                                                             - 392LL )
  {
    if ( *(struct _KTHREAD **)(i + 408) == CurrentThread )
      return i;
  }
  return v1;
}
