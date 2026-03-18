/*
 * XREFs of QueryCurrentTimePrecise @ 0x14009F90C
 * Callers:
 *     WorkerThreadRun @ 0x14009FC84 (WorkerThreadRun.c)
 * Callees:
 *     <none>
 */

__int64 QueryCurrentTimePrecise()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  KeQuerySystemTimePrecise(&v1);
  return v1;
}
