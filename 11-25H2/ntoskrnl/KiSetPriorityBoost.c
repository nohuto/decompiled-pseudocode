/*
 * XREFs of KiSetPriorityBoost @ 0x140326B50
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402F0F0C (KiPrepareReadyThreadForRescheduling.c)
 *     KiNormalPriorityReadyScan @ 0x14031A434 (KiNormalPriorityReadyScan.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 *     KeSetPriorityBoost @ 0x140326970 (KeSetPriorityBoost.c)
 *     KiScanSharedReadyThreads @ 0x140466DC8 (KiScanSharedReadyThreads.c)
 *     KiVpBackingThreadYieldExecution @ 0x1404F4D1C (KiVpBackingThreadYieldExecution.c)
 * Callees:
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     KiThreadSetUnusualBoost @ 0x1404E9084 (KiThreadSetUnusualBoost.c)
 */

unsigned __int64 __fastcall KiSetPriorityBoost(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  __int64 v7; // rdx
  _BYTE *v8; // rcx
  int v9; // r9d
  __int64 v10; // r10
  unsigned __int64 v11; // rax
  unsigned __int64 result; // rax

  KiThreadSetUnusualBoost(a2, (unsigned int)a3, a3);
  if ( v10 )
    KiSetPriorityThread(v8, v10, v9);
  else
    KiUpdateThreadPriority(0LL, v7, a2, v9, 0);
  v11 = *(_QWORD *)(a2 + 32);
  if ( a4 > v11 || (result = v11 - a4, result < a5) )
  {
    result = a5 + a4;
    *(_QWORD *)(a2 + 32) = result;
  }
  return result;
}
